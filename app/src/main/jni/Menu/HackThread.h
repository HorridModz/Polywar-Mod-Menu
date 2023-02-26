//Hack thread

void *hack_thread(void *) {
    LOGI(OBFUSCATE("Hack thread pthread created"));

    //Check if target lib is loaded
    do {
        sleep(1);
    } while (!isLibraryLoaded("libil2cpp.so"));

    //Anti-lib rename
    //
    //do {
    //    sleep(1);
    //} while (!isLibraryLoaded("libil2cpp.so"));

    LOGI(OBFUSCATE("%s has been loaded"), (const char *) targetLibName);
    hackthreaddone = 1;

    //Initial Hooks and Patches

    //String.CreateString(char* value)
    CreateMonoString = (monostring *(*)(const char *))getAbsoluteAddress("libil2cpp.so", Offsets::Methods.String_CreateString);

    //String.ToInt32
    MonoStringToInt = (int (*)(monostring *))getAbsoluteAddress("libil2cpp.so", Offsets::Methods.String_ToInt32);

    //UnityEngine.Networking.UnityWebRequest.Get
    UnityWebRequest_Get = (ignoretype (*)(monostring *)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.UnityEngine_UnityWebRequest_Get);

    //UnityEngine.Networking.UnityWebRequest.SendWebRequest
    UnityWebRequest_SendWebRequest = (ignoretype (*)()) getAbsoluteAddress("libil2cpp.so",Offsets::Methods.UnityEngine_UnityWebRequest_SendWebRequest);

    //PlayerScript.Update
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerScript_Update), PlayerScript_Update, old_PlayerScript_Update);

    //PlayerScript.ChatMessage
    ChatMessage = (void (*)(void *, monostring *)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.PlayerScript_ChatMessage);

    //PlayerScript.ChatPlayerMessage
    ChatPlayerMessage = (void (*)(void *, monostring *, bool)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.PlayerScript_ChatPlayerMessage);

    //PlayerScript.Teleport
    Teleport = (void (*)(void *, Vector3, Vector3)) getAbsoluteAddress("libil2cpp.so",  Offsets::Methods.PlayerScript_Teleport);

    //PlayerScript.get_throwingGrenade
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerScript_get_throwingGrenade), PlayerScript_get_throwingGrenade, old_PlayerScript_get_throwingGrenade);

    //PlayerScript.get_playerName
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerScript_get_playerName), PlayerScript_get_playerName, old_PlayerScript_get_playerName);

    //PlayerScript.Respawn
    Respawn = (void (*)(void *)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.PlayerScript_Respawn);

    //PlayerScript._Respawn
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerScript_Respawn_Internal), PlayerScript_Respawn_Internal,
             old_PlayerScript_Respawn_Internal);

    //PlayerScript.Die
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerScript_Die), PlayerScript_Die, old_PlayerScript_Die);

    //WeaponScript.Update
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.WeaponScript_Update), WeaponScript_Update, old_WeaponScript_Update);

    //WeaponScript.CanShoot
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.WeaponScript_canShoot), WeaponScript_canShoot, old_WeaponScript_canShoot);

    //WeaponScript.HideWeapon
    HideWeapon = (void (*)(void *, bool)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.WeaponScript_HideWeapon);

    //WeaponScript.UseGrenade
    UseGrenade = (void (*)(void *)) getAbsoluteAddress("libil2cpp.so", Offsets::Methods.WeaponScript_UseGrenade);

    //WeaponController..ctor
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.WeaponController_ctor), WeaponController_ctor, old_WeaponController_ctor);

    //WeaponItem.Start
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.WeaponItem_Start), WeaponItem_Start, old_WeaponItem_Start);

    //PlayerController.Update
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PlayerController_Update), PlayerController_Update, old_PlayerController_Update);

    //UnityEngine.CharacterController.get_detectCollisions
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.UnityEngine_CharacterController_get_detectCollisions), CharacterController_DetectCollisions,
             old_CharacterController_DetectCollisions);

    //FPSCamera.Update
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.FPSCamera_Update), FPSCamera_Update, old_FPSCamera_Update);

    //FPSCamera.Recoil
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.FPSCamera_Recoil), FPSCamera_Recoil, old_FPSCamera_Recoil);

    //FieldOfViewIncreaseLPFP.Update
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.FieldOfViewIncreaseLPFP_Update), FieldOfViewIncreaseLPFP_Update, old_FieldOfViewIncreaseLPFP_Update);

    //XADS.Play
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.XAds_Play), XAds_Play, old_XAds_Play);

    //PriceValue.get_price
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.PriceValue_get_price), PriceValue_get_price, old_PriceValue_get_price);

    //GameParamsScript.get_isVIP
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.GameParamsScript_get_isVIP), GameParamsScript_get_isVIP, old_GameParamsScript_get_isVIP);

    //GameParamsScript.get_isBattlepassBought
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.GameParamsScript_get_isBattlepassBought), GameParamsScript_get_isBattlepassBought, old_GameParamsScript_get_isBattlepassBought);

    //GameParamsScript.BanPlayer
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.GameParamsScript_BanPlayer), GameParamsScript_BanPlayer, old_GameParamsScript_BanPlayer);

    //SocialNetBase.BuyVIP
    BuyVIP = (void (*)(void *, int)) getAbsoluteAddress("libil2cpp.so",  Offsets::Methods.SocialNetBase_BuyVIP);

    //BattleControllerScript.get_isSpectator
    HOOK_LIB("libil2cpp.so", Offset2String(Offsets::Methods.BattleControllerScript_get_isSpectator), BattleControllerScript_get_isSpectator, old_BattleControllerScript_get_isSpectator);

    hackthreaddone = 2;
	return NULL;
}

void starthackthread() {
// we will run our hacks in a new thread so our while loop doesn't block process main thread
pthread_t ptid;
pthread_create(&ptid, NULL, hack_thread, NULL);
}

int starthackthreadworkaround() {
    // For some reason, I get an error if I try to call starthackthread() by itself.
    // However, if I make a middle-man function that calls starthackthread() and returns a value,
    // then store and immediately dispose of this value, it works.
    starthackthread();
    LOGD("Started hack thread");
    return 0;
}