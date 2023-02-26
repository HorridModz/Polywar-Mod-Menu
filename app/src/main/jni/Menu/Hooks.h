Vector3 GetMyPosition();

// Init Hooks

void *weaponcontrollerinstance = NULL;
void *weaponiteminstance = NULL;
monostring *(*CreateMonoString)(const char *str);
int (*MonoStringToInt)(monostring *provider);
// Ignoretype is just a placeholder - it does not actually work!
ignoretype (*UnityWebRequest_Get)(monostring * url);
// Ignoretype is just a placeholder - it does not actually work!
ignoretype (*UnityWebRequest_SendWebRequest)();
void (*ChatMessage)(void *instance, monostring * message);
void (*ChatPlayerMessage)(void *instance, monostring * message, bool team);
void (*HideWeapon)(void *instance, bool b);
void (*UseGrenade)(void *instance);
void (*Respawn)(void *instance);
void (*Teleport)(void *instance, Vector3 pos, Vector3 rot);
void (*BuyVIP)(void *instance, int index);
	
void(*old_PlayerScript_Update)(void *instance);
void PlayerScript_Update(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            auto weapon = *(void **)((uint64_t)weaponcontrollerinstance + Offsets::Fields.WeaponController_weapon);
            auto PlayerConfig = *(void **)((uint64_t)instance + Offsets::Fields.PlayerScript_PlayerConfig);
            if (Features::Player.isHealth) {
                SetObscuredInt((uint64_t) instance + Offsets::Fields.PlayerScript_health, Features::Player.SeekBar_Health);
            }
            if (Features::Player.isArmor) {
                SetObscuredInt((uint64_t) instance + Offsets::Fields.PlayerScript_armor, Features::Player.SeekBar_Armor);
            }
            if (Features::Player.Button_isHeal) {
                    SetObscuredInt((uint64_t) instance + Offsets::Fields.PlayerScript_health, 100);
                Features::Player.Button_isHeal = false;
            }
            if (Features::Player.Button_isSwitchTeam) {
                    if ((*(int *) ((uint64_t) instance + Offsets::Fields.PlayerScript_team)) == 1) {
                        *(int *) ((uint64_t) instance + Offsets::Fields.PlayerScript_team) = 2;
                    } else {
                        *(int *) ((uint64_t) instance + Offsets::Fields.PlayerScript_team) = 1;
                    }
                Features::Player.Button_isSwitchTeam = false;
            }
            if (Features::Player.isNoTeam) {
                *(int *) ((uint64_t) instance + Offsets::Fields.PlayerScript_team) = 0;
            }
            if (Features::Match.isChatSpamV1) {
                test = "PlayerScript_Update Chat Spam V1";
                ChatMessage(instance, CreateMonoString(Features::Match.InputText_ChatSpamMessage.c_str()));
            }
            if (Features::Match.isChatSpamV2) {
                test = "PlayerScript_Update Chat Spam V2";
                ChatPlayerMessage(instance, CreateMonoString(Features::Match.InputText_ChatSpamMessage.c_str()),false);
            }
            if (Features::Respawning.Button_isRespawn) {
                Respawn(instance);
                Features::Respawning.Button_isRespawn = false;
            }
            if (Features::Grenades.isInfiniteGrenades) {
                SetObscuredInt((uint64_t) instance + Offsets::Fields.PlayerScript_frags, 999);
            }
            if (Features::Movement.Teleport_Button_isTeleport) {
                Teleport(instance,Vector3(float(Features::Movement.Teleport_InputValue_X),float(Features::Movement.Teleport_InputValue_Y),float(Features::Movement.Teleport_InputValue_Z)),Vector3(0.0f, 0.0f, 0.0f));
                Features::Movement.Teleport_Button_isTeleport = false;
            }
            if (Features::Currency.Vip_Button_isBuyVipPermanent) {
                BuyVIP(instance, 1);
                Features::Currency.Vip_Button_isBuyVipPermanent = false;
            }
            if (Features::Weapons.isSpoofWeapon) {
                // WeaponController's Weaponid field is a string, but our mod menu returns an int. So, we have lots of conversions
                // to do!
                if (MonoStringToInt(*(monostring * *) ((uint64_t) weaponcontrollerinstance
                + Offsets::Fields.WeaponController_weaponID))
                == Features::Weapons.InputValue_OriginalWeaponId) {
                    *(monostring * *) ((uint64_t) weaponcontrollerinstance
                    + Offsets::Fields.WeaponController_weaponID)
                    = CreateMonoString((const char*) Features::Weapons.InputValue_SpoofedWeaponId);
                }
                //  WeaponItem's Weaponid field is an int, which makes it easier
                if (((uint64_t) weaponiteminstance + Offsets::Fields.WeaponItem_weaponID)
                    == Features::Weapons.InputValue_OriginalWeaponId) {
                    *(int *) ((uint64_t) weaponiteminstance + Offsets::Fields.WeaponItem_weaponID)
                            = Features::Weapons.InputValue_SpoofedWeaponId;
                }
            }
            if (Features::Weapons.isInstantReload) {
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_reloadSpeed) = 1000.0f;
            } else if (Features::Weapons.isReloadSpeed) {
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_reloadSpeed) = float(Features::Weapons.SeekBar_ReloadSpeed);
            }
            if (Features::Weapons.isInstantProjectileSpeed) {
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_projectileSpeed) = 1000.0f;
            } else if (Features::Weapons.isProjectileSpeed) {
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_projectileSpeed) = float(Features::Weapons.SeekBar_ProjectileSpeed);
            }
            if (Features::Weapons.isAreaDamage) {
                *(bool *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_areaDamage) = true;
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_areaRadius) = float(Features::Weapons.SeekBar_AreaDamageRadius);
            }
            if (Features::Weapons.isNoSwitchDelay) {
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_weaponSwitchTime) = 0.0f;
            }
            if (Features::Weapons.isClipSize) {
                *(bool *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_areaDamage) = true;
                *(float *) ((uint64_t) weaponcontrollerinstance + Offsets::Fields.WeaponController_areaRadius) = float(Features::Weapons.SeekBar_AreaDamageRadius);
            }
            if (Features::Weapons.isFireRate) {
                *(float *) ((uint64_t) weapon + Offsets::Fields.Weapon_fireRate) = float(Features::Weapons.SeekBar_FireRate);
            }
            if (Features::Movement.isWalkSpeed) {
                *(float *) ((uint64_t) instance + Offsets::Fields.PlayerScript_walkSpeed) = float(Features::Movement.SeekBar_WalkSpeed);
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_walkSpeed, float(Features::Movement.SeekBar_WalkSpeed));
            }
            if (Features::Movement.isRunSpeed) {
                *(float *) ((uint64_t) instance + Offsets::Fields.PlayerScript_runSpeed) = float(Features::Movement.SeekBar_RunSpeed);
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_runSpeed, float(Features::Movement.SeekBar_RunSpeed));
            }
            if (Features::Movement.isSprintSpeed) {
                *(float *) ((uint64_t) instance + Offsets::Fields.PlayerScript_sprintSpeed) = float(Features::Movement.SeekBar_SprintSpeed);
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_sprintSpeed, float(Features::Movement.SeekBar_SprintSpeed));
            }
            if (Features::Aimbot.isOpAimAssist) {
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_autoaimAngle,120.0f);
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_autoaimForce,100.0f);
            }
            if (Features::Movement.isNoClip) {
                *(float *) ((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_colliderRadius) = 0.0f;
            }
            if (Features::Weapons.isNoSpread) {
                *(float *) ((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_spreadSize) = 0.0f;
            }
            if (Features::Grenades.isNoGrenadeAnimation) {
                *(float *) ((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_throwDelay) = 0.0f;
            }
            if (Features::Movement.isJumpSpeed) {
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_jumpSpeed,float(Features::Movement.SeekBar_JumpSpeed));
            }
            if (Features::Movement.isJumpSpeed) {
                SetObscuredFloat((uint64_t) PlayerConfig + Offsets::Fields.PlayerConfig_jumpSpeed,float(Features::Movement.SeekBar_JumpSpeed));
            }
        }
    }
    old_PlayerScript_Update(instance);
}

// Ignoretype is just a placeholder - it does not actually work!
void(*old_PlayerScript_Respawn_Internal)(void *instance, Vector3 RespawnPos, float RespawnRotY,  ignoretype info);
void PlayerScript_Respawn_Internal(void *instance, Vector3 RespawnPos, float RespawnRotY, ignoretype info) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Respawning.isDisableRespawn) {
                return;
            }
            if (Features::Respawning.isRespawnInPlace) {
                old_PlayerScript_Respawn_Internal(instance,GetMyPosition(), RespawnRotY, info);
                return;
            }
            if (Features::Respawning.CustomRespawnPositon_isCustomRespawnPosition) {
                old_PlayerScript_Respawn_Internal(instance,Vector3(float(Features::Respawning.CustomRespawnPositon_InputValue_X),float(Features::Respawning.CustomRespawnPositon_InputValue_Y),float(Features::Respawning.CustomRespawnPositon_InputValue_X)), RespawnRotY, info);
                return;
            }
        }
    }
    old_PlayerScript_Respawn_Internal(instance, RespawnPos, RespawnRotY, info);
}

void(*old_PlayerScript_Die)(void *instance, int id_killer, int myPoints, bool isHeadshot, short weaponType, short damage);
void PlayerScript_Die(void *instance, int id_killer, int myPoints, bool isHeadshot, short weaponType, short damage) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Player.isGodmodeV1) {
                return;
            }
        }
    }
    old_PlayerScript_Die(instance, id_killer, myPoints, isHeadshot, weaponType, damage);
}

bool(*old_PlayerScript_get_throwingGrenade)(void *instance);
bool PlayerScript_get_throwingGrenade(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Grenades.isNoGrenadeAnimation) {
                return false;
            }
        }
    }
    old_PlayerScript_get_throwingGrenade(instance);
}

monostring *(*old_PlayerScript_get_playerName)(void *instance);
monostring *PlayerScript_get_playerName(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Player.updateInputText_ChangeName) {
                return CreateMonoString(Features::Player.InputText_ChangeName.c_str());
            }
        }
    }
    old_PlayerScript_get_playerName(instance);
}

void(*old_WeaponScript_Update)(void *instance);
void WeaponScript_Update(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Weapons.isOneHitKill) {
                *(short *) ((uint64_t) instance + Offsets::Fields.WeaponScript_Damage) = short(
                        1000);
            } else if (Features::Weapons.isDamage) {
                *(short *) ((uint64_t) instance + Offsets::Fields.WeaponScript_Damage) = short(
                        Features::Weapons.SeekBar_Damage);
            }
            if (Features::Weapons.isClipSize) {
                *(int *) ((uint64_t) instance + Offsets::Fields.WeaponScript_clipSize) = Features::Weapons.SeekBar_ClipSize;
            }
            if (Features::Weapons.isAccuracy) {
                *(float *) ((uint64_t) instance + Offsets::Fields.WeaponScript_WeaponAccuracy) = 100.0f;
            }
            if (Features::Weapons.isNoShootDelay) {
                *(bool *) ((uint64_t) instance + Offsets::Fields.WeaponScript_shootDelay) = false;
            }
            if (Features::Weapons.BulletType_isShootLasers) {
                *(bool *) ((uint64_t) instance + Offsets::Fields.WeaponScript_isLaser) = true;
            }
            if (Features::Weapons.isSilent) {
                *(bool *) ((uint64_t) instance + Offsets::Fields.WeaponScript_isSilencer) = true;
            }
            if (Features::Weapons.isNoRecoil) {
                *(Vector3 *) ((uint64_t) instance + Offsets::Fields.WeaponScript_recoil) = Vector3(0.0f, 0.0f, 0.0f);
            }
            if (Features::Weapons.isSpoofWeapon) {
                if (((uint64_t) instance + Offsets::Fields.WeaponScript_weaponID)
                    == Features::Weapons.InputValue_OriginalWeaponId) {
                    *(int *) ((uint64_t) instance + Offsets::Fields.WeaponScript_weaponID)
                            = Features::Weapons.InputValue_SpoofedWeaponId;
                }
            }
            if (Features::Weapons.isHideWeapon) {
                HideWeapon(instance,false);
            }
            if (Features::Grenades.isGrenadeSpam) {
                UseGrenade(instance);
            }
        }
    }
    old_WeaponScript_Update(instance);
}

bool(*old_WeaponScript_canShoot)(void *instance);
bool WeaponScript_canShoot(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Weapons.isRapidFire) {
                return true;
            }
        }
    }
    old_WeaponScript_canShoot(instance);
}

void(*old_WeaponController_ctor)(void *instance);
void WeaponController_ctor(void *instance) {
    if (instance != NULL) {
        weaponcontrollerinstance = instance;
    }
    old_WeaponController_ctor(instance);
}

void(*old_WeaponItem_Start)(void *instance);
void WeaponItem_Start(void *instance) {
    if (instance != NULL) {
        weaponiteminstance = instance;
    }
    old_WeaponItem_Start(instance);
}

bool(*old_CharacterController_DetectCollisions)(void *instance);
bool CharacterController_DetectCollisions(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Movement.isNoClip) {
                return false;
            }
        }
    }
    old_CharacterController_DetectCollisions(instance);
}

void(*old_PlayerController_Update)(void *instance);
void PlayerController_Update(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Movement.isInfiniteJump) {
                *(bool *) ((uint64_t) instance +
                           Offsets::Fields.PlayerController_isGrounded) = true;
            }
            if (Features::Movement.isWalkSpeed) {
                *(float *) ((uint64_t) instance + Offsets::Fields.PlayerController_walkSpeed) = float(Features::Movement.SeekBar_WalkSpeed);
            }
            if (Features::Movement.isRunSpeed) {
                *(float *) ((uint64_t) instance + Offsets::Fields.PlayerController_runSpeed) = float(Features::Movement.SeekBar_RunSpeed);
            }
        }
    }
    old_PlayerController_Update(instance);
}

void(*old_FPSCamera_Update)(void *instance);
void FPSCamera_Update(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Weapons.isNoRecoil) {
                *(Vector3 *) ((uint64_t) instance + Offsets::Fields.FPSCamera_recoil) = Vector3(0.0f, 0.0f, 0.0f);
            }
            if (Features::Vision.isCustomFov) {
                *(float *) ((uint64_t) instance + Offsets::Fields.FPSCamera_fov) = float(Features::Vision.SeekBar_Fov);
            }
            if (Features::Vision.isFreezeCamera) {
                return;
            }
        }
    }
    old_FPSCamera_Update(instance);
}

void(*old_FPSCamera_Recoil)(void *instance);
void FPSCamera_Recoil(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Weapons.isNoRecoil) {
                return;
            }
        }
    }
    old_FPSCamera_Recoil(instance);
}

void(*old_FieldOfViewIncreaseLPFP_Update)(void *instance);
void FieldOfViewIncreaseLPFP_Update(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Vision.isCustomFov) {
                *(float *) ((uint64_t) instance + Offsets::Fields.FieldOfViewIncreaseLPFP_targetFOV) = float(Features::Vision.SeekBar_Fov);
            }
        }
    }
    old_FieldOfViewIncreaseLPFP_Update(instance);
}

void(*old_XAds_Play)(void *instance, monostring * name, float deltaVideoTime, monostring * placement);
void XAds_Play(void *instance, monostring * name, float deltaVideoTime, monostring * placement) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Miscellaneous.isNoAds) {
                return;
            }
        }
    }
    old_XAds_Play(instance, name, deltaVideoTime, placement);
}

int(*old_PriceValue_get_price)(void *instance);
int PriceValue_get_price(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Store.isFreeShopping) {
                return 0;
            }
        }
    }
    old_PriceValue_get_price(instance);
}

int(*old_GameParamsScript_get_isVIP)(void *instance);
int GameParamsScript_get_isVIP(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Currency.Vip_isVip) {
                return true;
            }
        }
    }
    old_GameParamsScript_get_isVIP(instance);
}

int(*old_GameParamsScript_get_isBattlepassBought)(void *instance);
int GameParamsScript_get_isBattlepassBought(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::BattlePass.Button_isUnlockPremiumBattlePassTemporary) {
                return true;
            }
        }
    }
    old_GameParamsScript_get_isBattlepassBought(instance);
}

void(*old_GameParamsScript_BanPlayer)(void *instance, monostring *reason);
void GameParamsScript_BanPlayer(void *instance, monostring * reason) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Miscellaneous.isAntiban) {
                return;
            }
        }
    }
    old_GameParamsScript_BanPlayer(instance, reason);
}

bool(*old_BattleControllerScript_get_isSpectator)(void *instance);
bool BattleControllerScript_get_isSpectator(void *instance) {
    if (instance != NULL) {
        if (updatehooksready) {
            if (Features::Player.isSpectatorMode) {
                return true;
            }
        }
    }
    old_BattleControllerScript_get_isSpectator(instance);
}

Vector3 GetMyPosition() {
    return(Vector3(0.0f,0.0f,0.0f));
}