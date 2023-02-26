#if defined(__aarch64__)
bool is64bit = true;
#else
bool is64bit = false;
#endif
#define targetLibName OBFUSCATE("libil2cpp.so")
#include <chrono>
#include <thread>
#include <list>
#include <vector>
#include <string.h>
#include <cstring>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#define __STDC_FORMAT_MACROS
#include <inttypes.h>
#include "Includes/Logger.h"
#include "Includes/obfuscate.h"
#include "Includes/Offset2String.hpp"
#include "Includes/IgnoreType.hpp"
#include "Includes/Vector3.h"
#include "Includes/oldmonostring.h"
#include "Includes/MonoString.h"
#include "Includes/monoarray.h"
#include "Includes/ObscuredTypes.h"
#include "Includes/Utils.h"
#include "KittyMemory/MemoryPatch.h"
#include "Includes/Macros.h"
std::string VERSION = "1.0.0";
bool menuauthorized = false;
int hackthreaddone = 0;
bool updatehooksready = true;
std::string test = "";
//#include "ByNameModding/BNM.cpp"
////#include "ByNameModding/BNM.hpp"
//#include "Hacks/oldoffsets.h"
#if defined(__aarch64__)
#include "Hacks/Offsets64bit.h"
#else
#include "Hacks/Offsets32bit.h"
#endif
#include "Hacks/Features.hpp"
#include "Hacks/FeatureDefaults.hpp"
// For some reason, I get an error if I try to call starthackthread() by itself.
// However, if I make a middle-man function that calls starthackthread() and returns a value,
// then store and immediately dispose of this value, it works.
int setfeaturedefaultsworkaround_ = setfeaturedefaultsworkaround();
#include "Menu/Hooks.h"
#include "Menu/HackThread.h"
// For some reason, I get an error if I try to call starthackthread() by itself.
// However, if I make a middle-man function that calls starthackthread() and returns a value,
// then store and immediately dispose of this value, it works.
int starthackthreadworkaround_ = starthackthreadworkaround();
#include "Menu/Setup.h"


// Do not change or translate the first text unless you know what you are doing
// Assigning feature numbers is optional. Without it, it will automatically count for you, starting from 0
// Assigned feature numbers can be like any numbers 1,3,200,10... instead in order 0,1,2,3,4,5...
// ButtonLink, Category, RichTextView and RichWebView is not counted. They can't have feature number assigned
// Toggle, ButtonOnOff and CheckBox can be switched on by default, if you add True_. Example: CheckBox_True_The Check Box
// To learn HTML, go to this page: https://www.w3schools.com/

jobjectArray GetFeatureList(JNIEnv *env, jobject context) {
    jobjectArray ret;

    const char *features[] = {
            OBFUSCATE("RichTextView_Polywar V1.1 Mod Menu By HorridModz<br /><font color='gray'><b>Discord: User123456789#6424</b></font>"),
            OBFUSCATE("RichTextView_<font color='red'><b>Warning:</b></font><br />I do not want to cause too much damage to the game devs or other players. If this mod menu is abused too much, I will disable it so the game is not ruined."),
            OBFUSCATE("Category_Currency"),
            OBFUSCATE("Collapse_VIP"),
            OBFUSCATE("0_CollapseAdd_Toggle_VIP"), //Done
            OBFUSCATE("1_CollapseAdd_Button_Buy VIP (Permanent)"), //Done
            OBFUSCATE("Category_Store"),
            OBFUSCATE("2_Toggle_Free Shopping"), //Done
            OBFUSCATE("3_Toggle_Free In-app Purchases"), //Not Done
            OBFUSCATE("Category_Battle Pass"),
            OBFUSCATE("4_Button_Unlock Premium Battle Pass (Temporary)"), //Done
            OBFUSCATE("5_Button_Reset Battle Pass Rewards"),
            OBFUSCATE("6_Toggle_Infinite Battle Pass Rewards"), //Spam collect battle pass rewards - they never stop letting you collect them
            OBFUSCATE("Collapse_Battle Pass Level"),
            OBFUSCATE("7_CollapseAdd_Button_Level Up Battle Pass"),
            OBFUSCATE("8_CollapseAdd_SeekBar_Battle Pass Level_0_80"),
            OBFUSCATE("9_CollapseAdd_Button_Set Battle Pass Level"),
            OBFUSCATE("Collapse_Battle Pass EXP"),
            OBFUSCATE("10_CollapseAdd_SeekBar_Battle Pass EXP_0_100000"),
            OBFUSCATE("11_CollapseAdd_Button_Set Battle Pass EXP"),
            OBFUSCATE("12_CollapseAdd_Button_Add Battle Pass EXP"),
            OBFUSCATE("13_CollapseAdd_Button_Remove Battle Pass EXP"),
			OBFUSCATE("14_Button_Claim All Battle Pass Rewards"), //Claim all unlocked battle pass rewards
			OBFUSCATE("Category_Tasks"),
            OBFUSCATE("Category_Items"),
            OBFUSCATE("Collapse_Clothes"),
            OBFUSCATE("Collapse_Skins"),
            OBFUSCATE("Collapse_Weapons"),
			OBFUSCATE("15_CollapseAdd_Button_Spoof All Weapons"),
			OBFUSCATE("16_CollapseAdd_Button_Unlock All Weapons (Permanent)"),
			OBFUSCATE("17_CollapseAdd_InputValue_Weapon ID"),
			OBFUSCATE("18_CollapseAdd_Button_Spoof Weapon"),
			OBFUSCATE("19_CollapseAdd_Button_Unlock Weapon"),
			OBFUSCATE("Category_Clans"),
            OBFUSCATE("Category_Player"),
			OBFUSCATE("20_InputText_ID Spoofer"),
            OBFUSCATE("21_Toggle_Godmode V1"), //Done
            OBFUSCATE("22_Toggle_Health"),
			OBFUSCATE("23_SeekBar_Health_0_1000"),
			OBFUSCATE("24_Toggle_Max Health"),
			OBFUSCATE("25_SeekBar_Max Health_0_1000"),
			OBFUSCATE("26_Toggle_Armor_0_1000"),
			OBFUSCATE("27_SeekBar_Armor_0_1000"),
			OBFUSCATE("28_Toggle_Max Armor"),
			OBFUSCATE("29_SeekBar_Max Armor_0_1000"),
            OBFUSCATE("Collapse_Regeneration"),
            OBFUSCATE("30_CollapseAdd_Toggle_Health Regen"), //if false set regen to 0
            OBFUSCATE("31_CollapseAdd_SeekBar_Health Regen_0_1000"),
            OBFUSCATE("32_CollapseAdd_Toggle_Armor Regen"), //if false set regen to 0
            OBFUSCATE("33_CollapseAdd_SeekBar_Armor Regen_0_3300"),
            OBFUSCATE("34_CollapseAdd_SeekBar_Regen Interval (Seconds)_0_60"), // PlayerConfig.regenDelay,  PlayerConfig.regenfrequencey
            OBFUSCATE("35_CollapseAdd_SeekBar_Regen Interval (Miliseconds)_0_3500"), // PlayerConfig.regenDelay,  PlayerConfig.regenfrequencey
            OBFUSCATE("36_Button_Heal"), //Done
            OBFUSCATE("37_Toggle_Thorns"), //PlayerScript.ApplyDamage
            OBFUSCATE("38_SeekBar_Thorns Damage_0_1000"), //PlayerScript.ApplyDamage // when enemy hits you they take set amount of damage back
            OBFUSCATE("39_Toggle_Reflect Damage"), //PlayerScript.ApplyDamage // when you are shot, the enemy that shot you takes damage instead of you
            OBFUSCATE("Collapse_Force Field"),
            OBFUSCATE("40_CollapseAdd_SeekBar_Radius_1_1000"),
            OBFUSCATE("41_CollapseAdd_SeekBar_Damage_0_1000"), //PlayerScript.ApplyDamage
            OBFUSCATE("42_CollapseAdd_SeekBar_Heal_0_1000"), //PlayerScript.ApplyDamage
            OBFUSCATE("43_CollapseAdd_CheckBox_Enable Force Field"),
            OBFUSCATE("44_Toggle_Danger Zone Invincibility"),
            OBFUSCATE("45_Button_Switch Team"), //Done
            OBFUSCATE("46_CheckBox_No Team"), //Done
            OBFUSCATE("47_CheckBox_Both Teams"),
            OBFUSCATE("48_Toggle_No Item Cooldown"),
			OBFUSCATE("49_Toggle_Giant"),
			OBFUSCATE("50_Toggle_Tiny"),
            OBFUSCATE("51_SeekBar_Size_1_1000"),
			OBFUSCATE("52_Toggle_Negative Size"), //Instead of multiplication, division: 2 becomes 0.5, 3 becomes 0.33, 4 becomes 0.25, etc.
            OBFUSCATE("53_Toggle_Spectator Mode"), //Done
            OBFUSCATE("54_InputText_Change Name"), //Done
            OBFUSCATE("Category_Weapons"),
			OBFUSCATE("55_Toggle_Spoof Weapon"), //Nor Done
			OBFUSCATE("56_InputValue_Original Weapon ID"), //Not Done
			OBFUSCATE("57_InputValue_Spoofed Weapon ID"), //Not Done
            OBFUSCATE("58_Toggle_One Hit Kill"), //Done
            OBFUSCATE("59_Toggle_Damage"), //Done
            OBFUSCATE("60_SeekBar_Damage_0_1000"), //Done
            OBFUSCATE("61_Toggle_Rapid Fire"), //Done
            OBFUSCATE("62_Toggle_Fire Rate"),
            OBFUSCATE("63_SeekBar_Fire Rate_1_1000"),
            OBFUSCATE("64_Toggle_Auto Fire"),
            OBFUSCATE("65_Toggle_Ammo"), //bullets, clips
            OBFUSCATE("66_SeekBar_Ammo_1_1000"), //bullets, clips
            OBFUSCATE("67_Toggle_Clip Size"), //Done
            OBFUSCATE("68_SeekBar_Clip Size_1_1000"), //Done
			OBFUSCATE("69_Toggle_Area Damage"), //Not Done
			OBFUSCATE("70_SeekBar_Area Damage Radius_1_1000"), //Not Done
			OBFUSCATE("71_Toggle_Instant Reload"), //Not Done
			OBFUSCATE("72_Toggle_Reload Speed"), //Not Done
			OBFUSCATE("73_SeekBar_Reload Speed_1_1000"), //Not Done
            OBFUSCATE("74_Toggle_Auto Reload"), //Not Done
			OBFUSCATE("75_Button_Reload"), //Not Done
            OBFUSCATE("76_Toggle_Accuracy"),  //Done
			OBFUSCATE("77_Toggle_Instant Projectile Speed"), //Not Done
			OBFUSCATE("78_Toggle_Projectile Speed"), //Not Done
			OBFUSCATE("79_SeekBar_Projectile Speed_1_10000"), //Not Done
            OBFUSCATE("80_Toggle_No Shoot Delay"), //Done
            OBFUSCATE("81_Toggle_Shoot Through Walls"),
            OBFUSCATE("82_Toggle_Silent"), //Done
            OBFUSCATE("83_Toggle_No Recoil"), //Done
            OBFUSCATE("84_Toggle_No Spread"), //Done
            OBFUSCATE("85_Toggle_Hide Weapon"), //Done
            OBFUSCATE("86_Toggle_Scope Zoom"),
            OBFUSCATE("87_SeekBar_Scope Zoom_1_100"),
			OBFUSCATE("88_Toggle_Chams"), //See players through walls
            OBFUSCATE("Collapse_Bullet Type"), //Not Done
            OBFUSCATE("89_CollapseAdd_CheckBox_Shoot Lasers"), //Done
            OBFUSCATE("90_Toggle_No Switch Delay"), //Not Done
            OBFUSCATE("Category_Grenades"),
            OBFUSCATE("91_Toggle_Infinite Grenades"), //Done
            OBFUSCATE("92_Toggle_Grenade Spam"),
            OBFUSCATE("93_Toggle_No Grenade Animation"), //Done
            OBFUSCATE("Category_Aimbot"),
            OBFUSCATE("94_Toggle_Aimbot"),
            OBFUSCATE("95_Toggle_Counterintuitive Aimbot"),
            OBFUSCATE("96_Toggle_OP Aim Assist"), //PlayerConfig.autoaimForce
            OBFUSCATE("97_Toggle_Auto Fire"),
            OBFUSCATE("98_Toggle_Silent Aim"),
            OBFUSCATE("99_SeekBar_Silent Aim Radius_1_10000"),
            OBFUSCATE("Category_ESP"),
			OBFUSCATE("Collapse_Players"),
            OBFUSCATE("100_CollapseAdd_Toggle_Player Lines"),
            OBFUSCATE("101_CollapseAdd_Toggle_Player Boxes"),
            OBFUSCATE("102_CollapseAdd_Toggle_Player Health Bars"), //Display health and armor bars over player heads
            OBFUSCATE("103_CollapseAdd_Toggle_Player List"),
			OBFUSCATE("104_CollapseAdd_CheckBox_Include Player Positions In Player List"),
			OBFUSCATE("105_CollapseAdd_CheckBox_True_Include Bots"),
			OBFUSCATE("106_CollapseAdd_CheckBox_True_Show \"Bot\" Tag Over Heads Of Bots"),
			OBFUSCATE("107_CollapseAdd_CheckBox_Show Bots in Different Color"),
			OBFUSCATE("108_CollapseAdd_CheckBox_True_All Players"),
			OBFUSCATE("109_CollapseAdd_CheckBox_Only Players Named"),
			OBFUSCATE("110_CollapseAdd_InputText_Only Players Named"),
			OBFUSCATE("Collapse_Vehicles"),
            OBFUSCATE("111_CollapseAdd_Toggle_Vehicle Lines"),
            OBFUSCATE("112_CollapseAdd_Toggle_Vehicle Boxes"),
            OBFUSCATE("113_CollapseAdd_Toggle_Vehicle Health Bars"), //Display health and armor bars over vehicles
            OBFUSCATE("114_CollapseAdd_Toggle_Show \"Occupied\" Tag Over Occupied Vehicles"),
            OBFUSCATE("Category_Vision"),
            OBFUSCATE("Collapse_Perspective"),
            OBFUSCATE("115_CollapseAdd_CheckBox_First Person"),
            OBFUSCATE("116_CollapseAdd_CheckBox_Third Person"),
            OBFUSCATE("117_Toggle_Custom FOV"),
            OBFUSCATE("118_SeekBar_FOV_1_100"),
			OBFUSCATE("119_SeekBar_Crosshair Scale_1_10"),
            OBFUSCATE("120_Toggle_Disable Fog"), //PlayerScript.fogMode
			OBFUSCATE("121_Toggle_Freeze Camera"), //FPSCamera.Update
			OBFUSCATE("122_Toggle_Chams"), //See players through walls
            OBFUSCATE("123_Toggle_Xray"), //Don't render walls
            OBFUSCATE("Category_Effects"),
            OBFUSCATE("124_Toggle_Anti-Freeze"),
            OBFUSCATE("125_Toggle_Anti Camera Shake"), //PlayerScript.ShakeCamera
            OBFUSCATE("Category_Movement"),
            OBFUSCATE("126_Toggle_Fly"), // (NOT IMPLEMENTED)
			OBFUSCATE("127_Toggle_Hover"), // (NOT IMPLEMENTED)
			OBFUSCATE("128_InputText_Hover At Y_0_1000"), // (NOT IMPLEMENTED)
            OBFUSCATE("129_Toggle_Infinite Jump"), // (NOT IMPLEMENTED) PlayerController.isGrounded
            OBFUSCATE("130_Toggle_Jump Height"), // (NOT IMPLEMENTED) PlayerController.jumpForce
            OBFUSCATE("131_SeekBar_Jump Height_0_1000"), // (NOT IMPLEMENTED) PlayerController.jumpForce
            OBFUSCATE("132_Toggle_Jump Speed"), // (NOT IMPLEMENTED) PlayerController.jumpSpeed
            OBFUSCATE("133_SeekBar_Jump Speed_0_1000"), // (NOT IMPLEMENTED) PlayerController.jumpSpeed
            OBFUSCATE("134_Toggle_Hover after Jump"), // (NOT IMPLEMENTED)
			OBFUSCATE("135_SeekBar_Hover Length (Seconds)_0_60"), // (NOT IMPLEMENTED)
			OBFUSCATE("136_SeekBar_Hover Length (Miliseconds)_0_1000"), // (NOT IMPLEMENTED)
            OBFUSCATE("137_Toggle_Inverted Jump"), //Jumping makes you go down instead of up!
            OBFUSCATE("138_Toggle_Bunny Hop"),
            OBFUSCATE("139_Toggle_Walk Speed"), // (NOT IMPLEMENTED) PlayerController.walkSpeed
            OBFUSCATE("140_SeekBar_Walk Speed_0_500"), // (NOT IMPLEMENTED) PlayerController.walkSpeed
            OBFUSCATE("141_Toggle_Run Speed"), // (NOT IMPLEMENTED) PlayerController.runSpeed
            OBFUSCATE("142_SeekBar_Run Speed_0_500"), // (NOT IMPLEMENTED) PlayerController.runSpeed
            OBFUSCATE("143_Toggle_Sprint Speed"), // (NOT IMPLEMENTED) PlayerController.sprintSpeed
            OBFUSCATE("144_SeekBar_Sprint Speed_0_500"), // (NOT IMPLEMENTED) PlayerController.sprintSpeed
            OBFUSCATE("145_Toggle_Auto Sprint"), // (NOT IMPLEMENTED) PlayerScript._sprint
            OBFUSCATE("146_Toggle_No Clip"), //Done
            OBFUSCATE("147_Toggle_Remove All Hitboxes"), //(NOT IMPLEMENTED) UnityEngine.Collider.get_enabled
			OBFUSCATE("148_Toggle_Freeze Myself"), // (NOT IMPLEMENTED)
            OBFUSCATE("Collapse_Gravity"),
            OBFUSCATE("149_CollapseAdd_Toggle_Gravity Strength"),
            OBFUSCATE("150_CollapseAdd_SeekBar_Gravity_0_1000"),
            OBFUSCATE("151_CollapseAdd_Toggle_Inverted Gravity"),
            OBFUSCATE("152_Toggle_Underwater"),
			OBFUSCATE("Collapse_Teleport"), //Done
            OBFUSCATE("153_CollapseAdd_CheckBox_True_X"), //Done
			OBFUSCATE("154_CollapseAdd_InputValue_X"), //Done
			OBFUSCATE("155_CollapseAdd_CheckBox_True_Y"), //Done
            OBFUSCATE("156_CollapseAdd_InputValue_Y"), //Done
			OBFUSCATE("157_CollapseAdd_CheckBox_True_Z"), //Done
            OBFUSCATE("158_CollapseAdd_InputValue_Z"), //Done
            OBFUSCATE("159_CollapseAdd_Button_Teleport"), //Done
			OBFUSCATE("160_CollapseAdd_InputText_Teleport To Player"), //Done
			OBFUSCATE("161_CollapseAdd_Button_Teleport To Player"), //Done
			OBFUSCATE("162_CollapseAdd_Button_Teleport To Closest Unoccupied Vehicle"), //Done
			OBFUSCATE("163_Button_Get My Current Position"), //Chats current position ("X, Y, Z" format) in chat. Also toasts it.
            OBFUSCATE("Category_Respawning"),
            OBFUSCATE("164_Button_Respawn"), //Done
            OBFUSCATE("165_Toggle_Immediate Respawn"), //PlayerScript.autoRespawn,  PlayerConfig.respawnTime
            OBFUSCATE("166_Toggle_Respawn In Place"), //Done
            OBFUSCATE("167_Toggle_Don't Respawn"), //Done
            OBFUSCATE("Collapse_Custom Respawn Positon"), //Done
            OBFUSCATE("168_CollapseAdd_InputValue_X"), //Done
            OBFUSCATE("169_CollapseAdd_InputValue_Y"), //Done
            OBFUSCATE("170_CollapseAdd_InputValue_Z"), //Done
            OBFUSCATE("171_CollapseAdd_CheckBox_Custom Respawn Position"), 
			OBFUSCATE("172_CollapseAdd_CheckBox_Respawn Next To Player"), //Done
			OBFUSCATE("173_CollapseAdd_InputText_Respawn Next To Player"), 
            OBFUSCATE("Category_Vehicles"),
            OBFUSCATE("174_Toggle_Vehicle Infinite Health"), //TransportScript.Health or TransportScropt.transportHealth
            OBFUSCATE("175_Toggle_Vehicle Godmode"), //TransportScript.Die
            OBFUSCATE("176_Button_Eject From Vehicle"),
			OBFUSCATE("177_Button_Eject All Vehicles"),
			OBFUSCATE("178_Button_Destroy All Vehicles"),
			OBFUSCATE("Collapse_Teleport My Vehicle"),
            OBFUSCATE("179_CollapseAdd_InputValue_X"),
			OBFUSCATE("180_CollapseAdd_CheckBox_True_Y"),
            OBFUSCATE("181_CollapseAdd_InputValue_Y"),
			OBFUSCATE("182_CollapseAdd_CheckBox_True_Z"),
            OBFUSCATE("183_CollapseAdd_InputValue_Z"),
            OBFUSCATE("184_CollapseAdd_Button_Teleport Vehicle"),
			OBFUSCATE("185_CollapseAdd_Button_Teleport Vehicle To Me"),
			OBFUSCATE("186_CollapseAdd_InputText_Teleport Vehicle To Player"),
			OBFUSCATE("187_CollapseAdd_Button_Teleport Vehicle To Player"),
            OBFUSCATE("Collapse_Spawn Vehicle"),
			OBFUSCATE("188_CollapseAdd_CheckBox_True_Custom X"), //Defaults to my position
            OBFUSCATE("189_CollapseAdd_InputValue_X"),
			OBFUSCATE("190_CollapseAdd_CheckBox_True_Custom Y"), //Defaults to my position
            OBFUSCATE("191_CollapseAdd_InputValue_Y"),
			OBFUSCATE("192_CollapseAdd_CheckBox_True_Custom Z"), //Defaults to my position
            OBFUSCATE("193_CollapseAdd_InputValue_Z"),
			OBFUSCATE("194_CollapseAdd_Button_Spawn Vehicle"),
			OBFUSCATE("195_CollapseAdd_Button_Spawn Vehicle Next To Me"),
			OBFUSCATE("196_CollapseAdd_InputText_Spawn Vehicle Next To Player"),
			OBFUSCATE("197_CollapseAdd_Button_Spawn Vehicle Next To Player"),
            OBFUSCATE("Category_Score"),
            OBFUSCATE("198_InputValue_Score"),
            OBFUSCATE("199_Button_Set Score"),
            OBFUSCATE("200_InputValue_Kills"),
            OBFUSCATE("201_Button_Set Kills"),
            OBFUSCATE("202_InputValue_Killstreak"),
            OBFUSCATE("203_Button_Set Killstreak"),
            OBFUSCATE("Category_Bots"),
            OBFUSCATE("204_Toggle_Disable Bots"),
            OBFUSCATE("205_Button_Remove Bots"),
            OBFUSCATE("206_Button_Kill Bots"),
            OBFUSCATE("Collapse_Add Bots"),
            OBFUSCATE("207_CollapseAdd_CheckBox_Blue Team"),
            OBFUSCATE("208_CollapseAdd_CheckBox_Red Team"),
            OBFUSCATE("209_CollapseAdd_InputText_Name"),
            OBFUSCATE("210_CollapseAdd_Button_Add Bot"),
            OBFUSCATE("Category_Match"),
            OBFUSCATE("211_InputText_Chat Spam Message"), //Done
            OBFUSCATE("212_Toggle_Chat Spam V1"), //Done
            OBFUSCATE("213_Toggle_Chat Spam V2"), //Done
            OBFUSCATE("Collapse_Match Time"),
            OBFUSCATE("214_CollapseAdd_InputValue_Hours"),
            OBFUSCATE("215_CollapseAdd_InputValue_Minutes"),
            OBFUSCATE("216_CollapseAdd_InputValue_Seconds"),
            OBFUSCATE("217_CollapseAdd_Button_Set Time"),
            OBFUSCATE("218_CollapseAdd_InputValue_Match Speed Multiplier"),
            OBFUSCATE("219_CollapseAdd_Toggle_Match Speed Multiplier"),
            OBFUSCATE("220_CollapseAdd_CheckBox_Freeze Match Time"),
			OBFUSCATE("221_Button_Kick All"),
			OBFUSCATE("222_Toggle_Lock Lobby (Disable Joining)"),
			OBFUSCATE("Category_Manipulate All Players"),
			OBFUSCATE("223_CheckBox_True_Include Bots"),
			OBFUSCATE("224_InputValue_Score"),
			OBFUSCATE("225_Button_Set Score"),
			OBFUSCATE("226_InputValue_Kills"),
			OBFUSCATE("227_Button_Set Kills"),
			OBFUSCATE("228_SeekBar_Size_1_1000"),
			OBFUSCATE("229_Toggle_Negative Size"), //Instead of multiplication, division: 2 becomes 0.5, 3 becomes 0.33, 4 becomes 0.25, etc.
			OBFUSCATE("230_InputText_Change Player Names"),
			OBFUSCATE("231_Button_Change Player Teams"),
			OBFUSCATE("232_Button_Heal All Players"),
			OBFUSCATE("233_Button_Kill All Players"),
			OBFUSCATE("Collapse_Teleport Players"),
			OBFUSCATE("234_CollapseAdd_CheckBox_True_X"),
			OBFUSCATE("235_CollapseAdd_InputValue_X"),
			OBFUSCATE("236_CollapseAdd_CheckBox_True_Y"),
			OBFUSCATE("237_CollapseAdd_InputValue_Y"),
			OBFUSCATE("238_CollapseAdd_CheckBox_True_Z"),
			OBFUSCATE("239_CollapseAdd_InputValue_Z"),
			OBFUSCATE("240_CollapseAdd_Button_Teleport Players"),
			OBFUSCATE("241_CollapseAdd_Button_Teleport Players To Me"),
			OBFUSCATE("242_CollapseAdd_InputText_Teleport Players To Player"),
			OBFUSCATE("243_CollapseAdd_Button_Teleport Players To Player"),
			OBFUSCATE("244_CheckBox_Freeze Players"),
			OBFUSCATE("245_Button_Kick Players"),
			OBFUSCATE("246_Button_Ban Players"),
			OBFUSCATE("Category_Manipulate Player"),
            OBFUSCATE("247_InputText_Player Name"),
            OBFUSCATE("248_InputValue_Score"),
            OBFUSCATE("249_Button_Set Score"),
            OBFUSCATE("250_InputValue_Kills"),
            OBFUSCATE("251_Button_Set Kills"),
			OBFUSCATE("252_SeekBar_Size_1_1000"),
			OBFUSCATE("253_Toggle_Negative Size"), //Instead of multiplication, division: 2 becomes 0.5, 3 becomes 0.33, 4 becomes 0.25, etc.
			OBFUSCATE("254_InputText_Change Player Name"),
			OBFUSCATE("255_Button_Change Player Team"),
            OBFUSCATE("256_Button_Heal Player"),
            OBFUSCATE("257_Button_Kill Player"),
			OBFUSCATE("Collapse_Teleport Player"),
			OBFUSCATE("258_CollapseAdd_CheckBox_True_X"),
            OBFUSCATE("259_CollapseAdd_InputValue_X"),
            OBFUSCATE("260_CollapseAdd_CheckBox_True_Y"),
			OBFUSCATE("261_CollapseAdd_InputValue_Y"),
			OBFUSCATE("262_CollapseAdd_CheckBox_True_Z"),
            OBFUSCATE("263_CollapseAdd_InputValue_Z"),
            OBFUSCATE("264_CollapseAdd_Button_Teleport Player"),
            OBFUSCATE("265_CollapseAdd_Button_Teleport Player To Me"),
			OBFUSCATE("266_CollapseAdd_InputText_Teleport Player To Player"),
			OBFUSCATE("267_CollapseAdd_Button_Teleport Player To Player"),
			OBFUSCATE("268_CollapseAdd_Button_Teleport To Closest Unoccupied Vehicle"),
            OBFUSCATE("269_CheckBox_Freeze Player"),
            OBFUSCATE("270_Button_Kick Player"),
            OBFUSCATE("271_Button_Ban Player"),
			OBFUSCATE("Category_Kill Players"),
			OBFUSCATE("272_Toggle_Telekill"),
			OBFUSCATE("273_Toggle_Masskill"),
			OBFUSCATE("274_Button_Kill All"),
			OBFUSCATE("Collapse_Spam Kill Delay"),
			OBFUSCATE("275_CollapseAdd_SeekBar_Minutes_0_60"),
			OBFUSCATE("276_CollapseAdd_SeekBar_Seconds_0_60"),
			OBFUSCATE("277_CollapseAdd_SeekBar_Miliseconds_0_1000"),
			OBFUSCATE("278_Toggle_Spam Kill All"),
			OBFUSCATE("279_InputText_Player To Kill (Case Sensitive)"),
			OBFUSCATE("280_Button_Kill Player"),
			OBFUSCATE("281_Toggle_Spam Kill Player"),
            OBFUSCATE("Category_Miscellaneous"),
            OBFUSCATE("282_CheckBox_True_Antiban"), //Done
            OBFUSCATE("283_CheckBox_True_Bypass Force Update"), //YandexAppMetricaConfig.AppVersion
            OBFUSCATE("284_CheckBox_True_No Ads"), //Done
            OBFUSCATE("285_CheckBox_60 FPS"),
            OBFUSCATE("286_InputValue_Speedhack"),
            OBFUSCATE("287_Toggle_Speedhack"),
            OBFUSCATE("Collapse_Ban Player"),
            OBFUSCATE("288_CollapseAdd_InputValue_Player ID"),
            OBFUSCATE("289_CollapseAdd_Button_Ban Player"),
            OBFUSCATE("Category_About"),
            OBFUSCATE("ButtonLink_Mod Menu Github Page_https://github.com/HorridModz/Polywar-Mod-Menu"),
            OBFUSCATE("Collapse_My Socials"),
            OBFUSCATE("CollapseAdd_RichTextView_Discord: User123456789#6424<br />Youtube: HorridModz 2.0<br />Github: HorridModz<br />Gameguardian: HorridModz<br />"),
            OBFUSCATE("CollapseAdd_ButtonLink_Youtube_https://www.youtube.com/channel/UCt17kVvITO-q-zUICdw7hUQ"),
            OBFUSCATE("CollapseAdd_ButtonLink_Github_https://github.com/HorridModz"),
            OBFUSCATE("CollapseAdd_ButtonLink_Gameguardian_https://gameguardian.net/forum/profile/1234241-horridmodz/"),
            OBFUSCATE("Collapse_Credits"),
            OBFUSCATE("CollapseAdd_RichTextView_Thanks to LGL for the mod menu template"),
    };

    //Now you dont have to manually update the number everytime;

    int Total_Feature = (sizeof features / sizeof features[0]);
    ret = (jobjectArray)
            env->NewObjectArray(Total_Feature, env->FindClass(OBFUSCATE("java/lang/String")),
                                env->NewStringUTF(""));

    for (int i = 0; i < Total_Feature; i++)
        env->SetObjectArrayElement(ret, i, env->NewStringUTF(features[i]));
    return (ret);
}

void Changes(JNIEnv *env, jclass clazz, jobject obj,
             jint featNum, jstring featName, jint value,
             jboolean boolean, jstring str) {

    LOGD(OBFUSCATE("Feature name: %d - %s | Value: = %d | Bool: = %d | Text: = %s"), featNum,
         env->GetStringUTFChars(featName, 0), value,
         boolean, str != NULL ? env->GetStringUTFChars(str, 0) : "");

    //BE CAREFUL NOT TO ACCIDENTLY REMOVE break;
    switch (featNum) {
		//Category Currency

		//Collapse VIP

		//VIP
		case 0:
			Features::Currency.Vip_Toggle_Vip((boolean != JNI_FALSE));
			break;
		//Buy VIP (Permanent)
		case 1:
			Features::Currency.Vip_Button_BuyVipPermanent();
			break;

		//Category Store


		//Free Shopping
		case 2:
			Features::Store.Toggle_FreeShopping((boolean != JNI_FALSE));
			break;
		//Free In-app Purchases
		case 3:
			Features::Store.Toggle_FreeInAppPurchases((boolean != JNI_FALSE));
			break;

		//Category Battle Pass


		//Unlock Premium Battle Pass (Temporary)
		case 4:
			Features::BattlePass.Button_UnlockPremiumBattlePassTemporary();
			break;
		//Reset Battle Pass Rewards
		case 5:
			Features::BattlePass.Button_ResetBattlePassRewards();
			break;
		//Infinite Battle Pass Rewards
		case 6:
			Features::BattlePass.Toggle_InfiniteBattlePassRewards((boolean != JNI_FALSE));
			break;
		//Claim All Battle Pass Rewards
		case 14:
			Features::BattlePass.Button_ClaimAllBattlePassRewards();
			break;

		//Collapse Battle Pass Level

		//Level Up Battle Pass
		case 7:
			Features::BattlePass.BattlePassLevel_Button_LevelUpBattlePass();
			break;
		//Battle Pass Level
		case 8:
			Features::BattlePass.BattlePassLevel_SetSeekBar_BattlePassLevel((int)value);
			break;
		//Set Battle Pass Level
		case 9:
			Features::BattlePass.BattlePassLevel_Button_SetBattlePassLevel();
			break;

		//Collapse Battle Pass EXP

		//Battle Pass EXP
		case 10:
			Features::BattlePass.BattlePassExp_SetSeekBar_BattlePassExp((int)value);
			break;
		//Set Battle Pass EXP
		case 11:
			Features::BattlePass.BattlePassExp_Button_SetBattlePassExp();
			break;
		//Add Battle Pass EXP
		case 12:
			Features::BattlePass.BattlePassExp_Button_AddBattlePassExp();
			break;
		//Remove Battle Pass EXP
		case 13:
			Features::BattlePass.BattlePassExp_Button_RemoveBattlePassExp();
			break;

		//Category Items

		//Collapse Weapons

		//Spoof All Weapons
		case 15:
			Features::Items.Weapons_Button_SpoofAllWeapons();
			break;
		//Unlock All Weapons (Permanent)
		case 16:
			Features::Items.Weapons_Button_UnlockAllWeaponsPermanent();
			break;
		//Weapon ID
		case 17:
			Features::Items.Weapons_SetInputValue_WeaponId((int)value);
			break;
		//Spoof Weapon
		case 18:
			Features::Items.Weapons_Button_SpoofWeapon();
			break;
		//Unlock Weapon
		case 19:
			Features::Items.Weapons_Button_UnlockWeapon();
			break;

		//Category Player


		//ID Spoofer
		case 20:
			Features::Player.SetInputText_IdSpoofer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Godmode V1
		case 21:
			Features::Player.Toggle_GodmodeV1((boolean != JNI_FALSE));
			break;
		//Health
		case 22:
			Features::Player.Toggle_Health((boolean != JNI_FALSE));
			break;
		//Health
		case 23:
			Features::Player.SetSeekBar_Health((int)value);
			break;
		//Max Health
		case 24:
			Features::Player.Toggle_MaxHealth((boolean != JNI_FALSE));
			break;
		//Max Health
		case 25:
			Features::Player.SetSeekBar_MaxHealth((int)value);
			break;
		//Armor
		case 26:
			Features::Player.Toggle_Armor((boolean != JNI_FALSE));
			break;
		//Armor
		case 27:
			Features::Player.SetSeekBar_Armor((int)value);
			break;
		//Max Armor
		case 28:
			Features::Player.Toggle_MaxArmor((boolean != JNI_FALSE));
			break;
		//Max Armor
		case 29:
			Features::Player.SetSeekBar_MaxArmor((int)value);
			break;
		//Heal
		case 36:
			Features::Player.Button_Heal();
			break;
		//Thorns
		case 37:
			Features::Player.Toggle_Thorns((boolean != JNI_FALSE));
			break;
		//Thorns Damage
		case 38:
			Features::Player.SetSeekBar_ThornsDamage((int)value);
			break;
		//Reflect Damage
		case 39:
			Features::Player.Toggle_ReflectDamage((boolean != JNI_FALSE));
			break;
		//Danger Zone Invincibility
		case 44:
			Features::Player.Toggle_DangerZoneInvincibility((boolean != JNI_FALSE));
			break;
		//Switch Team
		case 45:
			Features::Player.Button_SwitchTeam();
			break;
		//No Team
		case 46:
			Features::Player.CheckBox_NoTeam((boolean != JNI_FALSE));
			break;
		//Both Teams
		case 47:
			Features::Player.CheckBox_BothTeams((boolean != JNI_FALSE));
			break;
		//No Item Cooldown
		case 48:
			Features::Player.Toggle_NoItemCooldown((boolean != JNI_FALSE));
			break;
		//Giant
		case 49:
			Features::Player.Toggle_Giant((boolean != JNI_FALSE));
			break;
		//Tiny
		case 50:
			Features::Player.Toggle_Tiny((boolean != JNI_FALSE));
			break;
		//Size
		case 51:
			Features::Player.SetSeekBar_Size((int)value);
			break;
		//Negative Size
		case 52:
			Features::Player.Toggle_NegativeSize((boolean != JNI_FALSE));
			break;
		//Spectator Mode
		case 53:
			Features::Player.Toggle_SpectatorMode((boolean != JNI_FALSE));
			break;
		//Change Name
		case 54:
			Features::Player.SetInputText_ChangeName(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;

		//Collapse Regeneration

		//Health Regen
		case 30:
			Features::Player.Regeneration_Toggle_HealthRegen((boolean != JNI_FALSE));
			break;
		//Health Regen
		case 31:
			Features::Player.Regeneration_SetSeekBar_HealthRegen((int)value);
			break;
		//Armor Regen
		case 32:
			Features::Player.Regeneration_Toggle_ArmorRegen((boolean != JNI_FALSE));
			break;
		//Armor Regen
		case 33:
			Features::Player.Regeneration_SetSeekBar_ArmorRegen((int)value);
			break;
		//Regen Interval (Seconds)
		case 34:
			Features::Player.Regeneration_SetSeekBar_RegenIntervalSeconds((int)value);
			break;
		//Regen Interval (Miliseconds)
		case 35:
			Features::Player.Regeneration_SetSeekBar_RegenIntervalMiliseconds((int)value);
			break;

		//Collapse Force Field

		//Radius
		case 40:
			Features::Player.ForceField_SetSeekBar_Radius((int)value);
			break;
		//Damage
		case 41:
			Features::Player.ForceField_SetSeekBar_Damage((int)value);
			break;
		//Heal
		case 42:
			Features::Player.ForceField_SetSeekBar_Heal((int)value);
			break;
		//Enable Force Field
		case 43:
			Features::Player.ForceField_CheckBox_EnableForceField((boolean != JNI_FALSE));
			break;

		//Category Weapons


		//Spoof Weapon
		case 55:
			Features::Weapons.Toggle_SpoofWeapon((boolean != JNI_FALSE));
			break;
		//Original Weapon ID
		case 56:
			Features::Weapons.SetInputValue_OriginalWeaponId((int)value);
			break;
		//Spoofed Weapon ID
		case 57:
			Features::Weapons.SetInputValue_SpoofedWeaponId((int)value);
			break;
		//One Hit Kill
		case 58:
			Features::Weapons.Toggle_OneHitKill((boolean != JNI_FALSE));
			break;
		//Damage
		case 59:
			Features::Weapons.Toggle_Damage((boolean != JNI_FALSE));
			break;
		//Damage
		case 60:
			Features::Weapons.SetSeekBar_Damage((int)value);
			break;
		//Rapid Fire
		case 61:
			Features::Weapons.Toggle_RapidFire((boolean != JNI_FALSE));
			break;
		//Fire Rate
		case 62:
			Features::Weapons.Toggle_FireRate((boolean != JNI_FALSE));
			break;
		//Fire Rate
		case 63:
			Features::Weapons.SetSeekBar_FireRate((int)value);
			break;
		//Auto Fire
		case 64:
			Features::Weapons.Toggle_AutoFire((boolean != JNI_FALSE));
			break;
		//Ammo
		case 65:
			Features::Weapons.Toggle_Ammo((boolean != JNI_FALSE));
			break;
		//Ammo
		case 66:
			Features::Weapons.SetSeekBar_Ammo((int)value);
			break;
		//Clip Size
		case 67:
			Features::Weapons.Toggle_ClipSize((boolean != JNI_FALSE));
			break;
		//Clip Size
		case 68:
			Features::Weapons.SetSeekBar_ClipSize((int)value);
			break;
		//Area Damage
		case 69:
			Features::Weapons.Toggle_AreaDamage((boolean != JNI_FALSE));
			break;
		//Area Damage Radius
		case 70:
			Features::Weapons.SetSeekBar_AreaDamageRadius((int)value);
			break;
		//Instant Reload
		case 71:
			Features::Weapons.Toggle_InstantReload((boolean != JNI_FALSE));
			break;
		//Reload Speed
		case 72:
			Features::Weapons.Toggle_ReloadSpeed((boolean != JNI_FALSE));
			break;
		//Reload Speed
		case 73:
			Features::Weapons.SetSeekBar_ReloadSpeed((int)value);
			break;
		//Auto Reload
		case 74:
			Features::Weapons.Toggle_AutoReload((boolean != JNI_FALSE));
			break;
		//Reload
		case 75:
			Features::Weapons.Button_Reload();
			break;
		//Accuracy
		case 76:
			Features::Weapons.Toggle_Accuracy((boolean != JNI_FALSE));
			break;
		//Instant Projectile Speed
		case 77:
			Features::Weapons.Toggle_InstantProjectileSpeed((boolean != JNI_FALSE));
			break;
		//Projectile Speed
		case 78:
			Features::Weapons.Toggle_ProjectileSpeed((boolean != JNI_FALSE));
			break;
		//Projectile Speed
		case 79:
			Features::Weapons.SetSeekBar_ProjectileSpeed((int)value);
			break;
		//No Shoot Delay
		case 80:
			Features::Weapons.Toggle_NoShootDelay((boolean != JNI_FALSE));
			break;
		//Shoot Through Walls
		case 81:
			Features::Weapons.Toggle_ShootThroughWalls((boolean != JNI_FALSE));
			break;
		//Silent
		case 82:
			Features::Weapons.Toggle_Silent((boolean != JNI_FALSE));
			break;
		//No Recoil
		case 83:
			Features::Weapons.Toggle_NoRecoil((boolean != JNI_FALSE));
			break;
		//No Spread
		case 84:
			Features::Weapons.Toggle_NoSpread((boolean != JNI_FALSE));
			break;
		//Hide Weapon
		case 85:
			Features::Weapons.Toggle_HideWeapon((boolean != JNI_FALSE));
			break;
		//Scope Zoom
		case 86:
			Features::Weapons.Toggle_ScopeZoom((boolean != JNI_FALSE));
			break;
		//Scope Zoom
		case 87:
			Features::Weapons.SetSeekBar_ScopeZoom((int)value);
			break;
		//Chams
		case 88:
			Features::Weapons.Toggle_Chams((boolean != JNI_FALSE));
			break;
		//No Switch Delay
		case 90:
			Features::Weapons.Toggle_NoSwitchDelay((boolean != JNI_FALSE));
			break;

		//Collapse Bullet Type

		//Shoot Lasers
		case 89:
			Features::Weapons.BulletType_CheckBox_ShootLasers((boolean != JNI_FALSE));
			break;

		//Category Grenades


		//Infinite Grenades
		case 91:
			Features::Grenades.Toggle_InfiniteGrenades((boolean != JNI_FALSE));
			break;
		//Grenade Spam
		case 92:
			Features::Grenades.Toggle_GrenadeSpam((boolean != JNI_FALSE));
			break;
		//No Grenade Animation
		case 93:
			Features::Grenades.Toggle_NoGrenadeAnimation((boolean != JNI_FALSE));
			break;

		//Category Aimbot


		//Aimbot
		case 94:
			Features::Aimbot.Toggle_Aimbot((boolean != JNI_FALSE));
			break;
		//Counterintuitive Aimbot
		case 95:
			Features::Aimbot.Toggle_CounterintuitiveAimbot((boolean != JNI_FALSE));
			break;
		//OP Aim Assist
		case 96:
			Features::Aimbot.Toggle_OpAimAssist((boolean != JNI_FALSE));
			break;
		//Auto Fire
		case 97:
			Features::Aimbot.Toggle_AutoFire((boolean != JNI_FALSE));
			break;
		//Silent Aim
		case 98:
			Features::Aimbot.Toggle_SilentAim((boolean != JNI_FALSE));
			break;
		//Silent Aim Radius
		case 99:
			Features::Aimbot.SetSeekBar_SilentAimRadius((int)value);
			break;

		//Category ESP

		//Collapse Players

		//Player Lines
		case 100:
			Features::Esp.Players_Toggle_PlayerLines((boolean != JNI_FALSE));
			break;
		//Player Boxes
		case 101:
			Features::Esp.Players_Toggle_PlayerBoxes((boolean != JNI_FALSE));
			break;
		//Player Health Bars
		case 102:
			Features::Esp.Players_Toggle_PlayerHealthBars((boolean != JNI_FALSE));
			break;
		//Player List
		case 103:
			Features::Esp.Players_Toggle_PlayerList((boolean != JNI_FALSE));
			break;
		//Include Player Positions In Player List
		case 104:
			Features::Esp.Players_CheckBox_IncludePlayerPositionsInPlayerList((boolean != JNI_FALSE));
			break;
		//Include Bots
		case 105:
			Features::Esp.Players_CheckBox_IncludeBots((boolean != JNI_FALSE));
			break;
		//Show \"Bot\" Tag Over Heads Of Bots
		case 106:
			Features::Esp.Players_CheckBox_ShowBotTagOverHeadsOfBots((boolean != JNI_FALSE));
			break;
		//Show Bots in Different Color
		case 107:
			Features::Esp.Players_CheckBox_ShowBotsInDifferentColor((boolean != JNI_FALSE));
			break;
		//All Players
		case 108:
			Features::Esp.Players_CheckBox_AllPlayers((boolean != JNI_FALSE));
			break;
		//Only Players Named
		case 109:
			Features::Esp.Players_CheckBox_OnlyPlayersNamed((boolean != JNI_FALSE));
			break;
		//Only Players Named
		case 110:
			Features::Esp.Players_SetInputText_OnlyPlayersNamed(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;

		//Collapse Vehicles

		//Vehicle Lines
		case 111:
			Features::Esp.Vehicles_Toggle_VehicleLines((boolean != JNI_FALSE));
			break;
		//Vehicle Boxes
		case 112:
			Features::Esp.Vehicles_Toggle_VehicleBoxes((boolean != JNI_FALSE));
			break;
		//Vehicle Health Bars
		case 113:
			Features::Esp.Vehicles_Toggle_VehicleHealthBars((boolean != JNI_FALSE));
			break;
		//Show \"Occupied\" Tag Over Occupied Vehicles
		case 114:
			Features::Esp.Vehicles_Toggle_ShowOccupiedTagOverOccupiedVehicles((boolean != JNI_FALSE));
			break;

		//Category Vision

		//Collapse Perspective

		//First Person
		case 115:
			Features::Vision.Perspective_CheckBox_FirstPerson((boolean != JNI_FALSE));
			break;
		//Third Person
		case 116:
			Features::Vision.Perspective_CheckBox_ThirdPerson((boolean != JNI_FALSE));
			break;


		//Custom FOV
		case 117:
			Features::Vision.Toggle_CustomFov((boolean != JNI_FALSE));
			break;
		//FOV
		case 118:
			Features::Vision.SetSeekBar_Fov((int)value);
			break;
		//Crosshair Scale
		case 119:
			Features::Vision.SetSeekBar_CrosshairScale((int)value);
			break;
		//Disable Fog
		case 120:
			Features::Vision.Toggle_DisableFog((boolean != JNI_FALSE));
			break;
		//Freeze Camera
		case 121:
			Features::Vision.Toggle_FreezeCamera((boolean != JNI_FALSE));
			break;
		//Chams
		case 122:
			Features::Vision.Toggle_Chams((boolean != JNI_FALSE));
			break;
		//Xray
		case 123:
			Features::Vision.Toggle_Xray((boolean != JNI_FALSE));
			break;

		//Category Effects


		//Anti-Freeze
		case 124:
			Features::Effects.Toggle_AntiFreeze((boolean != JNI_FALSE));
			break;
		//Anti Camera Shake
		case 125:
			Features::Effects.Toggle_AntiCameraShake((boolean != JNI_FALSE));
			break;

		//Category Movement


		//Fly
		case 126:
			Features::Movement.Toggle_Fly((boolean != JNI_FALSE));
			break;
		//Hover
		case 127:
			Features::Movement.Toggle_Hover((boolean != JNI_FALSE));
			break;
		//Hover At Y
		case 128:
			Features::Movement.SetInputText_HoverAtY(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Infinite Jump
		case 129:
			Features::Movement.Toggle_InfiniteJump((boolean != JNI_FALSE));
			break;
		//Jump Height
		case 130:
			Features::Movement.Toggle_JumpHeight((boolean != JNI_FALSE));
			break;
		//Jump Height
		case 131:
			Features::Movement.SetSeekBar_JumpHeight((int)value);
			break;
		//Jump Speed
		case 132:
			Features::Movement.Toggle_JumpSpeed((boolean != JNI_FALSE));
			break;
		//Jump Speed
		case 133:
			Features::Movement.SetSeekBar_JumpSpeed((int)value);
			break;
		//Hover after Jump
		case 134:
			Features::Movement.Toggle_HoverAfterJump((boolean != JNI_FALSE));
			break;
		//Hover Length (Seconds)
		case 135:
			Features::Movement.SetSeekBar_HoverLengthSeconds((int)value);
			break;
		//Hover Length (Miliseconds)
		case 136:
			Features::Movement.SetSeekBar_HoverLengthMiliseconds((int)value);
			break;
		//Inverted Jump
		case 137:
			Features::Movement.Toggle_InvertedJump((boolean != JNI_FALSE));
			break;
		//Bunny Hop
		case 138:
			Features::Movement.Toggle_BunnyHop((boolean != JNI_FALSE));
			break;
		//Walk Speed
		case 139:
			Features::Movement.Toggle_WalkSpeed((boolean != JNI_FALSE));
			break;
		//Walk Speed
		case 140:
			Features::Movement.SetSeekBar_WalkSpeed((int)value);
			break;
		//Run Speed
		case 141:
			Features::Movement.Toggle_RunSpeed((boolean != JNI_FALSE));
			break;
		//Run Speed
		case 142:
			Features::Movement.SetSeekBar_RunSpeed((int)value);
			break;
		//Sprint Speed
		case 143:
			Features::Movement.Toggle_SprintSpeed((boolean != JNI_FALSE));
			break;
		//Sprint Speed
		case 144:
			Features::Movement.SetSeekBar_SprintSpeed((int)value);
			break;
		//Auto Sprint
		case 145:
			Features::Movement.Toggle_AutoSprint((boolean != JNI_FALSE));
			break;
		//No Clip
		case 146:
			Features::Movement.Toggle_NoClip((boolean != JNI_FALSE));
			break;
		//Remove All Hitboxes
		case 147:
			Features::Movement.Toggle_RemoveAllHitboxes((boolean != JNI_FALSE));
			break;
		//Freeze Myself
		case 148:
			Features::Movement.Toggle_FreezeMyself((boolean != JNI_FALSE));
			break;
		//Underwater
		case 152:
			Features::Movement.Toggle_Underwater((boolean != JNI_FALSE));
			break;
		//Get My Current Position
		case 163:
			Features::Movement.Button_GetMyCurrentPosition();
			break;

		//Collapse Gravity

		//Gravity Strength
		case 149:
			Features::Movement.Gravity_Toggle_GravityStrength((boolean != JNI_FALSE));
			break;
		//Gravity
		case 150:
			Features::Movement.Gravity_SetSeekBar_Gravity((int)value);
			break;
		//Inverted Gravity
		case 151:
			Features::Movement.Gravity_Toggle_InvertedGravity((boolean != JNI_FALSE));
			break;

		//Collapse Teleport

		//X
		case 153:
			Features::Movement.Teleport_CheckBox_X((boolean != JNI_FALSE));
			break;
		//X
		case 154:
			Features::Movement.Teleport_SetInputValue_X((int)value);
			break;
		//Y
		case 155:
			Features::Movement.Teleport_CheckBox_Y((boolean != JNI_FALSE));
			break;
		//Y
		case 156:
			Features::Movement.Teleport_SetInputValue_Y((int)value);
			break;
		//Z
		case 157:
			Features::Movement.Teleport_CheckBox_Z((boolean != JNI_FALSE));
			break;
		//Z
		case 158:
			Features::Movement.Teleport_SetInputValue_Z((int)value);
			break;
		//Teleport
		case 159:
			Features::Movement.Teleport_Button_Teleport();
			break;
		//Teleport To Player
		case 160:
			Features::Movement.Teleport_SetInputText_TeleportToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Teleport To Player
		case 161:
			Features::Movement.Teleport_Button_TeleportToPlayer();
			break;
		//Teleport To Closest Unoccupied Vehicle
		case 162:
			Features::Movement.Teleport_Button_TeleportToClosestUnoccupiedVehicle();
			break;

		//Category Respawning


		//Respawn
		case 164:
			Features::Respawning.Button_Respawn();
			break;
		//Immediate Respawn
		case 165:
			Features::Respawning.Toggle_ImmediateRespawn((boolean != JNI_FALSE));
			break;
		//Respawn In Place
		case 166:
			Features::Respawning.Toggle_RespawnInPlace((boolean != JNI_FALSE));
			break;
		//Don't Respawn
		case 167:
			Features::Respawning.Toggle_DisableRespawn((boolean != JNI_FALSE));
			break;

		//Collapse Custom Respawn Positon

		//X
		case 168:
			Features::Respawning.CustomRespawnPositon_SetInputValue_X((int)value);
			break;
		//Y
		case 169:
			Features::Respawning.CustomRespawnPositon_SetInputValue_Y((int)value);
			break;
		//Z
		case 170:
			Features::Respawning.CustomRespawnPositon_SetInputValue_Z((int)value);
			break;
		//Custom Respawn Position
		case 171:
			Features::Respawning.CustomRespawnPositon_CheckBox_CustomRespawnPosition((boolean != JNI_FALSE));
			break;
		//Respawn Next To Player
		case 172:
			Features::Respawning.CustomRespawnPositon_CheckBox_RespawnNextToPlayer((boolean != JNI_FALSE));
			break;
		//Respawn Next To Player
		case 173:
			Features::Respawning.CustomRespawnPositon_SetInputText_RespawnNextToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;

		//Category Vehicles


		//Vehicle Infinite Health
		case 174:
			Features::Vehicles.Toggle_VehicleInfiniteHealth((boolean != JNI_FALSE));
			break;
		//Vehicle Godmode
		case 175:
			Features::Vehicles.Toggle_VehicleGodmode((boolean != JNI_FALSE));
			break;
		//Eject From Vehicle
		case 176:
			Features::Vehicles.Button_EjectFromVehicle();
			break;
		//Eject All Vehicles
		case 177:
			Features::Vehicles.Button_EjectAllVehicles();
			break;
		//Destroy All Vehicles
		case 178:
			Features::Vehicles.Button_DestroyAllVehicles();
			break;

		//Collapse Teleport My Vehicle

		//X
		case 179:
			Features::Vehicles.TeleportMyVehicle_SetInputValue_X((int)value);
			break;
		//Y
		case 180:
			Features::Vehicles.TeleportMyVehicle_CheckBox_Y((boolean != JNI_FALSE));
			break;
		//Y
		case 181:
			Features::Vehicles.TeleportMyVehicle_SetInputValue_Y((int)value);
			break;
		//Z
		case 182:
			Features::Vehicles.TeleportMyVehicle_CheckBox_Z((boolean != JNI_FALSE));
			break;
		//Z
		case 183:
			Features::Vehicles.TeleportMyVehicle_SetInputValue_Z((int)value);
			break;
		//Teleport Vehicle
		case 184:
			Features::Vehicles.TeleportMyVehicle_Button_TeleportVehicle();
			break;
		//Teleport Vehicle To Me
		case 185:
			Features::Vehicles.TeleportMyVehicle_Button_TeleportVehicleToMe();
			break;
		//Teleport Vehicle To Player
		case 186:
			Features::Vehicles.TeleportMyVehicle_SetInputText_TeleportVehicleToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Teleport Vehicle To Player
		case 187:
			Features::Vehicles.TeleportMyVehicle_Button_TeleportVehicleToPlayer();
			break;

		//Collapse Spawn Vehicle

		//Custom X
		case 188:
			Features::Vehicles.SpawnVehicle_CheckBox_CustomX((boolean != JNI_FALSE));
			break;
		//X
		case 189:
			Features::Vehicles.SpawnVehicle_SetInputValue_X((int)value);
			break;
		//Custom Y
		case 190:
			Features::Vehicles.SpawnVehicle_CheckBox_CustomY((boolean != JNI_FALSE));
			break;
		//Y
		case 191:
			Features::Vehicles.SpawnVehicle_SetInputValue_Y((int)value);
			break;
		//Custom Z
		case 192:
			Features::Vehicles.SpawnVehicle_CheckBox_CustomZ((boolean != JNI_FALSE));
			break;
		//Z
		case 193:
			Features::Vehicles.SpawnVehicle_SetInputValue_Z((int)value);
			break;
		//Spawn Vehicle
		case 194:
			Features::Vehicles.SpawnVehicle_Button_SpawnVehicle();
			break;
		//Spawn Vehicle Next To Me
		case 195:
			Features::Vehicles.SpawnVehicle_Button_SpawnVehicleNextToMe();
			break;
		//Spawn Vehicle Next To Player
		case 196:
			Features::Vehicles.SpawnVehicle_SetInputText_SpawnVehicleNextToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Spawn Vehicle Next To Player
		case 197:
			Features::Vehicles.SpawnVehicle_Button_SpawnVehicleNextToPlayer();
			break;

		//Category Score


		//Score
		case 198:
			Features::Score.SetInputValue_Score((int)value);
			break;
		//Set Score
		case 199:
			Features::Score.Button_SetScore();
			break;
		//Kills
		case 200:
			Features::Score.SetInputValue_Kills((int)value);
			break;
		//Set Kills
		case 201:
			Features::Score.Button_SetKills();
			break;
		//Killstreak
		case 202:
			Features::Score.SetInputValue_Killstreak((int)value);
			break;
		//Set Killstreak
		case 203:
			Features::Score.Button_SetKillstreak();
			break;

		//Category Bots


		//Disable Bots
		case 204:
			Features::Bots.Toggle_DisableBots((boolean != JNI_FALSE));
			break;
		//Remove Bots
		case 205:
			Features::Bots.Button_RemoveBots();
			break;
		//Kill Bots
		case 206:
			Features::Bots.Button_KillBots();
			break;

		//Collapse Add Bots

		//Blue Team
		case 207:
			Features::Bots.AddBots_CheckBox_BlueTeam((boolean != JNI_FALSE));
			break;
		//Red Team
		case 208:
			Features::Bots.AddBots_CheckBox_RedTeam((boolean != JNI_FALSE));
			break;
		//Name
		case 209:
			Features::Bots.AddBots_SetInputText_Name(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Add Bot
		case 210:
			Features::Bots.AddBots_Button_AddBot();
			break;

		//Category Match


		//Chat Spam Message
		case 211:
			Features::Match.SetInputText_ChatSpamMessage(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Chat Spam V1
		case 212:
			Features::Match.Toggle_ChatSpamV1((boolean != JNI_FALSE));
			break;
		//Chat Spam V2
		case 213:
			Features::Match.Toggle_ChatSpamV2((boolean != JNI_FALSE));
			break;
		//Kick All
		case 221:
			Features::Match.Button_KickAll();
			break;
		//Lock Lobby (Disable Joining)
		case 222:
			Features::Match.Toggle_LockLobbyDisableJoining((boolean != JNI_FALSE));
			break;

		//Collapse Match Time

		//Hours
		case 214:
			Features::Match.MatchTime_SetInputValue_Hours((int)value);
			break;
		//Minutes
		case 215:
			Features::Match.MatchTime_SetInputValue_Minutes((int)value);
			break;
		//Seconds
		case 216:
			Features::Match.MatchTime_SetInputValue_Seconds((int)value);
			break;
		//Set Time
		case 217:
			Features::Match.MatchTime_Button_SetTime();
			break;
		//Match Speed Multiplier
		case 218:
			Features::Match.MatchTime_SetInputValue_MatchSpeedMultiplier((int)value);
			break;
		//Match Speed Multiplier
		case 219:
			Features::Match.MatchTime_Toggle_MatchSpeedMultiplier((boolean != JNI_FALSE));
			break;
		//Freeze Match Time
		case 220:
			Features::Match.MatchTime_CheckBox_FreezeMatchTime((boolean != JNI_FALSE));
			break;

		//Category Manipulate All Players


		//Include Bots
		case 223:
			Features::ManipulateAllPlayers.CheckBox_IncludeBots((boolean != JNI_FALSE));
			break;
		//Score
		case 224:
			Features::ManipulateAllPlayers.SetInputValue_Score((int)value);
			break;
		//Set Score
		case 225:
			Features::ManipulateAllPlayers.Button_SetScore();
			break;
		//Kills
		case 226:
			Features::ManipulateAllPlayers.SetInputValue_Kills((int)value);
			break;
		//Set Kills
		case 227:
			Features::ManipulateAllPlayers.Button_SetKills();
			break;
		//Size
		case 228:
			Features::ManipulateAllPlayers.SetSeekBar_Size((int)value);
			break;
		//Negative Size
		case 229:
			Features::ManipulateAllPlayers.Toggle_NegativeSize((boolean != JNI_FALSE));
			break;
		//Change Player Names
		case 230:
			Features::ManipulateAllPlayers.SetInputText_ChangePlayerNames(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Change Player Teams
		case 231:
			Features::ManipulateAllPlayers.Button_ChangePlayerTeams();
			break;
		//Heal All Players
		case 232:
			Features::ManipulateAllPlayers.Button_HealAllPlayers();
			break;
		//Kill All Players
		case 233:
			Features::ManipulateAllPlayers.Button_KillAllPlayers();
			break;
		//Freeze Players
		case 244:
			Features::ManipulateAllPlayers.CheckBox_FreezePlayers((boolean != JNI_FALSE));
			break;
		//Kick Players
		case 245:
			Features::ManipulateAllPlayers.Button_KickPlayers();
			break;
		//Ban Players
		case 246:
			Features::ManipulateAllPlayers.Button_BanPlayers();
			break;

		//Collapse Teleport Players

		//X
		case 234:
			Features::ManipulateAllPlayers.TeleportPlayers_CheckBox_X((boolean != JNI_FALSE));
			break;
		//X
		case 235:
			Features::ManipulateAllPlayers.TeleportPlayers_SetInputValue_X((int)value);
			break;
		//Y
		case 236:
			Features::ManipulateAllPlayers.TeleportPlayers_CheckBox_Y((boolean != JNI_FALSE));
			break;
		//Y
		case 237:
			Features::ManipulateAllPlayers.TeleportPlayers_SetInputValue_Y((int)value);
			break;
		//Z
		case 238:
			Features::ManipulateAllPlayers.TeleportPlayers_CheckBox_Z((boolean != JNI_FALSE));
			break;
		//Z
		case 239:
			Features::ManipulateAllPlayers.TeleportPlayers_SetInputValue_Z((int)value);
			break;
		//Teleport Players
		case 240:
			Features::ManipulateAllPlayers.TeleportPlayers_Button_TeleportPlayers();
			break;
		//Teleport Players To Me
		case 241:
			Features::ManipulateAllPlayers.TeleportPlayers_Button_TeleportPlayersToMe();
			break;
		//Teleport Players To Player
		case 242:
			Features::ManipulateAllPlayers.TeleportPlayers_SetInputText_TeleportPlayersToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Teleport Players To Player
		case 243:
			Features::ManipulateAllPlayers.TeleportPlayers_Button_TeleportPlayersToPlayer();
			break;

		//Category Manipulate Player


		//Player Name
		case 247:
			Features::ManipulatePlayer.SetInputText_PlayerName(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Score
		case 248:
			Features::ManipulatePlayer.SetInputValue_Score((int)value);
			break;
		//Set Score
		case 249:
			Features::ManipulatePlayer.Button_SetScore();
			break;
		//Kills
		case 250:
			Features::ManipulatePlayer.SetInputValue_Kills((int)value);
			break;
		//Set Kills
		case 251:
			Features::ManipulatePlayer.Button_SetKills();
			break;
		//Size
		case 252:
			Features::ManipulatePlayer.SetSeekBar_Size((int)value);
			break;
		//Negative Size
		case 253:
			Features::ManipulatePlayer.Toggle_NegativeSize((boolean != JNI_FALSE));
			break;
		//Change Player Name
		case 254:
			Features::ManipulatePlayer.SetInputText_ChangePlayerName(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Change Player Team
		case 255:
			Features::ManipulatePlayer.Button_ChangePlayerTeam();
			break;
		//Heal Player
		case 256:
			Features::ManipulatePlayer.Button_HealPlayer();
			break;
		//Kill Player
		case 257:
			Features::ManipulatePlayer.Button_KillPlayer();
			break;
		//Freeze Player
		case 269:
			Features::ManipulatePlayer.CheckBox_FreezePlayer((boolean != JNI_FALSE));
			break;
		//Kick Player
		case 270:
			Features::ManipulatePlayer.Button_KickPlayer();
			break;
		//Ban Player
		case 271:
			Features::ManipulatePlayer.Button_BanPlayer();
			break;

		//Collapse Teleport Player

		//X
		case 258:
			Features::ManipulatePlayer.TeleportPlayer_CheckBox_X((boolean != JNI_FALSE));
			break;
		//X
		case 259:
			Features::ManipulatePlayer.TeleportPlayer_SetInputValue_X((int)value);
			break;
		//Y
		case 260:
			Features::ManipulatePlayer.TeleportPlayer_CheckBox_Y((boolean != JNI_FALSE));
			break;
		//Y
		case 261:
			Features::ManipulatePlayer.TeleportPlayer_SetInputValue_Y((int)value);
			break;
		//Z
		case 262:
			Features::ManipulatePlayer.TeleportPlayer_CheckBox_Z((boolean != JNI_FALSE));
			break;
		//Z
		case 263:
			Features::ManipulatePlayer.TeleportPlayer_SetInputValue_Z((int)value);
			break;
		//Teleport Player
		case 264:
			Features::ManipulatePlayer.TeleportPlayer_Button_TeleportPlayer();
			break;
		//Teleport Player To Me
		case 265:
			Features::ManipulatePlayer.TeleportPlayer_Button_TeleportPlayerToMe();
			break;
		//Teleport Player To Player
		case 266:
			Features::ManipulatePlayer.TeleportPlayer_SetInputText_TeleportPlayerToPlayer(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Teleport Player To Player
		case 267:
			Features::ManipulatePlayer.TeleportPlayer_Button_TeleportPlayerToPlayer();
			break;
		//Teleport To Closest Unoccupied Vehicle
		case 268:
			Features::ManipulatePlayer.TeleportPlayer_Button_TeleportToClosestUnoccupiedVehicle();
			break;

		//Category Kill Players


		//Telekill
		case 272:
			Features::KillPlayers.Toggle_Telekill((boolean != JNI_FALSE));
			break;
		//Masskill
		case 273:
			Features::KillPlayers.Toggle_Masskill((boolean != JNI_FALSE));
			break;
		//Kill All
		case 274:
			Features::KillPlayers.Button_KillAll();
			break;
		//Spam Kill All
		case 278:
			Features::KillPlayers.Toggle_SpamKillAll((boolean != JNI_FALSE));
			break;
		//Player To Kill (Case Sensitive)
		case 279:
			Features::KillPlayers.SetInputText_PlayerToKillCaseSensitive(std::string(str != NULL ? env->GetStringUTFChars(str, 0) : "{[Default]}"));
			break;
		//Kill Player
		case 280:
			Features::KillPlayers.Button_KillPlayer();
			break;
		//Spam Kill Player
		case 281:
			Features::KillPlayers.Toggle_SpamKillPlayer((boolean != JNI_FALSE));
			break;

		//Collapse Spam Kill Delay

		//Minutes
		case 275:
			Features::KillPlayers.SpamKillDelay_SetSeekBar_Minutes((int)value);
			break;
		//Seconds
		case 276:
			Features::KillPlayers.SpamKillDelay_SetSeekBar_Seconds((int)value);
			break;
		//Miliseconds
		case 277:
			Features::KillPlayers.SpamKillDelay_SetSeekBar_Miliseconds((int)value);
			break;

		//Category Miscellaneous


		//Antiban
		case 282:
			Features::Miscellaneous.CheckBox_Antiban((boolean != JNI_FALSE));
			break;
		//Bypass Force Update
		case 283:
			Features::Miscellaneous.CheckBox_BypassForceUpdate((boolean != JNI_FALSE));
			break;
		//No Ads
		case 284:
			Features::Miscellaneous.CheckBox_NoAds((boolean != JNI_FALSE));
			break;
		//60 FPS
		case 285:
			Features::Miscellaneous.CheckBox_60Fps((boolean != JNI_FALSE));
			break;
		//Speedhack
		case 286:
			Features::Miscellaneous.SetInputValue_Speedhack((int)value);
			break;
		//Speedhack
		case 287:
			Features::Miscellaneous.Toggle_Speedhack((boolean != JNI_FALSE));
			break;

		//Collapse Ban Player

		//Player ID
		case 288:
			Features::Miscellaneous.BanPlayer_SetInputValue_PlayerId((int)value);
			break;
		//Ban Player
		case 289:
			Features::Miscellaneous.BanPlayer_Button_BanPlayer();
			break;

	}
    updatehooksready = true;
}

__attribute__((constructor))
void lib_main() {
	// Create a new thread so it does not block the main thread, means the game would not freeze
	//pthread_t ptid;
	//pthread_create(&ptid, NULL, hack_thread, NULL);
}

int RegisterMenu(JNIEnv *env) {
	JNINativeMethod methods[] = {
			{OBFUSCATE("Icon"), OBFUSCATE("()Ljava/lang/String;"), reinterpret_cast<void *>(Icon)},
			{OBFUSCATE("IconWebViewData"),  OBFUSCATE("()Ljava/lang/String;"), reinterpret_cast<void *>(IconWebViewData)},
			{OBFUSCATE("IsGameLibLoaded"),  OBFUSCATE("()Z"), reinterpret_cast<void *>(isGameLibLoaded)},
			{OBFUSCATE("Init"),  OBFUSCATE("(Landroid/content/Context;Landroid/widget/TextView;Landroid/widget/TextView;)V"), reinterpret_cast<void *>(Init)},
			{OBFUSCATE("SettingsList"),  OBFUSCATE("()[Ljava/lang/String;"), reinterpret_cast<void *>(SettingsList)},
			{OBFUSCATE("GetFeatureList"),  OBFUSCATE("()[Ljava/lang/String;"), reinterpret_cast<void *>(GetFeatureList)},
	};

	jclass clazz = env->FindClass(OBFUSCATE("com/android/support/Menu"));
	if (!clazz)
		return JNI_ERR;
	if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
		return JNI_ERR;
	return JNI_OK;
}

int RegisterPreferences(JNIEnv *env) {
	JNINativeMethod methods[] = {
			{OBFUSCATE("Changes"), OBFUSCATE("(Landroid/content/Context;ILjava/lang/String;IZLjava/lang/String;)V"), reinterpret_cast<void *>(Changes)},
	};
	jclass clazz = env->FindClass(OBFUSCATE("com/android/support/Preferences"));
	if (!clazz)
		return JNI_ERR;
	if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
		return JNI_ERR;
	return JNI_OK;
}

int RegisterMain(JNIEnv *env) {
	JNINativeMethod methods[] = {
			{OBFUSCATE("CheckOverlayPermission"), OBFUSCATE("(Landroid/content/Context;)V"), reinterpret_cast<void *>(CheckOverlayPermission)},
	};
	jclass clazz = env->FindClass(OBFUSCATE("com/android/support/Main"));
	if (!clazz)
		return JNI_ERR;
	if (env->RegisterNatives(clazz, methods, sizeof(methods) / sizeof(methods[0])) != 0)
		return JNI_ERR;

	return JNI_OK;
}

extern "C"
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
	JNIEnv *env;
	vm->GetEnv((void **) &env, JNI_VERSION_1_6);
	if (RegisterMenu(env) != 0)
		return JNI_ERR;
	if (RegisterPreferences(env) != 0)
		return JNI_ERR;
	if (RegisterMain(env) != 0)
		return JNI_ERR;
	return JNI_VERSION_1_6;
}