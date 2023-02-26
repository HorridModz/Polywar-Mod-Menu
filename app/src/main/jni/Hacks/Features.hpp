namespace Features {
	struct CurrencyHacks {
	//Collapse VIP

	//VIP
	bool Vip_isVip = false;
	bool updateVip_Toggle_Vip = false;
	bool isVip_Toggle_VipFirstCall = true;
	void Vip_Toggle_Vip(bool value) {
		if (!isVip_Toggle_VipFirstCall) {
			Vip_isVip = value;
			updateVip_Toggle_Vip = true;
		} else {
			isVip_Toggle_VipFirstCall = false;
		}
	}
	//Buy VIP (Permanent)
	bool Vip_Button_isBuyVipPermanent = false;
	bool updateVip_Button_BuyVipPermanent = false;
	void Vip_Button_BuyVipPermanent() {
		Vip_Button_isBuyVipPermanent = true;
	}
	};
	CurrencyHacks Currency;

	struct StoreHacks {
	//Free Shopping
	bool isFreeShopping = false;
	bool updateToggle_FreeShopping = false;
	bool isToggle_FreeShoppingFirstCall = true;
	void Toggle_FreeShopping(bool value) {
		if (!isToggle_FreeShoppingFirstCall) {
			isFreeShopping = value;
			updateToggle_FreeShopping = true;
		} else {
			isToggle_FreeShoppingFirstCall = false;
		}
	}
	//Free In-app Purchases
	bool isFreeInAppPurchases = false;
	bool updateToggle_FreeInAppPurchases = false;
	bool isToggle_FreeInAppPurchasesFirstCall = true;
	void Toggle_FreeInAppPurchases(bool value) {
		if (!isToggle_FreeInAppPurchasesFirstCall) {
			isFreeInAppPurchases = value;
			updateToggle_FreeInAppPurchases = true;
		} else {
			isToggle_FreeInAppPurchasesFirstCall = false;
		}
	}
	};
	StoreHacks Store;

	struct BattlePassHacks {
	//Unlock Premium Battle Pass (Temporary)
	bool Button_isUnlockPremiumBattlePassTemporary = false;
	bool updateButton_UnlockPremiumBattlePassTemporary = false;
	void Button_UnlockPremiumBattlePassTemporary() {
		Button_isUnlockPremiumBattlePassTemporary = true;
	}
	//Reset Battle Pass Rewards
	bool Button_isResetBattlePassRewards = false;
	bool updateButton_ResetBattlePassRewards = false;
	void Button_ResetBattlePassRewards() {
		Button_isResetBattlePassRewards = true;
	}
	//Infinite Battle Pass Rewards
	bool isInfiniteBattlePassRewards = false;
	bool updateToggle_InfiniteBattlePassRewards = false;
	bool isToggle_InfiniteBattlePassRewardsFirstCall = true;
	void Toggle_InfiniteBattlePassRewards(bool value) {
		if (!isToggle_InfiniteBattlePassRewardsFirstCall) {
			isInfiniteBattlePassRewards = value;
			updateToggle_InfiniteBattlePassRewards = true;
		} else {
			isToggle_InfiniteBattlePassRewardsFirstCall = false;
		}
	}
	//Claim All Battle Pass Rewards
	bool Button_isClaimAllBattlePassRewards = false;
	bool updateButton_ClaimAllBattlePassRewards = false;
	void Button_ClaimAllBattlePassRewards() {
		Button_isClaimAllBattlePassRewards = true;
	}

	//Collapse Battle Pass Level

	//Level Up Battle Pass
	bool BattlePassLevel_Button_isLevelUpBattlePass = false;
	bool updateBattlePassLevel_Button_LevelUpBattlePass = false;
	void BattlePassLevel_Button_LevelUpBattlePass() {
		BattlePassLevel_Button_isLevelUpBattlePass = true;
	}
	//Battle Pass Level
	int BattlePassLevel_SeekBar_BattlePassLevel = 1;
	bool updateBattlePassLevel_SeekBar_BattlePassLevel = false;
	void BattlePassLevel_SetSeekBar_BattlePassLevel(int value) {
		BattlePassLevel_SeekBar_BattlePassLevel = value;
		updateBattlePassLevel_SeekBar_BattlePassLevel = true;
	}
	//Set Battle Pass Level
	bool BattlePassLevel_Button_isSetBattlePassLevel = false;
	bool updateBattlePassLevel_Button_SetBattlePassLevel = false;
	void BattlePassLevel_Button_SetBattlePassLevel() {
		BattlePassLevel_Button_isSetBattlePassLevel = true;
	}

	//Collapse Battle Pass EXP

	//Battle Pass EXP
	int BattlePassExp_SeekBar_BattlePassExp = 1;
	bool updateBattlePassExp_SeekBar_BattlePassExp = false;
	void BattlePassExp_SetSeekBar_BattlePassExp(int value) {
		BattlePassExp_SeekBar_BattlePassExp = value;
		updateBattlePassExp_SeekBar_BattlePassExp = true;
	}
	//Set Battle Pass EXP
	bool BattlePassExp_Button_isSetBattlePassExp = false;
	bool updateBattlePassExp_Button_SetBattlePassExp = false;
	void BattlePassExp_Button_SetBattlePassExp() {
		BattlePassExp_Button_isSetBattlePassExp = true;
	}
	//Add Battle Pass EXP
	bool BattlePassExp_Button_isAddBattlePassExp = false;
	bool updateBattlePassExp_Button_AddBattlePassExp = false;
	void BattlePassExp_Button_AddBattlePassExp() {
		BattlePassExp_Button_isAddBattlePassExp = true;
	}
	//Remove Battle Pass EXP
	bool BattlePassExp_Button_isRemoveBattlePassExp = false;
	bool updateBattlePassExp_Button_RemoveBattlePassExp = false;
	void BattlePassExp_Button_RemoveBattlePassExp() {
		BattlePassExp_Button_isRemoveBattlePassExp = true;
	}
	};
	BattlePassHacks BattlePass;

	struct ItemsHacks {
	//Collapse Weapons

	//Spoof All Weapons
	bool Weapons_Button_isSpoofAllWeapons = false;
	bool updateWeapons_Button_SpoofAllWeapons = false;
	void Weapons_Button_SpoofAllWeapons() {
		Weapons_Button_isSpoofAllWeapons = true;
	}
	//Unlock All Weapons (Permanent)
	bool Weapons_Button_isUnlockAllWeaponsPermanent = false;
	bool updateWeapons_Button_UnlockAllWeaponsPermanent = false;
	void Weapons_Button_UnlockAllWeaponsPermanent() {
		Weapons_Button_isUnlockAllWeaponsPermanent = true;
	}
	//Weapon ID
	int Weapons_InputValue_WeaponId = 1;
	bool updateWeapons_InputValue_WeaponId = false;
	void Weapons_SetInputValue_WeaponId(int value) {
		Weapons_InputValue_WeaponId = value;
		updateWeapons_InputValue_WeaponId = true;
	}
	//Spoof Weapon
	bool Weapons_Button_isSpoofWeapon = false;
	bool updateWeapons_Button_SpoofWeapon = false;
	void Weapons_Button_SpoofWeapon() {
		Weapons_Button_isSpoofWeapon = true;
	}
	//Unlock Weapon
	bool Weapons_Button_isUnlockWeapon = false;
	bool updateWeapons_Button_UnlockWeapon = false;
	void Weapons_Button_UnlockWeapon() {
		Weapons_Button_isUnlockWeapon = true;
	}
	};
	ItemsHacks Items;

	struct PlayerHacks {
	//ID Spoofer
	std::string InputText_IdSpoofer = "{[Default]}";
	bool updateInputText_IdSpoofer = false;
	void SetInputText_IdSpoofer(std::string value) {
		InputText_IdSpoofer = value;
		updateInputText_IdSpoofer = true;
	}
	//Godmode V1
	bool isGodmodeV1 = false;
	bool updateToggle_GodmodeV1 = false;
	bool isToggle_GodmodeV1FirstCall = true;
	void Toggle_GodmodeV1(bool value) {
		if (!isToggle_GodmodeV1FirstCall) {
			isGodmodeV1 = value;
			updateToggle_GodmodeV1 = true;
		} else {
			isToggle_GodmodeV1FirstCall = false;
		}
	}
	//Health
	bool isHealth = false;
	bool updateToggle_Health = false;
	bool isToggle_HealthFirstCall = true;
	void Toggle_Health(bool value) {
		if (!isToggle_HealthFirstCall) {
			isHealth = value;
			updateToggle_Health = true;
		} else {
			isToggle_HealthFirstCall = false;
		}
	}
	//Health
	int SeekBar_Health = 1;
	bool updateSeekBar_Health = false;
	void SetSeekBar_Health(int value) {
		SeekBar_Health = value;
		updateSeekBar_Health = true;
	}
	//Max Health
	bool isMaxHealth = false;
	bool updateToggle_MaxHealth = false;
	bool isToggle_MaxHealthFirstCall = true;
	void Toggle_MaxHealth(bool value) {
		if (!isToggle_MaxHealthFirstCall) {
			isMaxHealth = value;
			updateToggle_MaxHealth = true;
		} else {
			isToggle_MaxHealthFirstCall = false;
		}
	}
	//Max Health
	int SeekBar_MaxHealth = 1;
	bool updateSeekBar_MaxHealth = false;
	void SetSeekBar_MaxHealth(int value) {
		SeekBar_MaxHealth = value;
		updateSeekBar_MaxHealth = true;
	}
	//Armor
	bool isArmor = false;
	bool updateToggle_Armor = false;
	bool isToggle_ArmorFirstCall = true;
	void Toggle_Armor(bool value) {
		if (!isToggle_ArmorFirstCall) {
			isArmor = value;
			updateToggle_Armor = true;
		} else {
			isToggle_ArmorFirstCall = false;
		}
	}
	//Armor
	int SeekBar_Armor = 1;
	bool updateSeekBar_Armor = false;
	void SetSeekBar_Armor(int value) {
		SeekBar_Armor = value;
		updateSeekBar_Armor = true;
	}
	//Max Armor
	bool isMaxArmor = false;
	bool updateToggle_MaxArmor = false;
	bool isToggle_MaxArmorFirstCall = true;
	void Toggle_MaxArmor(bool value) {
		if (!isToggle_MaxArmorFirstCall) {
			isMaxArmor = value;
			updateToggle_MaxArmor = true;
		} else {
			isToggle_MaxArmorFirstCall = false;
		}
	}
	//Max Armor
	int SeekBar_MaxArmor = 1;
	bool updateSeekBar_MaxArmor = false;
	void SetSeekBar_MaxArmor(int value) {
		SeekBar_MaxArmor = value;
		updateSeekBar_MaxArmor = true;
	}
	//Heal
	bool Button_isHeal = false;
	bool updateButton_Heal = false;
	void Button_Heal() {
		Button_isHeal = true;
	}
	//Thorns
	bool isThorns = false;
	bool updateToggle_Thorns = false;
	bool isToggle_ThornsFirstCall = true;
	void Toggle_Thorns(bool value) {
		if (!isToggle_ThornsFirstCall) {
			isThorns = value;
			updateToggle_Thorns = true;
		} else {
			isToggle_ThornsFirstCall = false;
		}
	}
	//Thorns Damage
	int SeekBar_ThornsDamage = 1;
	bool updateSeekBar_ThornsDamage = false;
	void SetSeekBar_ThornsDamage(int value) {
		SeekBar_ThornsDamage = value;
		updateSeekBar_ThornsDamage = true;
	}
	//Reflect Damage
	bool isReflectDamage = false;
	bool updateToggle_ReflectDamage = false;
	bool isToggle_ReflectDamageFirstCall = true;
	void Toggle_ReflectDamage(bool value) {
		if (!isToggle_ReflectDamageFirstCall) {
			isReflectDamage = value;
			updateToggle_ReflectDamage = true;
		} else {
			isToggle_ReflectDamageFirstCall = false;
		}
	}
	//Danger Zone Invincibility
	bool isDangerZoneInvincibility = false;
	bool updateToggle_DangerZoneInvincibility = false;
	bool isToggle_DangerZoneInvincibilityFirstCall = true;
	void Toggle_DangerZoneInvincibility(bool value) {
		if (!isToggle_DangerZoneInvincibilityFirstCall) {
			isDangerZoneInvincibility = value;
			updateToggle_DangerZoneInvincibility = true;
		} else {
			isToggle_DangerZoneInvincibilityFirstCall = false;
		}
	}
	//Switch Team
	bool Button_isSwitchTeam = false;
	bool updateButton_SwitchTeam = false;
	void Button_SwitchTeam() {
		Button_isSwitchTeam = true;
	}
	//No Team
	bool isNoTeam = false;
	bool updateCheckBox_NoTeam = false;
	bool isCheckBox_NoTeamFirstCall = true;
	void CheckBox_NoTeam(bool value) {
		if (!isCheckBox_NoTeamFirstCall) {
			isNoTeam = value;
			updateCheckBox_NoTeam = true;
		} else {
			isCheckBox_NoTeamFirstCall = false;
		}
	}
	//Both Teams
	bool isBothTeams = false;
	bool updateCheckBox_BothTeams = false;
	bool isCheckBox_BothTeamsFirstCall = true;
	void CheckBox_BothTeams(bool value) {
		if (!isCheckBox_BothTeamsFirstCall) {
			isBothTeams = value;
			updateCheckBox_BothTeams = true;
		} else {
			isCheckBox_BothTeamsFirstCall = false;
		}
	}
	//No Item Cooldown
	bool isNoItemCooldown = false;
	bool updateToggle_NoItemCooldown = false;
	bool isToggle_NoItemCooldownFirstCall = true;
	void Toggle_NoItemCooldown(bool value) {
		if (!isToggle_NoItemCooldownFirstCall) {
			isNoItemCooldown = value;
			updateToggle_NoItemCooldown = true;
		} else {
			isToggle_NoItemCooldownFirstCall = false;
		}
	}
	//Giant
	bool isGiant = false;
	bool updateToggle_Giant = false;
	bool isToggle_GiantFirstCall = true;
	void Toggle_Giant(bool value) {
		if (!isToggle_GiantFirstCall) {
			isGiant = value;
			updateToggle_Giant = true;
		} else {
			isToggle_GiantFirstCall = false;
		}
	}
	//Tiny
	bool isTiny = false;
	bool updateToggle_Tiny = false;
	bool isToggle_TinyFirstCall = true;
	void Toggle_Tiny(bool value) {
		if (!isToggle_TinyFirstCall) {
			isTiny = value;
			updateToggle_Tiny = true;
		} else {
			isToggle_TinyFirstCall = false;
		}
	}
	//Size
	int SeekBar_Size = 1;
	bool updateSeekBar_Size = false;
	void SetSeekBar_Size(int value) {
		SeekBar_Size = value;
		updateSeekBar_Size = true;
	}
	//Negative Size
	bool isNegativeSize = false;
	bool updateToggle_NegativeSize = false;
	bool isToggle_NegativeSizeFirstCall = true;
	void Toggle_NegativeSize(bool value) {
		if (!isToggle_NegativeSizeFirstCall) {
			isNegativeSize = value;
			updateToggle_NegativeSize = true;
		} else {
			isToggle_NegativeSizeFirstCall = false;
		}
	}
	//Spectator Mode
	bool isSpectatorMode = false;
	bool updateToggle_SpectatorMode = false;
	bool isToggle_SpectatorModeFirstCall = true;
	void Toggle_SpectatorMode(bool value) {
		if (!isToggle_SpectatorModeFirstCall) {
			isSpectatorMode = value;
			updateToggle_SpectatorMode = true;
		} else {
			isToggle_SpectatorModeFirstCall = false;
		}
	}
	//Change Name
	std::string InputText_ChangeName = "{[Default]}";
	bool updateInputText_ChangeName = false;
	void SetInputText_ChangeName(std::string value) {
		InputText_ChangeName = value;
		updateInputText_ChangeName = true;
	}

	//Collapse Regeneration

	//Health Regen
	bool Regeneration_isHealthRegen = false;
	bool updateRegeneration_Toggle_HealthRegen = false;
	bool isRegeneration_Toggle_HealthRegenFirstCall = true;
	void Regeneration_Toggle_HealthRegen(bool value) {
		if (!isRegeneration_Toggle_HealthRegenFirstCall) {
			Regeneration_isHealthRegen = value;
			updateRegeneration_Toggle_HealthRegen = true;
		} else {
			isRegeneration_Toggle_HealthRegenFirstCall = false;
		}
	}
	//Health Regen
	int Regeneration_SeekBar_HealthRegen = 1;
	bool updateRegeneration_SeekBar_HealthRegen = false;
	void Regeneration_SetSeekBar_HealthRegen(int value) {
		Regeneration_SeekBar_HealthRegen = value;
		updateRegeneration_SeekBar_HealthRegen = true;
	}
	//Armor Regen
	bool Regeneration_isArmorRegen = false;
	bool updateRegeneration_Toggle_ArmorRegen = false;
	bool isRegeneration_Toggle_ArmorRegenFirstCall = true;
	void Regeneration_Toggle_ArmorRegen(bool value) {
		if (!isRegeneration_Toggle_ArmorRegenFirstCall) {
			Regeneration_isArmorRegen = value;
			updateRegeneration_Toggle_ArmorRegen = true;
		} else {
			isRegeneration_Toggle_ArmorRegenFirstCall = false;
		}
	}
	//Armor Regen
	int Regeneration_SeekBar_ArmorRegen = 1;
	bool updateRegeneration_SeekBar_ArmorRegen = false;
	void Regeneration_SetSeekBar_ArmorRegen(int value) {
		Regeneration_SeekBar_ArmorRegen = value;
		updateRegeneration_SeekBar_ArmorRegen = true;
	}
	//Regen Interval (Seconds)
	int Regeneration_SeekBar_RegenIntervalSeconds = 1;
	bool updateRegeneration_SeekBar_RegenIntervalSeconds = false;
	void Regeneration_SetSeekBar_RegenIntervalSeconds(int value) {
		Regeneration_SeekBar_RegenIntervalSeconds = value;
		updateRegeneration_SeekBar_RegenIntervalSeconds = true;
	}
	//Regen Interval (Miliseconds)
	int Regeneration_SeekBar_RegenIntervalMiliseconds = 1;
	bool updateRegeneration_SeekBar_RegenIntervalMiliseconds = false;
	void Regeneration_SetSeekBar_RegenIntervalMiliseconds(int value) {
		Regeneration_SeekBar_RegenIntervalMiliseconds = value;
		updateRegeneration_SeekBar_RegenIntervalMiliseconds = true;
	}

	//Collapse Force Field

	//Radius
	int ForceField_SeekBar_Radius = 1;
	bool updateForceField_SeekBar_Radius = false;
	void ForceField_SetSeekBar_Radius(int value) {
		ForceField_SeekBar_Radius = value;
		updateForceField_SeekBar_Radius = true;
	}
	//Damage
	int ForceField_SeekBar_Damage = 1;
	bool updateForceField_SeekBar_Damage = false;
	void ForceField_SetSeekBar_Damage(int value) {
		ForceField_SeekBar_Damage = value;
		updateForceField_SeekBar_Damage = true;
	}
	//Heal
	int ForceField_SeekBar_Heal = 1;
	bool updateForceField_SeekBar_Heal = false;
	void ForceField_SetSeekBar_Heal(int value) {
		ForceField_SeekBar_Heal = value;
		updateForceField_SeekBar_Heal = true;
	}
	//Enable Force Field
	bool ForceField_isEnableForceField = false;
	bool updateForceField_CheckBox_EnableForceField = false;
	bool isForceField_CheckBox_EnableForceFieldFirstCall = true;
	void ForceField_CheckBox_EnableForceField(bool value) {
		if (!isForceField_CheckBox_EnableForceFieldFirstCall) {
			ForceField_isEnableForceField = value;
			updateForceField_CheckBox_EnableForceField = true;
		} else {
			isForceField_CheckBox_EnableForceFieldFirstCall = false;
		}
	}
	};
	PlayerHacks Player;

	struct WeaponsHacks {
	//Spoof Weapon
	bool isSpoofWeapon = false;
	bool updateToggle_SpoofWeapon = false;
	bool isToggle_SpoofWeaponFirstCall = true;
	void Toggle_SpoofWeapon(bool value) {
		if (!isToggle_SpoofWeaponFirstCall) {
			isSpoofWeapon = value;
			updateToggle_SpoofWeapon = true;
		} else {
			isToggle_SpoofWeaponFirstCall = false;
		}
	}
	//Original Weapon ID
	int InputValue_OriginalWeaponId = 1;
	bool updateInputValue_OriginalWeaponId = false;
	void SetInputValue_OriginalWeaponId(int value) {
		InputValue_OriginalWeaponId = value;
		updateInputValue_OriginalWeaponId = true;
	}
	//Spoofed Weapon ID
	int InputValue_SpoofedWeaponId = 1;
	bool updateInputValue_SpoofedWeaponId = false;
	void SetInputValue_SpoofedWeaponId(int value) {
		InputValue_SpoofedWeaponId = value;
		updateInputValue_SpoofedWeaponId = true;
	}
	//One Hit Kill
	bool isOneHitKill = false;
	bool updateToggle_OneHitKill = false;
	bool isToggle_OneHitKillFirstCall = true;
	void Toggle_OneHitKill(bool value) {
		if (!isToggle_OneHitKillFirstCall) {
			isOneHitKill = value;
			updateToggle_OneHitKill = true;
		} else {
			isToggle_OneHitKillFirstCall = false;
		}
	}
	//Damage
	bool isDamage = false;
	bool updateToggle_Damage = false;
	bool isToggle_DamageFirstCall = true;
	void Toggle_Damage(bool value) {
		if (!isToggle_DamageFirstCall) {
			isDamage = value;
			updateToggle_Damage = true;
		} else {
			isToggle_DamageFirstCall = false;
		}
	}
	//Damage
	int SeekBar_Damage = 1;
	bool updateSeekBar_Damage = false;
	void SetSeekBar_Damage(int value) {
		SeekBar_Damage = value;
		updateSeekBar_Damage = true;
	}
	//Rapid Fire
	bool isRapidFire = false;
	bool updateToggle_RapidFire = false;
	bool isToggle_RapidFireFirstCall = true;
	void Toggle_RapidFire(bool value) {
		if (!isToggle_RapidFireFirstCall) {
			isRapidFire = value;
			updateToggle_RapidFire = true;
		} else {
			isToggle_RapidFireFirstCall = false;
		}
	}
	//Fire Rate
	bool isFireRate = false;
	bool updateToggle_FireRate = false;
	bool isToggle_FireRateFirstCall = true;
	void Toggle_FireRate(bool value) {
		if (!isToggle_FireRateFirstCall) {
			isFireRate = value;
			updateToggle_FireRate = true;
		} else {
			isToggle_FireRateFirstCall = false;
		}
	}
	//Fire Rate
	int SeekBar_FireRate = 1;
	bool updateSeekBar_FireRate = false;
	void SetSeekBar_FireRate(int value) {
		SeekBar_FireRate = value;
		updateSeekBar_FireRate = true;
	}
	//Auto Fire
	bool isAutoFire = false;
	bool updateToggle_AutoFire = false;
	bool isToggle_AutoFireFirstCall = true;
	void Toggle_AutoFire(bool value) {
		if (!isToggle_AutoFireFirstCall) {
			isAutoFire = value;
			updateToggle_AutoFire = true;
		} else {
			isToggle_AutoFireFirstCall = false;
		}
	}
	//Ammo
	bool isAmmo = false;
	bool updateToggle_Ammo = false;
	bool isToggle_AmmoFirstCall = true;
	void Toggle_Ammo(bool value) {
		if (!isToggle_AmmoFirstCall) {
			isAmmo = value;
			updateToggle_Ammo = true;
		} else {
			isToggle_AmmoFirstCall = false;
		}
	}
	//Ammo
	int SeekBar_Ammo = 1;
	bool updateSeekBar_Ammo = false;
	void SetSeekBar_Ammo(int value) {
		SeekBar_Ammo = value;
		updateSeekBar_Ammo = true;
	}
	//Clip Size
	bool isClipSize = false;
	bool updateToggle_ClipSize = false;
	bool isToggle_ClipSizeFirstCall = true;
	void Toggle_ClipSize(bool value) {
		if (!isToggle_ClipSizeFirstCall) {
			isClipSize = value;
			updateToggle_ClipSize = true;
		} else {
			isToggle_ClipSizeFirstCall = false;
		}
	}
	//Clip Size
	int SeekBar_ClipSize = 1;
	bool updateSeekBar_ClipSize = false;
	void SetSeekBar_ClipSize(int value) {
		SeekBar_ClipSize = value;
		updateSeekBar_ClipSize = true;
	}
	//Area Damage
	bool isAreaDamage = false;
	bool updateToggle_AreaDamage = false;
	bool isToggle_AreaDamageFirstCall = true;
	void Toggle_AreaDamage(bool value) {
		if (!isToggle_AreaDamageFirstCall) {
			isAreaDamage = value;
			updateToggle_AreaDamage = true;
		} else {
			isToggle_AreaDamageFirstCall = false;
		}
	}
	//Area Damage Radius
	int SeekBar_AreaDamageRadius = 1;
	bool updateSeekBar_AreaDamageRadius = false;
	void SetSeekBar_AreaDamageRadius(int value) {
		SeekBar_AreaDamageRadius = value;
		updateSeekBar_AreaDamageRadius = true;
	}
	//Instant Reload
	bool isInstantReload = false;
	bool updateToggle_InstantReload = false;
	bool isToggle_InstantReloadFirstCall = true;
	void Toggle_InstantReload(bool value) {
		if (!isToggle_InstantReloadFirstCall) {
			isInstantReload = value;
			updateToggle_InstantReload = true;
		} else {
			isToggle_InstantReloadFirstCall = false;
		}
	}
	//Reload Speed
	bool isReloadSpeed = false;
	bool updateToggle_ReloadSpeed = false;
	bool isToggle_ReloadSpeedFirstCall = true;
	void Toggle_ReloadSpeed(bool value) {
		if (!isToggle_ReloadSpeedFirstCall) {
			isReloadSpeed = value;
			updateToggle_ReloadSpeed = true;
		} else {
			isToggle_ReloadSpeedFirstCall = false;
		}
	}
	//Reload Speed
	int SeekBar_ReloadSpeed = 1;
	bool updateSeekBar_ReloadSpeed = false;
	void SetSeekBar_ReloadSpeed(int value) {
		SeekBar_ReloadSpeed = value;
		updateSeekBar_ReloadSpeed = true;
	}
	//Auto Reload
	bool isAutoReload = false;
	bool updateToggle_AutoReload = false;
	bool isToggle_AutoReloadFirstCall = true;
	void Toggle_AutoReload(bool value) {
		if (!isToggle_AutoReloadFirstCall) {
			isAutoReload = value;
			updateToggle_AutoReload = true;
		} else {
			isToggle_AutoReloadFirstCall = false;
		}
	}
	//Reload
	bool Button_isReload = false;
	bool updateButton_Reload = false;
	void Button_Reload() {
		Button_isReload = true;
	}
	//Accuracy
	bool isAccuracy = false;
	bool updateToggle_Accuracy = false;
	bool isToggle_AccuracyFirstCall = true;
	void Toggle_Accuracy(bool value) {
		if (!isToggle_AccuracyFirstCall) {
			isAccuracy = value;
			updateToggle_Accuracy = true;
		} else {
			isToggle_AccuracyFirstCall = false;
		}
	}
	//Instant Projectile Speed
	bool isInstantProjectileSpeed = false;
	bool updateToggle_InstantProjectileSpeed = false;
	bool isToggle_InstantProjectileSpeedFirstCall = true;
	void Toggle_InstantProjectileSpeed(bool value) {
		if (!isToggle_InstantProjectileSpeedFirstCall) {
			isInstantProjectileSpeed = value;
			updateToggle_InstantProjectileSpeed = true;
		} else {
			isToggle_InstantProjectileSpeedFirstCall = false;
		}
	}
	//Projectile Speed
	bool isProjectileSpeed = false;
	bool updateToggle_ProjectileSpeed = false;
	bool isToggle_ProjectileSpeedFirstCall = true;
	void Toggle_ProjectileSpeed(bool value) {
		if (!isToggle_ProjectileSpeedFirstCall) {
			isProjectileSpeed = value;
			updateToggle_ProjectileSpeed = true;
		} else {
			isToggle_ProjectileSpeedFirstCall = false;
		}
	}
	//Projectile Speed
	int SeekBar_ProjectileSpeed = 1;
	bool updateSeekBar_ProjectileSpeed = false;
	void SetSeekBar_ProjectileSpeed(int value) {
		SeekBar_ProjectileSpeed = value;
		updateSeekBar_ProjectileSpeed = true;
	}
	//No Shoot Delay
	bool isNoShootDelay = false;
	bool updateToggle_NoShootDelay = false;
	bool isToggle_NoShootDelayFirstCall = true;
	void Toggle_NoShootDelay(bool value) {
		if (!isToggle_NoShootDelayFirstCall) {
			isNoShootDelay = value;
			updateToggle_NoShootDelay = true;
		} else {
			isToggle_NoShootDelayFirstCall = false;
		}
	}
	//Shoot Through Walls
	bool isShootThroughWalls = false;
	bool updateToggle_ShootThroughWalls = false;
	bool isToggle_ShootThroughWallsFirstCall = true;
	void Toggle_ShootThroughWalls(bool value) {
		if (!isToggle_ShootThroughWallsFirstCall) {
			isShootThroughWalls = value;
			updateToggle_ShootThroughWalls = true;
		} else {
			isToggle_ShootThroughWallsFirstCall = false;
		}
	}
	//Silent
	bool isSilent = false;
	bool updateToggle_Silent = false;
	bool isToggle_SilentFirstCall = true;
	void Toggle_Silent(bool value) {
		if (!isToggle_SilentFirstCall) {
			isSilent = value;
			updateToggle_Silent = true;
		} else {
			isToggle_SilentFirstCall = false;
		}
	}
	//No Recoil
	bool isNoRecoil = false;
	bool updateToggle_NoRecoil = false;
	bool isToggle_NoRecoilFirstCall = true;
	void Toggle_NoRecoil(bool value) {
		if (!isToggle_NoRecoilFirstCall) {
			isNoRecoil = value;
			updateToggle_NoRecoil = true;
		} else {
			isToggle_NoRecoilFirstCall = false;
		}
	}
	//No Spread
	bool isNoSpread = false;
	bool updateToggle_NoSpread = false;
	bool isToggle_NoSpreadFirstCall = true;
	void Toggle_NoSpread(bool value) {
		if (!isToggle_NoSpreadFirstCall) {
			isNoSpread = value;
			updateToggle_NoSpread = true;
		} else {
			isToggle_NoSpreadFirstCall = false;
		}
	}
	//Hide Weapon
	bool isHideWeapon = false;
	bool updateToggle_HideWeapon = false;
	bool isToggle_HideWeaponFirstCall = true;
	void Toggle_HideWeapon(bool value) {
		if (!isToggle_HideWeaponFirstCall) {
			isHideWeapon = value;
			updateToggle_HideWeapon = true;
		} else {
			isToggle_HideWeaponFirstCall = false;
		}
	}
	//Scope Zoom
	bool isScopeZoom = false;
	bool updateToggle_ScopeZoom = false;
	bool isToggle_ScopeZoomFirstCall = true;
	void Toggle_ScopeZoom(bool value) {
		if (!isToggle_ScopeZoomFirstCall) {
			isScopeZoom = value;
			updateToggle_ScopeZoom = true;
		} else {
			isToggle_ScopeZoomFirstCall = false;
		}
	}
	//Scope Zoom
	int SeekBar_ScopeZoom = 1;
	bool updateSeekBar_ScopeZoom = false;
	void SetSeekBar_ScopeZoom(int value) {
		SeekBar_ScopeZoom = value;
		updateSeekBar_ScopeZoom = true;
	}
	//Chams
	bool isChams = false;
	bool updateToggle_Chams = false;
	bool isToggle_ChamsFirstCall = true;
	void Toggle_Chams(bool value) {
		if (!isToggle_ChamsFirstCall) {
			isChams = value;
			updateToggle_Chams = true;
		} else {
			isToggle_ChamsFirstCall = false;
		}
	}
	//No Switch Delay
	bool isNoSwitchDelay = false;
	bool updateToggle_NoSwitchDelay = false;
	bool isToggle_NoSwitchDelayFirstCall = true;
	void Toggle_NoSwitchDelay(bool value) {
		if (!isToggle_NoSwitchDelayFirstCall) {
			isNoSwitchDelay = value;
			updateToggle_NoSwitchDelay = true;
		} else {
			isToggle_NoSwitchDelayFirstCall = false;
		}
	}

	//Collapse Bullet Type

	//Shoot Lasers
	bool BulletType_isShootLasers = false;
	bool updateBulletType_CheckBox_ShootLasers = false;
	bool isBulletType_CheckBox_ShootLasersFirstCall = true;
	void BulletType_CheckBox_ShootLasers(bool value) {
		if (!isBulletType_CheckBox_ShootLasersFirstCall) {
			BulletType_isShootLasers = value;
			updateBulletType_CheckBox_ShootLasers = true;
		} else {
			isBulletType_CheckBox_ShootLasersFirstCall = false;
		}
	}
	};
	WeaponsHacks Weapons;

	struct GrenadesHacks {
	//Infinite Grenades
	bool isInfiniteGrenades = false;
	bool updateToggle_InfiniteGrenades = false;
	bool isToggle_InfiniteGrenadesFirstCall = true;
	void Toggle_InfiniteGrenades(bool value) {
		if (!isToggle_InfiniteGrenadesFirstCall) {
			isInfiniteGrenades = value;
			updateToggle_InfiniteGrenades = true;
		} else {
			isToggle_InfiniteGrenadesFirstCall = false;
		}
	}
	//Grenade Spam
	bool isGrenadeSpam = false;
	bool updateToggle_GrenadeSpam = false;
	bool isToggle_GrenadeSpamFirstCall = true;
	void Toggle_GrenadeSpam(bool value) {
		if (!isToggle_GrenadeSpamFirstCall) {
			isGrenadeSpam = value;
			updateToggle_GrenadeSpam = true;
		} else {
			isToggle_GrenadeSpamFirstCall = false;
		}
	}
	//No Grenade Animation
	bool isNoGrenadeAnimation = false;
	bool updateToggle_NoGrenadeAnimation = false;
	bool isToggle_NoGrenadeAnimationFirstCall = true;
	void Toggle_NoGrenadeAnimation(bool value) {
		if (!isToggle_NoGrenadeAnimationFirstCall) {
			isNoGrenadeAnimation = value;
			updateToggle_NoGrenadeAnimation = true;
		} else {
			isToggle_NoGrenadeAnimationFirstCall = false;
		}
	}
	};
	GrenadesHacks Grenades;

	struct AimbotHacks {
	//Aimbot
	bool isAimbot = false;
	bool updateToggle_Aimbot = false;
	bool isToggle_AimbotFirstCall = true;
	void Toggle_Aimbot(bool value) {
		if (!isToggle_AimbotFirstCall) {
			isAimbot = value;
			updateToggle_Aimbot = true;
		} else {
			isToggle_AimbotFirstCall = false;
		}
	}
	//Counterintuitive Aimbot
	bool isCounterintuitiveAimbot = false;
	bool updateToggle_CounterintuitiveAimbot = false;
	bool isToggle_CounterintuitiveAimbotFirstCall = true;
	void Toggle_CounterintuitiveAimbot(bool value) {
		if (!isToggle_CounterintuitiveAimbotFirstCall) {
			isCounterintuitiveAimbot = value;
			updateToggle_CounterintuitiveAimbot = true;
		} else {
			isToggle_CounterintuitiveAimbotFirstCall = false;
		}
	}
	//OP Aim Assist
	bool isOpAimAssist = false;
	bool updateToggle_OpAimAssist = false;
	bool isToggle_OpAimAssistFirstCall = true;
	void Toggle_OpAimAssist(bool value) {
		if (!isToggle_OpAimAssistFirstCall) {
			isOpAimAssist = value;
			updateToggle_OpAimAssist = true;
		} else {
			isToggle_OpAimAssistFirstCall = false;
		}
	}
	//Auto Fire
	bool isAutoFire = false;
	bool updateToggle_AutoFire = false;
	bool isToggle_AutoFireFirstCall = true;
	void Toggle_AutoFire(bool value) {
		if (!isToggle_AutoFireFirstCall) {
			isAutoFire = value;
			updateToggle_AutoFire = true;
		} else {
			isToggle_AutoFireFirstCall = false;
		}
	}
	//Silent Aim
	bool isSilentAim = false;
	bool updateToggle_SilentAim = false;
	bool isToggle_SilentAimFirstCall = true;
	void Toggle_SilentAim(bool value) {
		if (!isToggle_SilentAimFirstCall) {
			isSilentAim = value;
			updateToggle_SilentAim = true;
		} else {
			isToggle_SilentAimFirstCall = false;
		}
	}
	//Silent Aim Radius
	int SeekBar_SilentAimRadius = 1;
	bool updateSeekBar_SilentAimRadius = false;
	void SetSeekBar_SilentAimRadius(int value) {
		SeekBar_SilentAimRadius = value;
		updateSeekBar_SilentAimRadius = true;
	}
	};
	AimbotHacks Aimbot;

	struct EspHacks {
	//Collapse Players

	//Player Lines
	bool Players_isPlayerLines = false;
	bool updatePlayers_Toggle_PlayerLines = false;
	bool isPlayers_Toggle_PlayerLinesFirstCall = true;
	void Players_Toggle_PlayerLines(bool value) {
		if (!isPlayers_Toggle_PlayerLinesFirstCall) {
			Players_isPlayerLines = value;
			updatePlayers_Toggle_PlayerLines = true;
		} else {
			isPlayers_Toggle_PlayerLinesFirstCall = false;
		}
	}
	//Player Boxes
	bool Players_isPlayerBoxes = false;
	bool updatePlayers_Toggle_PlayerBoxes = false;
	bool isPlayers_Toggle_PlayerBoxesFirstCall = true;
	void Players_Toggle_PlayerBoxes(bool value) {
		if (!isPlayers_Toggle_PlayerBoxesFirstCall) {
			Players_isPlayerBoxes = value;
			updatePlayers_Toggle_PlayerBoxes = true;
		} else {
			isPlayers_Toggle_PlayerBoxesFirstCall = false;
		}
	}
	//Player Health Bars
	bool Players_isPlayerHealthBars = false;
	bool updatePlayers_Toggle_PlayerHealthBars = false;
	bool isPlayers_Toggle_PlayerHealthBarsFirstCall = true;
	void Players_Toggle_PlayerHealthBars(bool value) {
		if (!isPlayers_Toggle_PlayerHealthBarsFirstCall) {
			Players_isPlayerHealthBars = value;
			updatePlayers_Toggle_PlayerHealthBars = true;
		} else {
			isPlayers_Toggle_PlayerHealthBarsFirstCall = false;
		}
	}
	//Player List
	bool Players_isPlayerList = false;
	bool updatePlayers_Toggle_PlayerList = false;
	bool isPlayers_Toggle_PlayerListFirstCall = true;
	void Players_Toggle_PlayerList(bool value) {
		if (!isPlayers_Toggle_PlayerListFirstCall) {
			Players_isPlayerList = value;
			updatePlayers_Toggle_PlayerList = true;
		} else {
			isPlayers_Toggle_PlayerListFirstCall = false;
		}
	}
	//Include Player Positions In Player List
	bool Players_isIncludePlayerPositionsInPlayerList = false;
	bool updatePlayers_CheckBox_IncludePlayerPositionsInPlayerList = false;
	bool isPlayers_CheckBox_IncludePlayerPositionsInPlayerListFirstCall = true;
	void Players_CheckBox_IncludePlayerPositionsInPlayerList(bool value) {
		if (!isPlayers_CheckBox_IncludePlayerPositionsInPlayerListFirstCall) {
			Players_isIncludePlayerPositionsInPlayerList = value;
			updatePlayers_CheckBox_IncludePlayerPositionsInPlayerList = true;
		} else {
			isPlayers_CheckBox_IncludePlayerPositionsInPlayerListFirstCall = false;
		}
	}
	//Include Bots
	bool Players_isIncludeBots = true;
	bool updatePlayers_CheckBox_IncludeBots = false;
	bool isPlayers_CheckBox_IncludeBotsFirstCall = true;
	void Players_CheckBox_IncludeBots(bool value) {
		if (!isPlayers_CheckBox_IncludeBotsFirstCall) {
			Players_isIncludeBots = value;
			updatePlayers_CheckBox_IncludeBots = true;
		} else {
			isPlayers_CheckBox_IncludeBotsFirstCall = false;
		}
	}
	//Show \"Bot\" Tag Over Heads Of Bots
	bool Players_isShowBotTagOverHeadsOfBots = true;
	bool updatePlayers_CheckBox_ShowBotTagOverHeadsOfBots = false;
	bool isPlayers_CheckBox_ShowBotTagOverHeadsOfBotsFirstCall = true;
	void Players_CheckBox_ShowBotTagOverHeadsOfBots(bool value) {
		if (!isPlayers_CheckBox_ShowBotTagOverHeadsOfBotsFirstCall) {
			Players_isShowBotTagOverHeadsOfBots = value;
			updatePlayers_CheckBox_ShowBotTagOverHeadsOfBots = true;
		} else {
			isPlayers_CheckBox_ShowBotTagOverHeadsOfBotsFirstCall = false;
		}
	}
	//Show Bots in Different Color
	bool Players_isShowBotsInDifferentColor = false;
	bool updatePlayers_CheckBox_ShowBotsInDifferentColor = false;
	bool isPlayers_CheckBox_ShowBotsInDifferentColorFirstCall = true;
	void Players_CheckBox_ShowBotsInDifferentColor(bool value) {
		if (!isPlayers_CheckBox_ShowBotsInDifferentColorFirstCall) {
			Players_isShowBotsInDifferentColor = value;
			updatePlayers_CheckBox_ShowBotsInDifferentColor = true;
		} else {
			isPlayers_CheckBox_ShowBotsInDifferentColorFirstCall = false;
		}
	}
	//All Players
	bool Players_isAllPlayers = true;
	bool updatePlayers_CheckBox_AllPlayers = false;
	bool isPlayers_CheckBox_AllPlayersFirstCall = true;
	void Players_CheckBox_AllPlayers(bool value) {
		if (!isPlayers_CheckBox_AllPlayersFirstCall) {
			Players_isAllPlayers = value;
			updatePlayers_CheckBox_AllPlayers = true;
		} else {
			isPlayers_CheckBox_AllPlayersFirstCall = false;
		}
	}
	//Only Players Named
	bool Players_isOnlyPlayersNamed = false;
	bool updatePlayers_CheckBox_OnlyPlayersNamed = false;
	bool isPlayers_CheckBox_OnlyPlayersNamedFirstCall = true;
	void Players_CheckBox_OnlyPlayersNamed(bool value) {
		if (!isPlayers_CheckBox_OnlyPlayersNamedFirstCall) {
			Players_isOnlyPlayersNamed = value;
			updatePlayers_CheckBox_OnlyPlayersNamed = true;
		} else {
			isPlayers_CheckBox_OnlyPlayersNamedFirstCall = false;
		}
	}
	//Only Players Named
	std::string Players_InputText_OnlyPlayersNamed = "{[Default]}";
	bool updatePlayers_InputText_OnlyPlayersNamed = false;
	void Players_SetInputText_OnlyPlayersNamed(std::string value) {
		Players_InputText_OnlyPlayersNamed = value;
		updatePlayers_InputText_OnlyPlayersNamed = true;
	}

	//Collapse Vehicles

	//Vehicle Lines
	bool Vehicles_isVehicleLines = false;
	bool updateVehicles_Toggle_VehicleLines = false;
	bool isVehicles_Toggle_VehicleLinesFirstCall = true;
	void Vehicles_Toggle_VehicleLines(bool value) {
		if (!isVehicles_Toggle_VehicleLinesFirstCall) {
			Vehicles_isVehicleLines = value;
			updateVehicles_Toggle_VehicleLines = true;
		} else {
			isVehicles_Toggle_VehicleLinesFirstCall = false;
		}
	}
	//Vehicle Boxes
	bool Vehicles_isVehicleBoxes = false;
	bool updateVehicles_Toggle_VehicleBoxes = false;
	bool isVehicles_Toggle_VehicleBoxesFirstCall = true;
	void Vehicles_Toggle_VehicleBoxes(bool value) {
		if (!isVehicles_Toggle_VehicleBoxesFirstCall) {
			Vehicles_isVehicleBoxes = value;
			updateVehicles_Toggle_VehicleBoxes = true;
		} else {
			isVehicles_Toggle_VehicleBoxesFirstCall = false;
		}
	}
	//Vehicle Health Bars
	bool Vehicles_isVehicleHealthBars = false;
	bool updateVehicles_Toggle_VehicleHealthBars = false;
	bool isVehicles_Toggle_VehicleHealthBarsFirstCall = true;
	void Vehicles_Toggle_VehicleHealthBars(bool value) {
		if (!isVehicles_Toggle_VehicleHealthBarsFirstCall) {
			Vehicles_isVehicleHealthBars = value;
			updateVehicles_Toggle_VehicleHealthBars = true;
		} else {
			isVehicles_Toggle_VehicleHealthBarsFirstCall = false;
		}
	}
	//Show \"Occupied\" Tag Over Occupied Vehicles
	bool Vehicles_isShowOccupiedTagOverOccupiedVehicles = false;
	bool updateVehicles_Toggle_ShowOccupiedTagOverOccupiedVehicles = false;
	bool isVehicles_Toggle_ShowOccupiedTagOverOccupiedVehiclesFirstCall = true;
	void Vehicles_Toggle_ShowOccupiedTagOverOccupiedVehicles(bool value) {
		if (!isVehicles_Toggle_ShowOccupiedTagOverOccupiedVehiclesFirstCall) {
			Vehicles_isShowOccupiedTagOverOccupiedVehicles = value;
			updateVehicles_Toggle_ShowOccupiedTagOverOccupiedVehicles = true;
		} else {
			isVehicles_Toggle_ShowOccupiedTagOverOccupiedVehiclesFirstCall = false;
		}
	}
	};
	EspHacks Esp;

	struct VisionHacks {
	//Collapse Perspective

	//First Person
	bool Perspective_isFirstPerson = false;
	bool updatePerspective_CheckBox_FirstPerson = false;
	bool isPerspective_CheckBox_FirstPersonFirstCall = true;
	void Perspective_CheckBox_FirstPerson(bool value) {
		if (!isPerspective_CheckBox_FirstPersonFirstCall) {
			Perspective_isFirstPerson = value;
			updatePerspective_CheckBox_FirstPerson = true;
		} else {
			isPerspective_CheckBox_FirstPersonFirstCall = false;
		}
	}
	//Third Person
	bool Perspective_isThirdPerson = false;
	bool updatePerspective_CheckBox_ThirdPerson = false;
	bool isPerspective_CheckBox_ThirdPersonFirstCall = true;
	void Perspective_CheckBox_ThirdPerson(bool value) {
		if (!isPerspective_CheckBox_ThirdPersonFirstCall) {
			Perspective_isThirdPerson = value;
			updatePerspective_CheckBox_ThirdPerson = true;
		} else {
			isPerspective_CheckBox_ThirdPersonFirstCall = false;
		}
	}

	//Custom FOV
	bool isCustomFov = false;
	bool updateToggle_CustomFov = false;
	bool isToggle_CustomFovFirstCall = true;
	void Toggle_CustomFov(bool value) {
		if (!isToggle_CustomFovFirstCall) {
			isCustomFov = value;
			updateToggle_CustomFov = true;
		} else {
			isToggle_CustomFovFirstCall = false;
		}
	}
	//FOV
	int SeekBar_Fov = 1;
	bool updateSeekBar_Fov = false;
	void SetSeekBar_Fov(int value) {
		SeekBar_Fov = value;
		updateSeekBar_Fov = true;
	}
	//Crosshair Scale
	int SeekBar_CrosshairScale = 1;
	bool updateSeekBar_CrosshairScale = false;
	void SetSeekBar_CrosshairScale(int value) {
		SeekBar_CrosshairScale = value;
		updateSeekBar_CrosshairScale = true;
	}
	//Disable Fog
	bool isDisableFog = false;
	bool updateToggle_DisableFog = false;
	bool isToggle_DisableFogFirstCall = true;
	void Toggle_DisableFog(bool value) {
		if (!isToggle_DisableFogFirstCall) {
			isDisableFog = value;
			updateToggle_DisableFog = true;
		} else {
			isToggle_DisableFogFirstCall = false;
		}
	}
	//Freeze Camera
	bool isFreezeCamera = false;
	bool updateToggle_FreezeCamera = false;
	bool isToggle_FreezeCameraFirstCall = true;
	void Toggle_FreezeCamera(bool value) {
		if (!isToggle_FreezeCameraFirstCall) {
			isFreezeCamera = value;
			updateToggle_FreezeCamera = true;
		} else {
			isToggle_FreezeCameraFirstCall = false;
		}
	}
	//Chams
	bool isChams = false;
	bool updateToggle_Chams = false;
	bool isToggle_ChamsFirstCall = true;
	void Toggle_Chams(bool value) {
		if (!isToggle_ChamsFirstCall) {
			isChams = value;
			updateToggle_Chams = true;
		} else {
			isToggle_ChamsFirstCall = false;
		}
	}
	//Xray
	bool isXray = false;
	bool updateToggle_Xray = false;
	bool isToggle_XrayFirstCall = true;
	void Toggle_Xray(bool value) {
		if (!isToggle_XrayFirstCall) {
			isXray = value;
			updateToggle_Xray = true;
		} else {
			isToggle_XrayFirstCall = false;
		}
	}
	};
	VisionHacks Vision;

	struct EffectsHacks {
	//Anti-Freeze
	bool isAntiFreeze = false;
	bool updateToggle_AntiFreeze = false;
	bool isToggle_AntiFreezeFirstCall = true;
	void Toggle_AntiFreeze(bool value) {
		if (!isToggle_AntiFreezeFirstCall) {
			isAntiFreeze = value;
			updateToggle_AntiFreeze = true;
		} else {
			isToggle_AntiFreezeFirstCall = false;
		}
	}
	//Anti Camera Shake
	bool isAntiCameraShake = false;
	bool updateToggle_AntiCameraShake = false;
	bool isToggle_AntiCameraShakeFirstCall = true;
	void Toggle_AntiCameraShake(bool value) {
		if (!isToggle_AntiCameraShakeFirstCall) {
			isAntiCameraShake = value;
			updateToggle_AntiCameraShake = true;
		} else {
			isToggle_AntiCameraShakeFirstCall = false;
		}
	}
	};
	EffectsHacks Effects;

	struct MovementHacks {
	//Fly
	bool isFly = false;
	bool updateToggle_Fly = false;
	bool isToggle_FlyFirstCall = true;
	void Toggle_Fly(bool value) {
		if (!isToggle_FlyFirstCall) {
			isFly = value;
			updateToggle_Fly = true;
		} else {
			isToggle_FlyFirstCall = false;
		}
	}
	//Hover
	bool isHover = false;
	bool updateToggle_Hover = false;
	bool isToggle_HoverFirstCall = true;
	void Toggle_Hover(bool value) {
		if (!isToggle_HoverFirstCall) {
			isHover = value;
			updateToggle_Hover = true;
		} else {
			isToggle_HoverFirstCall = false;
		}
	}
	//Hover At Y
	std::string InputText_HoverAtY = "{[Default]}";
	bool updateInputText_HoverAtY = false;
	void SetInputText_HoverAtY(std::string value) {
		InputText_HoverAtY = value;
		updateInputText_HoverAtY = true;
	}
	//Infinite Jump
	bool isInfiniteJump = false;
	bool updateToggle_InfiniteJump = false;
	bool isToggle_InfiniteJumpFirstCall = true;
	void Toggle_InfiniteJump(bool value) {
		if (!isToggle_InfiniteJumpFirstCall) {
			isInfiniteJump = value;
			updateToggle_InfiniteJump = true;
		} else {
			isToggle_InfiniteJumpFirstCall = false;
		}
	}
	//Jump Height
	bool isJumpHeight = false;
	bool updateToggle_JumpHeight = false;
	bool isToggle_JumpHeightFirstCall = true;
	void Toggle_JumpHeight(bool value) {
		if (!isToggle_JumpHeightFirstCall) {
			isJumpHeight = value;
			updateToggle_JumpHeight = true;
		} else {
			isToggle_JumpHeightFirstCall = false;
		}
	}
	//Jump Height
	int SeekBar_JumpHeight = 1;
	bool updateSeekBar_JumpHeight = false;
	void SetSeekBar_JumpHeight(int value) {
		SeekBar_JumpHeight = value;
		updateSeekBar_JumpHeight = true;
	}
	//Jump Speed
	bool isJumpSpeed = false;
	bool updateToggle_JumpSpeed = false;
	bool isToggle_JumpSpeedFirstCall = true;
	void Toggle_JumpSpeed(bool value) {
		if (!isToggle_JumpSpeedFirstCall) {
			isJumpSpeed = value;
			updateToggle_JumpSpeed = true;
		} else {
			isToggle_JumpSpeedFirstCall = false;
		}
	}
	//Jump Speed
	int SeekBar_JumpSpeed = 1;
	bool updateSeekBar_JumpSpeed = false;
	void SetSeekBar_JumpSpeed(int value) {
		SeekBar_JumpSpeed = value;
		updateSeekBar_JumpSpeed = true;
	}
	//Hover after Jump
	bool isHoverAfterJump = false;
	bool updateToggle_HoverAfterJump = false;
	bool isToggle_HoverAfterJumpFirstCall = true;
	void Toggle_HoverAfterJump(bool value) {
		if (!isToggle_HoverAfterJumpFirstCall) {
			isHoverAfterJump = value;
			updateToggle_HoverAfterJump = true;
		} else {
			isToggle_HoverAfterJumpFirstCall = false;
		}
	}
	//Hover Length (Seconds)
	int SeekBar_HoverLengthSeconds = 1;
	bool updateSeekBar_HoverLengthSeconds = false;
	void SetSeekBar_HoverLengthSeconds(int value) {
		SeekBar_HoverLengthSeconds = value;
		updateSeekBar_HoverLengthSeconds = true;
	}
	//Hover Length (Miliseconds)
	int SeekBar_HoverLengthMiliseconds = 1;
	bool updateSeekBar_HoverLengthMiliseconds = false;
	void SetSeekBar_HoverLengthMiliseconds(int value) {
		SeekBar_HoverLengthMiliseconds = value;
		updateSeekBar_HoverLengthMiliseconds = true;
	}
	//Inverted Jump
	bool isInvertedJump = false;
	bool updateToggle_InvertedJump = false;
	bool isToggle_InvertedJumpFirstCall = true;
	void Toggle_InvertedJump(bool value) {
		if (!isToggle_InvertedJumpFirstCall) {
			isInvertedJump = value;
			updateToggle_InvertedJump = true;
		} else {
			isToggle_InvertedJumpFirstCall = false;
		}
	}
	//Bunny Hop
	bool isBunnyHop = false;
	bool updateToggle_BunnyHop = false;
	bool isToggle_BunnyHopFirstCall = true;
	void Toggle_BunnyHop(bool value) {
		if (!isToggle_BunnyHopFirstCall) {
			isBunnyHop = value;
			updateToggle_BunnyHop = true;
		} else {
			isToggle_BunnyHopFirstCall = false;
		}
	}
	//Walk Speed
	bool isWalkSpeed = false;
	bool updateToggle_WalkSpeed = false;
	bool isToggle_WalkSpeedFirstCall = true;
	void Toggle_WalkSpeed(bool value) {
		if (!isToggle_WalkSpeedFirstCall) {
			isWalkSpeed = value;
			updateToggle_WalkSpeed = true;
		} else {
			isToggle_WalkSpeedFirstCall = false;
		}
	}
	//Walk Speed
	int SeekBar_WalkSpeed = 1;
	bool updateSeekBar_WalkSpeed = false;
	void SetSeekBar_WalkSpeed(int value) {
		SeekBar_WalkSpeed = value;
		updateSeekBar_WalkSpeed = true;
	}
	//Run Speed
	bool isRunSpeed = false;
	bool updateToggle_RunSpeed = false;
	bool isToggle_RunSpeedFirstCall = true;
	void Toggle_RunSpeed(bool value) {
		if (!isToggle_RunSpeedFirstCall) {
			isRunSpeed = value;
			updateToggle_RunSpeed = true;
		} else {
			isToggle_RunSpeedFirstCall = false;
		}
	}
	//Run Speed
	int SeekBar_RunSpeed = 1;
	bool updateSeekBar_RunSpeed = false;
	void SetSeekBar_RunSpeed(int value) {
		SeekBar_RunSpeed = value;
		updateSeekBar_RunSpeed = true;
	}
	//Sprint Speed
	bool isSprintSpeed = false;
	bool updateToggle_SprintSpeed = false;
	bool isToggle_SprintSpeedFirstCall = true;
	void Toggle_SprintSpeed(bool value) {
		if (!isToggle_SprintSpeedFirstCall) {
			isSprintSpeed = value;
			updateToggle_SprintSpeed = true;
		} else {
			isToggle_SprintSpeedFirstCall = false;
		}
	}
	//Sprint Speed
	int SeekBar_SprintSpeed = 1;
	bool updateSeekBar_SprintSpeed = false;
	void SetSeekBar_SprintSpeed(int value) {
		SeekBar_SprintSpeed = value;
		updateSeekBar_SprintSpeed = true;
	}
	//Auto Sprint
	bool isAutoSprint = false;
	bool updateToggle_AutoSprint = false;
	bool isToggle_AutoSprintFirstCall = true;
	void Toggle_AutoSprint(bool value) {
		if (!isToggle_AutoSprintFirstCall) {
			isAutoSprint = value;
			updateToggle_AutoSprint = true;
		} else {
			isToggle_AutoSprintFirstCall = false;
		}
	}
	//No Clip
	bool isNoClip = false;
	bool updateToggle_NoClip = false;
	bool isToggle_NoClipFirstCall = true;
	void Toggle_NoClip(bool value) {
		if (!isToggle_NoClipFirstCall) {
			isNoClip = value;
			updateToggle_NoClip = true;
		} else {
			isToggle_NoClipFirstCall = false;
		}
	}
	//Remove All Hitboxes
	bool isRemoveAllHitboxes = false;
	bool updateToggle_RemoveAllHitboxes = false;
	bool isToggle_RemoveAllHitboxesFirstCall = true;
	void Toggle_RemoveAllHitboxes(bool value) {
		if (!isToggle_RemoveAllHitboxesFirstCall) {
			isRemoveAllHitboxes = value;
			updateToggle_RemoveAllHitboxes = true;
		} else {
			isToggle_RemoveAllHitboxesFirstCall = false;
		}
	}
	//Freeze Myself
	bool isFreezeMyself = false;
	bool updateToggle_FreezeMyself = false;
	bool isToggle_FreezeMyselfFirstCall = true;
	void Toggle_FreezeMyself(bool value) {
		if (!isToggle_FreezeMyselfFirstCall) {
			isFreezeMyself = value;
			updateToggle_FreezeMyself = true;
		} else {
			isToggle_FreezeMyselfFirstCall = false;
		}
	}
	//Underwater
	bool isUnderwater = false;
	bool updateToggle_Underwater = false;
	bool isToggle_UnderwaterFirstCall = true;
	void Toggle_Underwater(bool value) {
		if (!isToggle_UnderwaterFirstCall) {
			isUnderwater = value;
			updateToggle_Underwater = true;
		} else {
			isToggle_UnderwaterFirstCall = false;
		}
	}
	//Get My Current Position
	bool Button_isGetMyCurrentPosition = false;
	bool updateButton_GetMyCurrentPosition = false;
	void Button_GetMyCurrentPosition() {
		Button_isGetMyCurrentPosition = true;
	}

	//Collapse Gravity

	//Gravity Strength
	bool Gravity_isGravityStrength = false;
	bool updateGravity_Toggle_GravityStrength = false;
	bool isGravity_Toggle_GravityStrengthFirstCall = true;
	void Gravity_Toggle_GravityStrength(bool value) {
		if (!isGravity_Toggle_GravityStrengthFirstCall) {
			Gravity_isGravityStrength = value;
			updateGravity_Toggle_GravityStrength = true;
		} else {
			isGravity_Toggle_GravityStrengthFirstCall = false;
		}
	}
	//Gravity
	int Gravity_SeekBar_Gravity = 1;
	bool updateGravity_SeekBar_Gravity = false;
	void Gravity_SetSeekBar_Gravity(int value) {
		Gravity_SeekBar_Gravity = value;
		updateGravity_SeekBar_Gravity = true;
	}
	//Inverted Gravity
	bool Gravity_isInvertedGravity = false;
	bool updateGravity_Toggle_InvertedGravity = false;
	bool isGravity_Toggle_InvertedGravityFirstCall = true;
	void Gravity_Toggle_InvertedGravity(bool value) {
		if (!isGravity_Toggle_InvertedGravityFirstCall) {
			Gravity_isInvertedGravity = value;
			updateGravity_Toggle_InvertedGravity = true;
		} else {
			isGravity_Toggle_InvertedGravityFirstCall = false;
		}
	}

	//Collapse Teleport

	//X
	bool Teleport_isX = true;
	bool updateTeleport_CheckBox_X = false;
	bool isTeleport_CheckBox_XFirstCall = true;
	void Teleport_CheckBox_X(bool value) {
		if (!isTeleport_CheckBox_XFirstCall) {
			Teleport_isX = value;
			updateTeleport_CheckBox_X = true;
		} else {
			isTeleport_CheckBox_XFirstCall = false;
		}
	}
	//X
	int Teleport_InputValue_X = 1;
	bool updateTeleport_InputValue_X = false;
	void Teleport_SetInputValue_X(int value) {
		Teleport_InputValue_X = value;
		updateTeleport_InputValue_X = true;
	}
	//Y
	bool Teleport_isY = true;
	bool updateTeleport_CheckBox_Y = false;
	bool isTeleport_CheckBox_YFirstCall = true;
	void Teleport_CheckBox_Y(bool value) {
		if (!isTeleport_CheckBox_YFirstCall) {
			Teleport_isY = value;
			updateTeleport_CheckBox_Y = true;
		} else {
			isTeleport_CheckBox_YFirstCall = false;
		}
	}
	//Y
	int Teleport_InputValue_Y = 1;
	bool updateTeleport_InputValue_Y = false;
	void Teleport_SetInputValue_Y(int value) {
		Teleport_InputValue_Y = value;
		updateTeleport_InputValue_Y = true;
	}
	//Z
	bool Teleport_isZ = true;
	bool updateTeleport_CheckBox_Z = false;
	bool isTeleport_CheckBox_ZFirstCall = true;
	void Teleport_CheckBox_Z(bool value) {
		if (!isTeleport_CheckBox_ZFirstCall) {
			Teleport_isZ = value;
			updateTeleport_CheckBox_Z = true;
		} else {
			isTeleport_CheckBox_ZFirstCall = false;
		}
	}
	//Z
	int Teleport_InputValue_Z = 1;
	bool updateTeleport_InputValue_Z = false;
	void Teleport_SetInputValue_Z(int value) {
		Teleport_InputValue_Z = value;
		updateTeleport_InputValue_Z = true;
	}
	//Teleport
	bool Teleport_Button_isTeleport = false;
	bool updateTeleport_Button_Teleport = false;
	void Teleport_Button_Teleport() {
		Teleport_Button_isTeleport = true;
	}
	//Teleport To Player
	std::string Teleport_InputText_TeleportToPlayer = "{[Default]}";
	bool updateTeleport_InputText_TeleportToPlayer = false;
	void Teleport_SetInputText_TeleportToPlayer(std::string value) {
		Teleport_InputText_TeleportToPlayer = value;
		updateTeleport_InputText_TeleportToPlayer = true;
	}
	//Teleport To Player
	bool Teleport_Button_isTeleportToPlayer = false;
	bool updateTeleport_Button_TeleportToPlayer = false;
	void Teleport_Button_TeleportToPlayer() {
		Teleport_Button_isTeleportToPlayer = true;
	}
	//Teleport To Closest Unoccupied Vehicle
	bool Teleport_Button_isTeleportToClosestUnoccupiedVehicle = false;
	bool updateTeleport_Button_TeleportToClosestUnoccupiedVehicle = false;
	void Teleport_Button_TeleportToClosestUnoccupiedVehicle() {
		Teleport_Button_isTeleportToClosestUnoccupiedVehicle = true;
	}
	};
	MovementHacks Movement;

	struct RespawningHacks {
	//Respawn
	bool Button_isRespawn = false;
	bool updateButton_Respawn = false;
	void Button_Respawn() {
		Button_isRespawn = true;
	}
	//Immediate Respawn
	bool isImmediateRespawn = false;
	bool updateToggle_ImmediateRespawn = false;
	bool isToggle_ImmediateRespawnFirstCall = true;
	void Toggle_ImmediateRespawn(bool value) {
		if (!isToggle_ImmediateRespawnFirstCall) {
			isImmediateRespawn = value;
			updateToggle_ImmediateRespawn = true;
		} else {
			isToggle_ImmediateRespawnFirstCall = false;
		}
	}
	//Respawn In Place
	bool isRespawnInPlace = false;
	bool updateToggle_RespawnInPlace = false;
	bool isToggle_RespawnInPlaceFirstCall = true;
	void Toggle_RespawnInPlace(bool value) {
		if (!isToggle_RespawnInPlaceFirstCall) {
			isRespawnInPlace = value;
			updateToggle_RespawnInPlace = true;
		} else {
			isToggle_RespawnInPlaceFirstCall = false;
		}
	}
	//Don't Respawn
	bool isDisableRespawn = false;
	bool updateToggle_DisableRespawn = false;
	bool isToggle_DisableRespawnFirstCall = true;
	void Toggle_DisableRespawn(bool value) {
		if (!isToggle_DisableRespawnFirstCall) {
			isDisableRespawn = value;
			updateToggle_DisableRespawn = true;
		} else {
			isToggle_DisableRespawnFirstCall = false;
		}
	}

	//Collapse Custom Respawn Positon

	//X
	int CustomRespawnPositon_InputValue_X = 1;
	bool updateCustomRespawnPositon_InputValue_X = false;
	void CustomRespawnPositon_SetInputValue_X(int value) {
		CustomRespawnPositon_InputValue_X = value;
		updateCustomRespawnPositon_InputValue_X = true;
	}
	//Y
	int CustomRespawnPositon_InputValue_Y = 1;
	bool updateCustomRespawnPositon_InputValue_Y = false;
	void CustomRespawnPositon_SetInputValue_Y(int value) {
		CustomRespawnPositon_InputValue_Y = value;
		updateCustomRespawnPositon_InputValue_Y = true;
	}
	//Z
	int CustomRespawnPositon_InputValue_Z = 1;
	bool updateCustomRespawnPositon_InputValue_Z = false;
	void CustomRespawnPositon_SetInputValue_Z(int value) {
		CustomRespawnPositon_InputValue_Z = value;
		updateCustomRespawnPositon_InputValue_Z = true;
	}
	//Custom Respawn Position
	bool CustomRespawnPositon_isCustomRespawnPosition = false;
	bool updateCustomRespawnPositon_CheckBox_CustomRespawnPosition = false;
	bool isCustomRespawnPositon_CheckBox_CustomRespawnPositionFirstCall = true;
	void CustomRespawnPositon_CheckBox_CustomRespawnPosition(bool value) {
		if (!isCustomRespawnPositon_CheckBox_CustomRespawnPositionFirstCall) {
			CustomRespawnPositon_isCustomRespawnPosition = value;
			updateCustomRespawnPositon_CheckBox_CustomRespawnPosition = true;
		} else {
			isCustomRespawnPositon_CheckBox_CustomRespawnPositionFirstCall = false;
		}
	}
	//Respawn Next To Player
	bool CustomRespawnPositon_isRespawnNextToPlayer = false;
	bool updateCustomRespawnPositon_CheckBox_RespawnNextToPlayer = false;
	bool isCustomRespawnPositon_CheckBox_RespawnNextToPlayerFirstCall = true;
	void CustomRespawnPositon_CheckBox_RespawnNextToPlayer(bool value) {
		if (!isCustomRespawnPositon_CheckBox_RespawnNextToPlayerFirstCall) {
			CustomRespawnPositon_isRespawnNextToPlayer = value;
			updateCustomRespawnPositon_CheckBox_RespawnNextToPlayer = true;
		} else {
			isCustomRespawnPositon_CheckBox_RespawnNextToPlayerFirstCall = false;
		}
	}
	//Respawn Next To Player
	std::string CustomRespawnPositon_InputText_RespawnNextToPlayer = "{[Default]}";
	bool updateCustomRespawnPositon_InputText_RespawnNextToPlayer = false;
	void CustomRespawnPositon_SetInputText_RespawnNextToPlayer(std::string value) {
		CustomRespawnPositon_InputText_RespawnNextToPlayer = value;
		updateCustomRespawnPositon_InputText_RespawnNextToPlayer = true;
	}
	};
	RespawningHacks Respawning;

	struct VehiclesHacks {
	//Vehicle Infinite Health
	bool isVehicleInfiniteHealth = false;
	bool updateToggle_VehicleInfiniteHealth = false;
	bool isToggle_VehicleInfiniteHealthFirstCall = true;
	void Toggle_VehicleInfiniteHealth(bool value) {
		if (!isToggle_VehicleInfiniteHealthFirstCall) {
			isVehicleInfiniteHealth = value;
			updateToggle_VehicleInfiniteHealth = true;
		} else {
			isToggle_VehicleInfiniteHealthFirstCall = false;
		}
	}
	//Vehicle Godmode
	bool isVehicleGodmode = false;
	bool updateToggle_VehicleGodmode = false;
	bool isToggle_VehicleGodmodeFirstCall = true;
	void Toggle_VehicleGodmode(bool value) {
		if (!isToggle_VehicleGodmodeFirstCall) {
			isVehicleGodmode = value;
			updateToggle_VehicleGodmode = true;
		} else {
			isToggle_VehicleGodmodeFirstCall = false;
		}
	}
	//Eject From Vehicle
	bool Button_isEjectFromVehicle = false;
	bool updateButton_EjectFromVehicle = false;
	void Button_EjectFromVehicle() {
		Button_isEjectFromVehicle = true;
	}
	//Eject All Vehicles
	bool Button_isEjectAllVehicles = false;
	bool updateButton_EjectAllVehicles = false;
	void Button_EjectAllVehicles() {
		Button_isEjectAllVehicles = true;
	}
	//Destroy All Vehicles
	bool Button_isDestroyAllVehicles = false;
	bool updateButton_DestroyAllVehicles = false;
	void Button_DestroyAllVehicles() {
		Button_isDestroyAllVehicles = true;
	}

	//Collapse Teleport My Vehicle

	//X
	int TeleportMyVehicle_InputValue_X = 1;
	bool updateTeleportMyVehicle_InputValue_X = false;
	void TeleportMyVehicle_SetInputValue_X(int value) {
		TeleportMyVehicle_InputValue_X = value;
		updateTeleportMyVehicle_InputValue_X = true;
	}
	//Y
	bool TeleportMyVehicle_isY = true;
	bool updateTeleportMyVehicle_CheckBox_Y = false;
	bool isTeleportMyVehicle_CheckBox_YFirstCall = true;
	void TeleportMyVehicle_CheckBox_Y(bool value) {
		if (!isTeleportMyVehicle_CheckBox_YFirstCall) {
			TeleportMyVehicle_isY = value;
			updateTeleportMyVehicle_CheckBox_Y = true;
		} else {
			isTeleportMyVehicle_CheckBox_YFirstCall = false;
		}
	}
	//Y
	int TeleportMyVehicle_InputValue_Y = 1;
	bool updateTeleportMyVehicle_InputValue_Y = false;
	void TeleportMyVehicle_SetInputValue_Y(int value) {
		TeleportMyVehicle_InputValue_Y = value;
		updateTeleportMyVehicle_InputValue_Y = true;
	}
	//Z
	bool TeleportMyVehicle_isZ = true;
	bool updateTeleportMyVehicle_CheckBox_Z = false;
	bool isTeleportMyVehicle_CheckBox_ZFirstCall = true;
	void TeleportMyVehicle_CheckBox_Z(bool value) {
		if (!isTeleportMyVehicle_CheckBox_ZFirstCall) {
			TeleportMyVehicle_isZ = value;
			updateTeleportMyVehicle_CheckBox_Z = true;
		} else {
			isTeleportMyVehicle_CheckBox_ZFirstCall = false;
		}
	}
	//Z
	int TeleportMyVehicle_InputValue_Z = 1;
	bool updateTeleportMyVehicle_InputValue_Z = false;
	void TeleportMyVehicle_SetInputValue_Z(int value) {
		TeleportMyVehicle_InputValue_Z = value;
		updateTeleportMyVehicle_InputValue_Z = true;
	}
	//Teleport Vehicle
	bool TeleportMyVehicle_Button_isTeleportVehicle = false;
	bool updateTeleportMyVehicle_Button_TeleportVehicle = false;
	void TeleportMyVehicle_Button_TeleportVehicle() {
		TeleportMyVehicle_Button_isTeleportVehicle = true;
	}
	//Teleport Vehicle To Me
	bool TeleportMyVehicle_Button_isTeleportVehicleToMe = false;
	bool updateTeleportMyVehicle_Button_TeleportVehicleToMe = false;
	void TeleportMyVehicle_Button_TeleportVehicleToMe() {
		TeleportMyVehicle_Button_isTeleportVehicleToMe = true;
	}
	//Teleport Vehicle To Player
	std::string TeleportMyVehicle_InputText_TeleportVehicleToPlayer = "{[Default]}";
	bool updateTeleportMyVehicle_InputText_TeleportVehicleToPlayer = false;
	void TeleportMyVehicle_SetInputText_TeleportVehicleToPlayer(std::string value) {
		TeleportMyVehicle_InputText_TeleportVehicleToPlayer = value;
		updateTeleportMyVehicle_InputText_TeleportVehicleToPlayer = true;
	}
	//Teleport Vehicle To Player
	bool TeleportMyVehicle_Button_isTeleportVehicleToPlayer = false;
	bool updateTeleportMyVehicle_Button_TeleportVehicleToPlayer = false;
	void TeleportMyVehicle_Button_TeleportVehicleToPlayer() {
		TeleportMyVehicle_Button_isTeleportVehicleToPlayer = true;
	}

	//Collapse Spawn Vehicle

	//Custom X
	bool SpawnVehicle_isCustomX = true;
	bool updateSpawnVehicle_CheckBox_CustomX = false;
	bool isSpawnVehicle_CheckBox_CustomXFirstCall = true;
	void SpawnVehicle_CheckBox_CustomX(bool value) {
		if (!isSpawnVehicle_CheckBox_CustomXFirstCall) {
			SpawnVehicle_isCustomX = value;
			updateSpawnVehicle_CheckBox_CustomX = true;
		} else {
			isSpawnVehicle_CheckBox_CustomXFirstCall = false;
		}
	}
	//X
	int SpawnVehicle_InputValue_X = 1;
	bool updateSpawnVehicle_InputValue_X = false;
	void SpawnVehicle_SetInputValue_X(int value) {
		SpawnVehicle_InputValue_X = value;
		updateSpawnVehicle_InputValue_X = true;
	}
	//Custom Y
	bool SpawnVehicle_isCustomY = true;
	bool updateSpawnVehicle_CheckBox_CustomY = false;
	bool isSpawnVehicle_CheckBox_CustomYFirstCall = true;
	void SpawnVehicle_CheckBox_CustomY(bool value) {
		if (!isSpawnVehicle_CheckBox_CustomYFirstCall) {
			SpawnVehicle_isCustomY = value;
			updateSpawnVehicle_CheckBox_CustomY = true;
		} else {
			isSpawnVehicle_CheckBox_CustomYFirstCall = false;
		}
	}
	//Y
	int SpawnVehicle_InputValue_Y = 1;
	bool updateSpawnVehicle_InputValue_Y = false;
	void SpawnVehicle_SetInputValue_Y(int value) {
		SpawnVehicle_InputValue_Y = value;
		updateSpawnVehicle_InputValue_Y = true;
	}
	//Custom Z
	bool SpawnVehicle_isCustomZ = true;
	bool updateSpawnVehicle_CheckBox_CustomZ = false;
	bool isSpawnVehicle_CheckBox_CustomZFirstCall = true;
	void SpawnVehicle_CheckBox_CustomZ(bool value) {
		if (!isSpawnVehicle_CheckBox_CustomZFirstCall) {
			SpawnVehicle_isCustomZ = value;
			updateSpawnVehicle_CheckBox_CustomZ = true;
		} else {
			isSpawnVehicle_CheckBox_CustomZFirstCall = false;
		}
	}
	//Z
	int SpawnVehicle_InputValue_Z = 1;
	bool updateSpawnVehicle_InputValue_Z = false;
	void SpawnVehicle_SetInputValue_Z(int value) {
		SpawnVehicle_InputValue_Z = value;
		updateSpawnVehicle_InputValue_Z = true;
	}
	//Spawn Vehicle
	bool SpawnVehicle_Button_isSpawnVehicle = false;
	bool updateSpawnVehicle_Button_SpawnVehicle = false;
	void SpawnVehicle_Button_SpawnVehicle() {
		SpawnVehicle_Button_isSpawnVehicle = true;
	}
	//Spawn Vehicle Next To Me
	bool SpawnVehicle_Button_isSpawnVehicleNextToMe = false;
	bool updateSpawnVehicle_Button_SpawnVehicleNextToMe = false;
	void SpawnVehicle_Button_SpawnVehicleNextToMe() {
		SpawnVehicle_Button_isSpawnVehicleNextToMe = true;
	}
	//Spawn Vehicle Next To Player
	std::string SpawnVehicle_InputText_SpawnVehicleNextToPlayer = "{[Default]}";
	bool updateSpawnVehicle_InputText_SpawnVehicleNextToPlayer = false;
	void SpawnVehicle_SetInputText_SpawnVehicleNextToPlayer(std::string value) {
		SpawnVehicle_InputText_SpawnVehicleNextToPlayer = value;
		updateSpawnVehicle_InputText_SpawnVehicleNextToPlayer = true;
	}
	//Spawn Vehicle Next To Player
	bool SpawnVehicle_Button_isSpawnVehicleNextToPlayer = false;
	bool updateSpawnVehicle_Button_SpawnVehicleNextToPlayer = false;
	void SpawnVehicle_Button_SpawnVehicleNextToPlayer() {
		SpawnVehicle_Button_isSpawnVehicleNextToPlayer = true;
	}
	};
	VehiclesHacks Vehicles;

	struct ScoreHacks {
	//Score
	int InputValue_Score = 1;
	bool updateInputValue_Score = false;
	void SetInputValue_Score(int value) {
		InputValue_Score = value;
		updateInputValue_Score = true;
	}
	//Set Score
	bool Button_isSetScore = false;
	bool updateButton_SetScore = false;
	void Button_SetScore() {
		Button_isSetScore = true;
	}
	//Kills
	int InputValue_Kills = 1;
	bool updateInputValue_Kills = false;
	void SetInputValue_Kills(int value) {
		InputValue_Kills = value;
		updateInputValue_Kills = true;
	}
	//Set Kills
	bool Button_isSetKills = false;
	bool updateButton_SetKills = false;
	void Button_SetKills() {
		Button_isSetKills = true;
	}
	//Killstreak
	int InputValue_Killstreak = 1;
	bool updateInputValue_Killstreak = false;
	void SetInputValue_Killstreak(int value) {
		InputValue_Killstreak = value;
		updateInputValue_Killstreak = true;
	}
	//Set Killstreak
	bool Button_isSetKillstreak = false;
	bool updateButton_SetKillstreak = false;
	void Button_SetKillstreak() {
		Button_isSetKillstreak = true;
	}
	};
	ScoreHacks Score;

	struct BotsHacks {
	//Disable Bots
	bool isDisableBots = false;
	bool updateToggle_DisableBots = false;
	bool isToggle_DisableBotsFirstCall = true;
	void Toggle_DisableBots(bool value) {
		if (!isToggle_DisableBotsFirstCall) {
			isDisableBots = value;
			updateToggle_DisableBots = true;
		} else {
			isToggle_DisableBotsFirstCall = false;
		}
	}
	//Remove Bots
	bool Button_isRemoveBots = false;
	bool updateButton_RemoveBots = false;
	void Button_RemoveBots() {
		Button_isRemoveBots = true;
	}
	//Kill Bots
	bool Button_isKillBots = false;
	bool updateButton_KillBots = false;
	void Button_KillBots() {
		Button_isKillBots = true;
	}

	//Collapse Add Bots

	//Blue Team
	bool AddBots_isBlueTeam = false;
	bool updateAddBots_CheckBox_BlueTeam = false;
	bool isAddBots_CheckBox_BlueTeamFirstCall = true;
	void AddBots_CheckBox_BlueTeam(bool value) {
		if (!isAddBots_CheckBox_BlueTeamFirstCall) {
			AddBots_isBlueTeam = value;
			updateAddBots_CheckBox_BlueTeam = true;
		} else {
			isAddBots_CheckBox_BlueTeamFirstCall = false;
		}
	}
	//Red Team
	bool AddBots_isRedTeam = false;
	bool updateAddBots_CheckBox_RedTeam = false;
	bool isAddBots_CheckBox_RedTeamFirstCall = true;
	void AddBots_CheckBox_RedTeam(bool value) {
		if (!isAddBots_CheckBox_RedTeamFirstCall) {
			AddBots_isRedTeam = value;
			updateAddBots_CheckBox_RedTeam = true;
		} else {
			isAddBots_CheckBox_RedTeamFirstCall = false;
		}
	}
	//Name
	std::string AddBots_InputText_Name = "{[Default]}";
	bool updateAddBots_InputText_Name = false;
	void AddBots_SetInputText_Name(std::string value) {
		AddBots_InputText_Name = value;
		updateAddBots_InputText_Name = true;
	}
	//Add Bot
	bool AddBots_Button_isAddBot = false;
	bool updateAddBots_Button_AddBot = false;
	void AddBots_Button_AddBot() {
		AddBots_Button_isAddBot = true;
	}
	};
	BotsHacks Bots;

	struct MatchHacks {
	//Chat Spam Message
	std::string InputText_ChatSpamMessage = "{[Default]}";
	bool updateInputText_ChatSpamMessage = false;
	void SetInputText_ChatSpamMessage(std::string value) {
		InputText_ChatSpamMessage = value;
		updateInputText_ChatSpamMessage = true;
	}
	//Chat Spam V1
	bool isChatSpamV1 = false;
	bool updateToggle_ChatSpamV1 = false;
	bool isToggle_ChatSpamV1FirstCall = true;
	void Toggle_ChatSpamV1(bool value) {
		if (!isToggle_ChatSpamV1FirstCall) {
			isChatSpamV1 = value;
			updateToggle_ChatSpamV1 = true;
		} else {
			isToggle_ChatSpamV1FirstCall = false;
		}
	}
	//Chat Spam V2
	bool isChatSpamV2 = false;
	bool updateToggle_ChatSpamV2 = false;
	bool isToggle_ChatSpamV2FirstCall = true;
	void Toggle_ChatSpamV2(bool value) {
		if (!isToggle_ChatSpamV2FirstCall) {
			isChatSpamV2 = value;
			updateToggle_ChatSpamV2 = true;
		} else {
			isToggle_ChatSpamV2FirstCall = false;
		}
	}
	//Kick All
	bool Button_isKickAll = false;
	bool updateButton_KickAll = false;
	void Button_KickAll() {
		Button_isKickAll = true;
	}
	//Lock Lobby (Disable Joining)
	bool isLockLobbyDisableJoining = false;
	bool updateToggle_LockLobbyDisableJoining = false;
	bool isToggle_LockLobbyDisableJoiningFirstCall = true;
	void Toggle_LockLobbyDisableJoining(bool value) {
		if (!isToggle_LockLobbyDisableJoiningFirstCall) {
			isLockLobbyDisableJoining = value;
			updateToggle_LockLobbyDisableJoining = true;
		} else {
			isToggle_LockLobbyDisableJoiningFirstCall = false;
		}
	}

	//Collapse Match Time

	//Hours
	int MatchTime_InputValue_Hours = 1;
	bool updateMatchTime_InputValue_Hours = false;
	void MatchTime_SetInputValue_Hours(int value) {
		MatchTime_InputValue_Hours = value;
		updateMatchTime_InputValue_Hours = true;
	}
	//Minutes
	int MatchTime_InputValue_Minutes = 1;
	bool updateMatchTime_InputValue_Minutes = false;
	void MatchTime_SetInputValue_Minutes(int value) {
		MatchTime_InputValue_Minutes = value;
		updateMatchTime_InputValue_Minutes = true;
	}
	//Seconds
	int MatchTime_InputValue_Seconds = 1;
	bool updateMatchTime_InputValue_Seconds = false;
	void MatchTime_SetInputValue_Seconds(int value) {
		MatchTime_InputValue_Seconds = value;
		updateMatchTime_InputValue_Seconds = true;
	}
	//Set Time
	bool MatchTime_Button_isSetTime = false;
	bool updateMatchTime_Button_SetTime = false;
	void MatchTime_Button_SetTime() {
		MatchTime_Button_isSetTime = true;
	}
	//Match Speed Multiplier
	int MatchTime_InputValue_MatchSpeedMultiplier = 1;
	bool updateMatchTime_InputValue_MatchSpeedMultiplier = false;
	void MatchTime_SetInputValue_MatchSpeedMultiplier(int value) {
		MatchTime_InputValue_MatchSpeedMultiplier = value;
		updateMatchTime_InputValue_MatchSpeedMultiplier = true;
	}
	//Match Speed Multiplier
	bool MatchTime_isMatchSpeedMultiplier = false;
	bool updateMatchTime_Toggle_MatchSpeedMultiplier = false;
	bool isMatchTime_Toggle_MatchSpeedMultiplierFirstCall = true;
	void MatchTime_Toggle_MatchSpeedMultiplier(bool value) {
		if (!isMatchTime_Toggle_MatchSpeedMultiplierFirstCall) {
			MatchTime_isMatchSpeedMultiplier = value;
			updateMatchTime_Toggle_MatchSpeedMultiplier = true;
		} else {
			isMatchTime_Toggle_MatchSpeedMultiplierFirstCall = false;
		}
	}
	//Freeze Match Time
	bool MatchTime_isFreezeMatchTime = false;
	bool updateMatchTime_CheckBox_FreezeMatchTime = false;
	bool isMatchTime_CheckBox_FreezeMatchTimeFirstCall = true;
	void MatchTime_CheckBox_FreezeMatchTime(bool value) {
		if (!isMatchTime_CheckBox_FreezeMatchTimeFirstCall) {
			MatchTime_isFreezeMatchTime = value;
			updateMatchTime_CheckBox_FreezeMatchTime = true;
		} else {
			isMatchTime_CheckBox_FreezeMatchTimeFirstCall = false;
		}
	}
	};
	MatchHacks Match;

	struct ManipulateAllPlayersHacks {
	//Include Bots
	bool isIncludeBots = true;
	bool updateCheckBox_IncludeBots = false;
	bool isCheckBox_IncludeBotsFirstCall = true;
	void CheckBox_IncludeBots(bool value) {
		if (!isCheckBox_IncludeBotsFirstCall) {
			isIncludeBots = value;
			updateCheckBox_IncludeBots = true;
		} else {
			isCheckBox_IncludeBotsFirstCall = false;
		}
	}
	//Score
	int InputValue_Score = 1;
	bool updateInputValue_Score = false;
	void SetInputValue_Score(int value) {
		InputValue_Score = value;
		updateInputValue_Score = true;
	}
	//Set Score
	bool Button_isSetScore = false;
	bool updateButton_SetScore = false;
	void Button_SetScore() {
		Button_isSetScore = true;
	}
	//Kills
	int InputValue_Kills = 1;
	bool updateInputValue_Kills = false;
	void SetInputValue_Kills(int value) {
		InputValue_Kills = value;
		updateInputValue_Kills = true;
	}
	//Set Kills
	bool Button_isSetKills = false;
	bool updateButton_SetKills = false;
	void Button_SetKills() {
		Button_isSetKills = true;
	}
	//Size
	int SeekBar_Size = 1;
	bool updateSeekBar_Size = false;
	void SetSeekBar_Size(int value) {
		SeekBar_Size = value;
		updateSeekBar_Size = true;
	}
	//Negative Size
	bool isNegativeSize = false;
	bool updateToggle_NegativeSize = false;
	bool isToggle_NegativeSizeFirstCall = true;
	void Toggle_NegativeSize(bool value) {
		if (!isToggle_NegativeSizeFirstCall) {
			isNegativeSize = value;
			updateToggle_NegativeSize = true;
		} else {
			isToggle_NegativeSizeFirstCall = false;
		}
	}
	//Change Player Names
	std::string InputText_ChangePlayerNames = "{[Default]}";
	bool updateInputText_ChangePlayerNames = false;
	void SetInputText_ChangePlayerNames(std::string value) {
		InputText_ChangePlayerNames = value;
		updateInputText_ChangePlayerNames = true;
	}
	//Change Player Teams
	bool Button_isChangePlayerTeams = false;
	bool updateButton_ChangePlayerTeams = false;
	void Button_ChangePlayerTeams() {
		Button_isChangePlayerTeams = true;
	}
	//Heal All Players
	bool Button_isHealAllPlayers = false;
	bool updateButton_HealAllPlayers = false;
	void Button_HealAllPlayers() {
		Button_isHealAllPlayers = true;
	}
	//Kill All Players
	bool Button_isKillAllPlayers = false;
	bool updateButton_KillAllPlayers = false;
	void Button_KillAllPlayers() {
		Button_isKillAllPlayers = true;
	}
	//Freeze Players
	bool isFreezePlayers = false;
	bool updateCheckBox_FreezePlayers = false;
	bool isCheckBox_FreezePlayersFirstCall = true;
	void CheckBox_FreezePlayers(bool value) {
		if (!isCheckBox_FreezePlayersFirstCall) {
			isFreezePlayers = value;
			updateCheckBox_FreezePlayers = true;
		} else {
			isCheckBox_FreezePlayersFirstCall = false;
		}
	}
	//Kick Players
	bool Button_isKickPlayers = false;
	bool updateButton_KickPlayers = false;
	void Button_KickPlayers() {
		Button_isKickPlayers = true;
	}
	//Ban Players
	bool Button_isBanPlayers = false;
	bool updateButton_BanPlayers = false;
	void Button_BanPlayers() {
		Button_isBanPlayers = true;
	}

	//Collapse Teleport Players

	//X
	bool TeleportPlayers_isX = true;
	bool updateTeleportPlayers_CheckBox_X = false;
	bool isTeleportPlayers_CheckBox_XFirstCall = true;
	void TeleportPlayers_CheckBox_X(bool value) {
		if (!isTeleportPlayers_CheckBox_XFirstCall) {
			TeleportPlayers_isX = value;
			updateTeleportPlayers_CheckBox_X = true;
		} else {
			isTeleportPlayers_CheckBox_XFirstCall = false;
		}
	}
	//X
	int TeleportPlayers_InputValue_X = 1;
	bool updateTeleportPlayers_InputValue_X = false;
	void TeleportPlayers_SetInputValue_X(int value) {
		TeleportPlayers_InputValue_X = value;
		updateTeleportPlayers_InputValue_X = true;
	}
	//Y
	bool TeleportPlayers_isY = true;
	bool updateTeleportPlayers_CheckBox_Y = false;
	bool isTeleportPlayers_CheckBox_YFirstCall = true;
	void TeleportPlayers_CheckBox_Y(bool value) {
		if (!isTeleportPlayers_CheckBox_YFirstCall) {
			TeleportPlayers_isY = value;
			updateTeleportPlayers_CheckBox_Y = true;
		} else {
			isTeleportPlayers_CheckBox_YFirstCall = false;
		}
	}
	//Y
	int TeleportPlayers_InputValue_Y = 1;
	bool updateTeleportPlayers_InputValue_Y = false;
	void TeleportPlayers_SetInputValue_Y(int value) {
		TeleportPlayers_InputValue_Y = value;
		updateTeleportPlayers_InputValue_Y = true;
	}
	//Z
	bool TeleportPlayers_isZ = true;
	bool updateTeleportPlayers_CheckBox_Z = false;
	bool isTeleportPlayers_CheckBox_ZFirstCall = true;
	void TeleportPlayers_CheckBox_Z(bool value) {
		if (!isTeleportPlayers_CheckBox_ZFirstCall) {
			TeleportPlayers_isZ = value;
			updateTeleportPlayers_CheckBox_Z = true;
		} else {
			isTeleportPlayers_CheckBox_ZFirstCall = false;
		}
	}
	//Z
	int TeleportPlayers_InputValue_Z = 1;
	bool updateTeleportPlayers_InputValue_Z = false;
	void TeleportPlayers_SetInputValue_Z(int value) {
		TeleportPlayers_InputValue_Z = value;
		updateTeleportPlayers_InputValue_Z = true;
	}
	//Teleport Players
	bool TeleportPlayers_Button_isTeleportPlayers = false;
	bool updateTeleportPlayers_Button_TeleportPlayers = false;
	void TeleportPlayers_Button_TeleportPlayers() {
		TeleportPlayers_Button_isTeleportPlayers = true;
	}
	//Teleport Players To Me
	bool TeleportPlayers_Button_isTeleportPlayersToMe = false;
	bool updateTeleportPlayers_Button_TeleportPlayersToMe = false;
	void TeleportPlayers_Button_TeleportPlayersToMe() {
		TeleportPlayers_Button_isTeleportPlayersToMe = true;
	}
	//Teleport Players To Player
	std::string TeleportPlayers_InputText_TeleportPlayersToPlayer = "{[Default]}";
	bool updateTeleportPlayers_InputText_TeleportPlayersToPlayer = false;
	void TeleportPlayers_SetInputText_TeleportPlayersToPlayer(std::string value) {
		TeleportPlayers_InputText_TeleportPlayersToPlayer = value;
		updateTeleportPlayers_InputText_TeleportPlayersToPlayer = true;
	}
	//Teleport Players To Player
	bool TeleportPlayers_Button_isTeleportPlayersToPlayer = false;
	bool updateTeleportPlayers_Button_TeleportPlayersToPlayer = false;
	void TeleportPlayers_Button_TeleportPlayersToPlayer() {
		TeleportPlayers_Button_isTeleportPlayersToPlayer = true;
	}
	};
	ManipulateAllPlayersHacks ManipulateAllPlayers;

	struct ManipulatePlayerHacks {
	//Player Name
	std::string InputText_PlayerName = "{[Default]}";
	bool updateInputText_PlayerName = false;
	void SetInputText_PlayerName(std::string value) {
		InputText_PlayerName = value;
		updateInputText_PlayerName = true;
	}
	//Score
	int InputValue_Score = 1;
	bool updateInputValue_Score = false;
	void SetInputValue_Score(int value) {
		InputValue_Score = value;
		updateInputValue_Score = true;
	}
	//Set Score
	bool Button_isSetScore = false;
	bool updateButton_SetScore = false;
	void Button_SetScore() {
		Button_isSetScore = true;
	}
	//Kills
	int InputValue_Kills = 1;
	bool updateInputValue_Kills = false;
	void SetInputValue_Kills(int value) {
		InputValue_Kills = value;
		updateInputValue_Kills = true;
	}
	//Set Kills
	bool Button_isSetKills = false;
	bool updateButton_SetKills = false;
	void Button_SetKills() {
		Button_isSetKills = true;
	}
	//Size
	int SeekBar_Size = 1;
	bool updateSeekBar_Size = false;
	void SetSeekBar_Size(int value) {
		SeekBar_Size = value;
		updateSeekBar_Size = true;
	}
	//Negative Size
	bool isNegativeSize = false;
	bool updateToggle_NegativeSize = false;
	bool isToggle_NegativeSizeFirstCall = true;
	void Toggle_NegativeSize(bool value) {
		if (!isToggle_NegativeSizeFirstCall) {
			isNegativeSize = value;
			updateToggle_NegativeSize = true;
		} else {
			isToggle_NegativeSizeFirstCall = false;
		}
	}
	//Change Player Name
	std::string InputText_ChangePlayerName = "{[Default]}";
	bool updateInputText_ChangePlayerName = false;
	void SetInputText_ChangePlayerName(std::string value) {
		InputText_ChangePlayerName = value;
		updateInputText_ChangePlayerName = true;
	}
	//Change Player Team
	bool Button_isChangePlayerTeam = false;
	bool updateButton_ChangePlayerTeam = false;
	void Button_ChangePlayerTeam() {
		Button_isChangePlayerTeam = true;
	}
	//Heal Player
	bool Button_isHealPlayer = false;
	bool updateButton_HealPlayer = false;
	void Button_HealPlayer() {
		Button_isHealPlayer = true;
	}
	//Kill Player
	bool Button_isKillPlayer = false;
	bool updateButton_KillPlayer = false;
	void Button_KillPlayer() {
		Button_isKillPlayer = true;
	}
	//Freeze Player
	bool isFreezePlayer = false;
	bool updateCheckBox_FreezePlayer = false;
	bool isCheckBox_FreezePlayerFirstCall = true;
	void CheckBox_FreezePlayer(bool value) {
		if (!isCheckBox_FreezePlayerFirstCall) {
			isFreezePlayer = value;
			updateCheckBox_FreezePlayer = true;
		} else {
			isCheckBox_FreezePlayerFirstCall = false;
		}
	}
	//Kick Player
	bool Button_isKickPlayer = false;
	bool updateButton_KickPlayer = false;
	void Button_KickPlayer() {
		Button_isKickPlayer = true;
	}
	//Ban Player
	bool Button_isBanPlayer = false;
	bool updateButton_BanPlayer = false;
	void Button_BanPlayer() {
		Button_isBanPlayer = true;
	}

	//Collapse Teleport Player

	//X
	bool TeleportPlayer_isX = true;
	bool updateTeleportPlayer_CheckBox_X = false;
	bool isTeleportPlayer_CheckBox_XFirstCall = true;
	void TeleportPlayer_CheckBox_X(bool value) {
		if (!isTeleportPlayer_CheckBox_XFirstCall) {
			TeleportPlayer_isX = value;
			updateTeleportPlayer_CheckBox_X = true;
		} else {
			isTeleportPlayer_CheckBox_XFirstCall = false;
		}
	}
	//X
	int TeleportPlayer_InputValue_X = 1;
	bool updateTeleportPlayer_InputValue_X = false;
	void TeleportPlayer_SetInputValue_X(int value) {
		TeleportPlayer_InputValue_X = value;
		updateTeleportPlayer_InputValue_X = true;
	}
	//Y
	bool TeleportPlayer_isY = true;
	bool updateTeleportPlayer_CheckBox_Y = false;
	bool isTeleportPlayer_CheckBox_YFirstCall = true;
	void TeleportPlayer_CheckBox_Y(bool value) {
		if (!isTeleportPlayer_CheckBox_YFirstCall) {
			TeleportPlayer_isY = value;
			updateTeleportPlayer_CheckBox_Y = true;
		} else {
			isTeleportPlayer_CheckBox_YFirstCall = false;
		}
	}
	//Y
	int TeleportPlayer_InputValue_Y = 1;
	bool updateTeleportPlayer_InputValue_Y = false;
	void TeleportPlayer_SetInputValue_Y(int value) {
		TeleportPlayer_InputValue_Y = value;
		updateTeleportPlayer_InputValue_Y = true;
	}
	//Z
	bool TeleportPlayer_isZ = true;
	bool updateTeleportPlayer_CheckBox_Z = false;
	bool isTeleportPlayer_CheckBox_ZFirstCall = true;
	void TeleportPlayer_CheckBox_Z(bool value) {
		if (!isTeleportPlayer_CheckBox_ZFirstCall) {
			TeleportPlayer_isZ = value;
			updateTeleportPlayer_CheckBox_Z = true;
		} else {
			isTeleportPlayer_CheckBox_ZFirstCall = false;
		}
	}
	//Z
	int TeleportPlayer_InputValue_Z = 1;
	bool updateTeleportPlayer_InputValue_Z = false;
	void TeleportPlayer_SetInputValue_Z(int value) {
		TeleportPlayer_InputValue_Z = value;
		updateTeleportPlayer_InputValue_Z = true;
	}
	//Teleport Player
	bool TeleportPlayer_Button_isTeleportPlayer = false;
	bool updateTeleportPlayer_Button_TeleportPlayer = false;
	void TeleportPlayer_Button_TeleportPlayer() {
		TeleportPlayer_Button_isTeleportPlayer = true;
	}
	//Teleport Player To Me
	bool TeleportPlayer_Button_isTeleportPlayerToMe = false;
	bool updateTeleportPlayer_Button_TeleportPlayerToMe = false;
	void TeleportPlayer_Button_TeleportPlayerToMe() {
		TeleportPlayer_Button_isTeleportPlayerToMe = true;
	}
	//Teleport Player To Player
	std::string TeleportPlayer_InputText_TeleportPlayerToPlayer = "{[Default]}";
	bool updateTeleportPlayer_InputText_TeleportPlayerToPlayer = false;
	void TeleportPlayer_SetInputText_TeleportPlayerToPlayer(std::string value) {
		TeleportPlayer_InputText_TeleportPlayerToPlayer = value;
		updateTeleportPlayer_InputText_TeleportPlayerToPlayer = true;
	}
	//Teleport Player To Player
	bool TeleportPlayer_Button_isTeleportPlayerToPlayer = false;
	bool updateTeleportPlayer_Button_TeleportPlayerToPlayer = false;
	void TeleportPlayer_Button_TeleportPlayerToPlayer() {
		TeleportPlayer_Button_isTeleportPlayerToPlayer = true;
	}
	//Teleport To Closest Unoccupied Vehicle
	bool TeleportPlayer_Button_isTeleportToClosestUnoccupiedVehicle = false;
	bool updateTeleportPlayer_Button_TeleportToClosestUnoccupiedVehicle = false;
	void TeleportPlayer_Button_TeleportToClosestUnoccupiedVehicle() {
		TeleportPlayer_Button_isTeleportToClosestUnoccupiedVehicle = true;
	}
	};
	ManipulatePlayerHacks ManipulatePlayer;

	struct KillPlayersHacks {
	//Telekill
	bool isTelekill = false;
	bool updateToggle_Telekill = false;
	bool isToggle_TelekillFirstCall = true;
	void Toggle_Telekill(bool value) {
		if (!isToggle_TelekillFirstCall) {
			isTelekill = value;
			updateToggle_Telekill = true;
		} else {
			isToggle_TelekillFirstCall = false;
		}
	}
	//Masskill
	bool isMasskill = false;
	bool updateToggle_Masskill = false;
	bool isToggle_MasskillFirstCall = true;
	void Toggle_Masskill(bool value) {
		if (!isToggle_MasskillFirstCall) {
			isMasskill = value;
			updateToggle_Masskill = true;
		} else {
			isToggle_MasskillFirstCall = false;
		}
	}
	//Kill All
	bool Button_isKillAll = false;
	bool updateButton_KillAll = false;
	void Button_KillAll() {
		Button_isKillAll = true;
	}
	//Spam Kill All
	bool isSpamKillAll = false;
	bool updateToggle_SpamKillAll = false;
	bool isToggle_SpamKillAllFirstCall = true;
	void Toggle_SpamKillAll(bool value) {
		if (!isToggle_SpamKillAllFirstCall) {
			isSpamKillAll = value;
			updateToggle_SpamKillAll = true;
		} else {
			isToggle_SpamKillAllFirstCall = false;
		}
	}
	//Player To Kill (Case Sensitive)
	std::string InputText_PlayerToKillCaseSensitive = "{[Default]}";
	bool updateInputText_PlayerToKillCaseSensitive = false;
	void SetInputText_PlayerToKillCaseSensitive(std::string value) {
		InputText_PlayerToKillCaseSensitive = value;
		updateInputText_PlayerToKillCaseSensitive = true;
	}
	//Kill Player
	bool Button_isKillPlayer = false;
	bool updateButton_KillPlayer = false;
	void Button_KillPlayer() {
		Button_isKillPlayer = true;
	}
	//Spam Kill Player
	bool isSpamKillPlayer = false;
	bool updateToggle_SpamKillPlayer = false;
	bool isToggle_SpamKillPlayerFirstCall = true;
	void Toggle_SpamKillPlayer(bool value) {
		if (!isToggle_SpamKillPlayerFirstCall) {
			isSpamKillPlayer = value;
			updateToggle_SpamKillPlayer = true;
		} else {
			isToggle_SpamKillPlayerFirstCall = false;
		}
	}

	//Collapse Spam Kill Delay

	//Minutes
	int SpamKillDelay_SeekBar_Minutes = 1;
	bool updateSpamKillDelay_SeekBar_Minutes = false;
	void SpamKillDelay_SetSeekBar_Minutes(int value) {
		SpamKillDelay_SeekBar_Minutes = value;
		updateSpamKillDelay_SeekBar_Minutes = true;
	}
	//Seconds
	int SpamKillDelay_SeekBar_Seconds = 1;
	bool updateSpamKillDelay_SeekBar_Seconds = false;
	void SpamKillDelay_SetSeekBar_Seconds(int value) {
		SpamKillDelay_SeekBar_Seconds = value;
		updateSpamKillDelay_SeekBar_Seconds = true;
	}
	//Miliseconds
	int SpamKillDelay_SeekBar_Miliseconds = 1;
	bool updateSpamKillDelay_SeekBar_Miliseconds = false;
	void SpamKillDelay_SetSeekBar_Miliseconds(int value) {
		SpamKillDelay_SeekBar_Miliseconds = value;
		updateSpamKillDelay_SeekBar_Miliseconds = true;
	}
	};
	KillPlayersHacks KillPlayers;

	struct MiscellaneousHacks {
	//Antiban
	bool isAntiban = true;
	bool updateCheckBox_Antiban = false;
	bool isCheckBox_AntibanFirstCall = true;
	void CheckBox_Antiban(bool value) {
		if (!isCheckBox_AntibanFirstCall) {
			isAntiban = value;
			updateCheckBox_Antiban = true;
		} else {
			isCheckBox_AntibanFirstCall = false;
		}
	}
	//Bypass Force Update
	bool isBypassForceUpdate = true;
	bool updateCheckBox_BypassForceUpdate = false;
	bool isCheckBox_BypassForceUpdateFirstCall = true;
	void CheckBox_BypassForceUpdate(bool value) {
		if (!isCheckBox_BypassForceUpdateFirstCall) {
			isBypassForceUpdate = value;
			updateCheckBox_BypassForceUpdate = true;
		} else {
			isCheckBox_BypassForceUpdateFirstCall = false;
		}
	}
	//No Ads
	bool isNoAds = true;
	bool updateCheckBox_NoAds = false;
	bool isCheckBox_NoAdsFirstCall = true;
	void CheckBox_NoAds(bool value) {
		if (!isCheckBox_NoAdsFirstCall) {
			isNoAds = value;
			updateCheckBox_NoAds = true;
		} else {
			isCheckBox_NoAdsFirstCall = false;
		}
	}
	//60 FPS
	bool is60Fps = false;
	bool updateCheckBox_60Fps = false;
	bool isCheckBox_60FpsFirstCall = true;
	void CheckBox_60Fps(bool value) {
		if (!isCheckBox_60FpsFirstCall) {
			is60Fps = value;
			updateCheckBox_60Fps = true;
		} else {
			isCheckBox_60FpsFirstCall = false;
		}
	}
	//Speedhack
	int InputValue_Speedhack = 1;
	bool updateInputValue_Speedhack = false;
	void SetInputValue_Speedhack(int value) {
		InputValue_Speedhack = value;
		updateInputValue_Speedhack = true;
	}
	//Speedhack
	bool isSpeedhack = false;
	bool updateToggle_Speedhack = false;
	bool isToggle_SpeedhackFirstCall = true;
	void Toggle_Speedhack(bool value) {
		if (!isToggle_SpeedhackFirstCall) {
			isSpeedhack = value;
			updateToggle_Speedhack = true;
		} else {
			isToggle_SpeedhackFirstCall = false;
		}
	}

	//Collapse Ban Player

	//Player ID
	int BanPlayer_InputValue_PlayerId = 1;
	bool updateBanPlayer_InputValue_PlayerId = false;
	void BanPlayer_SetInputValue_PlayerId(int value) {
		BanPlayer_InputValue_PlayerId = value;
		updateBanPlayer_InputValue_PlayerId = true;
	}
	//Ban Player
	bool BanPlayer_Button_isBanPlayer = false;
	bool updateBanPlayer_Button_BanPlayer = false;
	void BanPlayer_Button_BanPlayer() {
		BanPlayer_Button_isBanPlayer = true;
	}
	};
	MiscellaneousHacks Miscellaneous;
}