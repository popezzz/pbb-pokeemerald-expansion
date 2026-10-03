MitisTown_Lab_MapScripts::
# 2 "data/maps/MitisTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/MitisTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 21 "data/maps/MitisTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 1
	goto_if_eq MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 2
	goto_if_eq MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 0
# 5 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 6 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
# 7 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
	return

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/MitisTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 11 "data/maps/MitisTown_Lab/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
# 12 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
	return

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/MitisTown_Lab/scripts.pory"
	map_script_2 VAR_LITTLEROOT_TOWN_STATE, 2, MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 17 "data/maps/MitisTown_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/MitisTown_Lab/scripts.pory"
	map_script_2 VAR_LITTLEROOT_TOWN_STATE, 2, MitisTown_Lab_StarterChoiceIntro
	.2byte 0


MitisTown_Lab_StarterChoiceIntro::
# 29 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 30 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_WalkToCypress
# 31 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 32 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 33 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_CypressIntro, MSGBOX_AUTOCLOSE
# 34 "data/maps/MitisTown_Lab/scripts.pory"
	waitmessage
# 35 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_WalkToTable
# 36 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 37 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 1
# 38 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 39 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_ObtainPokedex::
# 43 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 44 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_CypressGivePokedex, MSGBOX_NPC
# 45 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 46 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_ObtainPokedex_Text_0
# 47 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 48 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 49 "data/maps/MitisTown_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 50 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 51 "data/maps/MitisTown_Lab/scripts.pory"
	special EnableNationalPokedex
# 52 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_PokedexObtained, MSGBOX_NPC
# 53 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_CypressGoodLuck
# 54 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
# 55 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_RivalBattle
	return


MitisTown_Lab_RivalBattle::
# 59 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_RivalBattle_Movement_0
# 61 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 63 "data/maps/MitisTown_Lab/scripts.pory"
	playse SE_PIN
# 64 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_RivalBattle_Movement_1
# 65 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 66 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_RivalBattle_Text_0, MSGBOX_NPC
# 67 "data/maps/MitisTown_Lab/scripts.pory"
	closemessage
# 69 "data/maps/MitisTown_Lab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 70 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_RivalBattle_Movement_2
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_RivalBattle_Movement_3
# 72 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 74 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 75 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeBattleIntro, MSGBOX_NPC
# 76 "data/maps/MitisTown_Lab/scripts.pory"
	trainerbattle_no_intro TRAINER_JAKE_MITIS_LAB, MitisTown_Lab_JakeBattleOutro
# 77 "data/maps/MitisTown_Lab/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 78 "data/maps/MitisTown_Lab/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakePostBattle
# 80 "data/maps/MitisTown_Lab/scripts.pory"
	special HealPlayerParty
# 81 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return


MitisTown_Lab_Trigger_ChooseStarter_1::
# 85 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 86 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_1_Movement_0
# 88 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 89 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_Trigger_ChooseStarter_2::
# 93 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 94 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 95 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_2_Movement_0
# 96 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 97 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_Trigger_ChooseStarter_3::
# 101 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 102 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 103 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_3_Movement_0
# 104 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 105 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_GrassBall::
# 109 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 110 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 111 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_GrassBall_3
# 113 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_GrassBall_4
# 119 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_GrassBall_5
MitisTown_Lab_EventScript_GrassBall_5:
# 121 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_GrassBall_1:
# 123 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_GrassBall_3:
# 112 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_GrassBall_1

MitisTown_Lab_EventScript_GrassBall_4:
# 114 "data/maps/MitisTown_Lab/scripts.pory"
	call GrassStarterChoice
# 115 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_GrassToCypress
# 116 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 117 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 118 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_GrassBall_1


MitisTown_Lab_EventScript_FireBall::
# 127 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 128 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 129 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_FireBall_3
# 131 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_FireBall_4
# 137 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_FireBall_5
MitisTown_Lab_EventScript_FireBall_5:
# 139 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_FireBall_1:
# 141 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_FireBall_3:
# 130 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_FireBall_1

MitisTown_Lab_EventScript_FireBall_4:
# 132 "data/maps/MitisTown_Lab/scripts.pory"
	call FireStarterChoice
# 133 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_FireToCypress
# 134 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 135 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 136 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_FireBall_1


MitisTown_Lab_EventScript_WaterBall::
# 145 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 146 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 147 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_WaterBall_3
# 149 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_WaterBall_4
# 155 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_WaterBall_5
MitisTown_Lab_EventScript_WaterBall_5:
# 157 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_WaterBall_1:
# 159 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_WaterBall_3:
# 148 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_WaterBall_1

MitisTown_Lab_EventScript_WaterBall_4:
# 150 "data/maps/MitisTown_Lab/scripts.pory"
	call WaterStarterChoice
# 151 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_WaterToCypress
# 152 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 153 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 154 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_WaterBall_1


StarterFade::
# 163 "data/maps/MitisTown_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 164 "data/maps/MitisTown_Lab/scripts.pory"
	delay 20
# 165 "data/maps/MitisTown_Lab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NicknamePartyMon::
# 170 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 171 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 172 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 173 "data/maps/MitisTown_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 174 "data/maps/MitisTown_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


GrassStarterChoice::
# 179 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 180 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, GrassStarterChoice_3
# 207 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, GrassStarterChoice_4
# 234 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, GrassStarterChoice_5
# 261 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, GrassStarterChoice_6
# 288 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, GrassStarterChoice_7
# 315 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, GrassStarterChoice_8
# 342 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, GrassStarterChoice_9
# 369 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, GrassStarterChoice_10
# 396 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, GrassStarterChoice_11
GrassStarterChoice_11:
# 398 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 399 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 400 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_18, MSGBOX_YESNO
# 401 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_36
# 421 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 422 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
GrassStarterChoice_1:
	return

GrassStarterChoice_3:
# 181 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 182 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 183 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_0, MSGBOX_YESNO
# 184 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_12
# 204 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 205 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_4:
# 208 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 209 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 210 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_4, MSGBOX_YESNO
# 211 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_15
# 231 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 232 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_5:
# 235 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 236 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 237 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_6, MSGBOX_YESNO
# 238 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_18
# 258 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 259 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_6:
# 262 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 263 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 264 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_8, MSGBOX_YESNO
# 265 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_21
# 285 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 286 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_7:
# 289 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 290 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 291 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_10, MSGBOX_YESNO
# 292 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_24
# 312 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 313 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_8:
# 316 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 317 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 318 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_12, MSGBOX_YESNO
# 319 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_27
# 339 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 340 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_9:
# 343 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 344 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 345 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_14, MSGBOX_YESNO
# 346 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_30
# 366 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 367 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_10:
# 370 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 371 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 372 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_16, MSGBOX_YESNO
# 373 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_33
# 393 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 394 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_12:
# 185 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 186 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_40
# 198 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 199 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_39:
# 201 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_15:
# 212 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 213 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_44
# 225 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 226 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_43:
# 228 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_18:
# 239 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 240 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_48
# 252 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 253 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_47:
# 255 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_21:
# 266 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 267 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_52
# 279 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 280 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_51:
# 282 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_24:
# 293 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 294 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_56
# 306 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 307 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_55:
# 309 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_27:
# 320 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 321 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_60
# 333 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 334 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_59:
# 336 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_30:
# 347 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 348 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_64
# 360 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 361 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_63:
# 363 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_33:
# 374 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 375 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_68
# 387 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 388 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_67:
# 390 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_36:
# 402 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 403 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_72
# 415 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 416 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_71:
# 418 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_40:
# 187 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 188 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_1
# 190 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 191 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 192 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 193 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_75
	goto GrassStarterChoice_39

GrassStarterChoice_44:
# 214 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 215 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 216 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_5
# 217 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 218 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 219 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 220 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_77
	goto GrassStarterChoice_43

GrassStarterChoice_48:
# 241 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 242 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 243 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_7
# 244 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 245 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 246 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 247 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_79
	goto GrassStarterChoice_47

GrassStarterChoice_52:
# 268 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 269 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 270 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_9
# 271 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 272 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 273 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 274 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_81
	goto GrassStarterChoice_51

GrassStarterChoice_56:
# 295 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 296 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 297 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_11
# 298 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 299 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 300 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 301 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_83
	goto GrassStarterChoice_55

GrassStarterChoice_60:
# 322 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 323 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 324 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_13
# 325 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 326 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 327 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 328 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_85
	goto GrassStarterChoice_59

GrassStarterChoice_64:
# 349 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 350 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 351 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_15
# 352 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 353 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 354 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 355 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_87
	goto GrassStarterChoice_63

GrassStarterChoice_68:
# 376 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 377 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 378 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_17
# 379 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 380 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 381 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 382 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_89
	goto GrassStarterChoice_67

GrassStarterChoice_72:
# 404 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 405 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 406 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_19
# 407 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 408 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 409 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 410 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_91
	goto GrassStarterChoice_71

GrassStarterChoice_75:
# 194 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_39

GrassStarterChoice_77:
# 221 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_43

GrassStarterChoice_79:
# 248 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_47

GrassStarterChoice_81:
# 275 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_51

GrassStarterChoice_83:
# 302 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_55

GrassStarterChoice_85:
# 329 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_59

GrassStarterChoice_87:
# 356 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_63

GrassStarterChoice_89:
# 383 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_67

GrassStarterChoice_91:
# 411 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_71


FireStarterChoice::
# 429 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 430 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, FireStarterChoice_3
# 457 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, FireStarterChoice_4
# 484 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, FireStarterChoice_5
# 511 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, FireStarterChoice_6
# 538 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, FireStarterChoice_7
# 565 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, FireStarterChoice_8
# 592 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, FireStarterChoice_9
# 619 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, FireStarterChoice_10
# 646 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, FireStarterChoice_11
FireStarterChoice_11:
# 648 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 649 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 650 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_16, MSGBOX_YESNO
# 651 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_36
# 671 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 672 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
FireStarterChoice_1:
	return

FireStarterChoice_3:
# 431 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 432 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 433 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_0, MSGBOX_YESNO
# 434 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_12
# 454 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 455 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_4:
# 458 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 459 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 460 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_2, MSGBOX_YESNO
# 461 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_15
# 481 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 482 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_5:
# 485 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 486 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 487 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_4, MSGBOX_YESNO
# 488 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_18
# 508 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 509 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_6:
# 512 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 513 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 514 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_6, MSGBOX_YESNO
# 515 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_21
# 535 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 536 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_7:
# 539 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 540 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 541 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_8, MSGBOX_YESNO
# 542 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_24
# 562 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 563 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_8:
# 566 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 567 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 568 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_10, MSGBOX_YESNO
# 569 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_27
# 589 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 590 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_9:
# 593 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 594 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 595 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_12, MSGBOX_YESNO
# 596 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_30
# 616 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 617 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_10:
# 620 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 621 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 622 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_14, MSGBOX_YESNO
# 623 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_33
# 643 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 644 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_12:
# 435 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 436 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_40
# 448 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 449 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_39:
# 451 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_15:
# 462 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 463 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_44
# 475 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 476 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_43:
# 478 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_18:
# 489 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 490 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_48
# 502 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 503 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_47:
# 505 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_21:
# 516 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 517 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_52
# 529 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 530 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_51:
# 532 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_24:
# 543 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 544 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_56
# 556 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 557 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_55:
# 559 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_27:
# 570 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 571 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_60
# 583 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 584 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_59:
# 586 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_30:
# 597 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 598 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_64
# 610 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 611 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_63:
# 613 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_33:
# 624 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 625 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_68
# 637 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 638 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_67:
# 640 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_36:
# 652 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 653 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_72
# 665 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 666 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_71:
# 668 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_40:
# 437 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 438 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 439 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_1
# 440 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 441 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 442 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 443 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_75
	goto FireStarterChoice_39

FireStarterChoice_44:
# 464 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 465 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 466 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_3
# 467 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 468 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 469 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 470 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_77
	goto FireStarterChoice_43

FireStarterChoice_48:
# 491 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 492 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 493 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_5
# 494 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 495 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 496 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 497 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_79
	goto FireStarterChoice_47

FireStarterChoice_52:
# 518 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 519 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 520 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_7
# 521 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 522 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 523 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 524 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_81
	goto FireStarterChoice_51

FireStarterChoice_56:
# 545 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 546 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 547 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_9
# 548 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 549 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 550 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 551 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_83
	goto FireStarterChoice_55

FireStarterChoice_60:
# 572 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 573 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 574 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_11
# 575 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 576 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 577 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 578 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_85
	goto FireStarterChoice_59

FireStarterChoice_64:
# 599 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 600 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 601 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_13
# 602 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 603 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 604 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 605 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_87
	goto FireStarterChoice_63

FireStarterChoice_68:
# 626 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 627 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 628 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_15
# 629 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 630 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 631 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 632 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_89
	goto FireStarterChoice_67

FireStarterChoice_72:
# 654 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 655 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 656 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_17
# 657 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 658 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 659 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 660 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_91
	goto FireStarterChoice_71

FireStarterChoice_75:
# 444 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_39

FireStarterChoice_77:
# 471 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_43

FireStarterChoice_79:
# 498 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_47

FireStarterChoice_81:
# 525 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_51

FireStarterChoice_83:
# 552 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_55

FireStarterChoice_85:
# 579 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_59

FireStarterChoice_87:
# 606 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_63

FireStarterChoice_89:
# 633 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_67

FireStarterChoice_91:
# 661 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_71


WaterStarterChoice::
# 679 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 680 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, WaterStarterChoice_3
# 707 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, WaterStarterChoice_4
# 734 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, WaterStarterChoice_5
# 761 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, WaterStarterChoice_6
# 788 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, WaterStarterChoice_7
# 815 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, WaterStarterChoice_8
# 842 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, WaterStarterChoice_9
# 869 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, WaterStarterChoice_10
# 896 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, WaterStarterChoice_11
WaterStarterChoice_11:
# 898 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 899 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 900 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_16, MSGBOX_YESNO
# 901 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_36
# 921 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 922 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
WaterStarterChoice_1:
	return

WaterStarterChoice_3:
# 681 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 682 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 683 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_0, MSGBOX_YESNO
# 684 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_12
# 704 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 705 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_4:
# 708 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 709 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 710 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_2, MSGBOX_YESNO
# 711 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_15
# 731 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 732 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_5:
# 735 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 736 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 737 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_4, MSGBOX_YESNO
# 738 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_18
# 758 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 759 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_6:
# 762 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 763 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 764 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_6, MSGBOX_YESNO
# 765 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_21
# 785 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 786 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_7:
# 789 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 790 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 791 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_8, MSGBOX_YESNO
# 792 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_24
# 812 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 813 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_8:
# 816 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 817 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 818 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_10, MSGBOX_YESNO
# 819 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_27
# 839 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 840 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_9:
# 843 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 844 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 845 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_12, MSGBOX_YESNO
# 846 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_30
# 866 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 867 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_10:
# 870 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 871 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 872 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_14, MSGBOX_YESNO
# 873 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_33
# 893 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 894 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_12:
# 685 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 686 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_40
# 698 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 699 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_39:
# 701 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_15:
# 712 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 713 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_44
# 725 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 726 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_43:
# 728 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_18:
# 739 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 740 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_48
# 752 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 753 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_47:
# 755 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_21:
# 766 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 767 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_52
# 779 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 780 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_51:
# 782 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_24:
# 793 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 794 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_56
# 806 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 807 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_55:
# 809 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_27:
# 820 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 821 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_60
# 833 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 834 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_59:
# 836 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_30:
# 847 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 848 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_64
# 860 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 861 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_63:
# 863 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_33:
# 874 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 875 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_68
# 887 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 888 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_67:
# 890 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_36:
# 902 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 903 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_72
# 915 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 916 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_71:
# 918 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_40:
# 687 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 688 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 689 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_1
# 690 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 691 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 692 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 693 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_75
	goto WaterStarterChoice_39

WaterStarterChoice_44:
# 714 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 715 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 716 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_3
# 717 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 718 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 719 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 720 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_77
	goto WaterStarterChoice_43

WaterStarterChoice_48:
# 741 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 742 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 743 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_5
# 744 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 745 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 746 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 747 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_79
	goto WaterStarterChoice_47

WaterStarterChoice_52:
# 768 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 769 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 770 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_7
# 771 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 772 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 773 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 774 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_81
	goto WaterStarterChoice_51

WaterStarterChoice_56:
# 795 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 796 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 797 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_9
# 798 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 799 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 800 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 801 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_83
	goto WaterStarterChoice_55

WaterStarterChoice_60:
# 822 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 823 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 824 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_11
# 825 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 826 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 827 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 828 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_85
	goto WaterStarterChoice_59

WaterStarterChoice_64:
# 849 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 850 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 851 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_13
# 852 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 853 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 854 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 855 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_87
	goto WaterStarterChoice_63

WaterStarterChoice_68:
# 876 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 877 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 878 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_15
# 879 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 880 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 881 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 882 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_89
	goto WaterStarterChoice_67

WaterStarterChoice_72:
# 904 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 905 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 906 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_17
# 907 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 908 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 909 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 910 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_91
	goto WaterStarterChoice_71

WaterStarterChoice_75:
# 694 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_39

WaterStarterChoice_77:
# 721 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_43

WaterStarterChoice_79:
# 748 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_47

WaterStarterChoice_81:
# 775 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_51

WaterStarterChoice_83:
# 802 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_55

WaterStarterChoice_85:
# 829 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_59

WaterStarterChoice_87:
# 856 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_63

WaterStarterChoice_89:
# 883 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_67

WaterStarterChoice_91:
# 911 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_71


MitisTown_Lab_EventScript_Scientist::
# 932 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 933 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 934 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_MegaEvoDialogue, MSGBOX_AUTOCLOSE
# 935 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement 1, MitisTown_Lab_RivalBattle_Movement_2
# 936 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 937 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_AssistantDave::
# 941 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 942 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 943 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 944 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_AssistantDave_3
# 949 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_AssistantDave_4
# 998 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 999 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_AssistantDave_1:
# 1002 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_ASSISTANT_DAVE, MitisTown_Lab_EventScript_AssistantDave_Movement_0
# 1003 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 1004 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_AssistantDave_3:
# 945 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 946 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_NPC
# 947 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 948 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChooseForFree, MSGBOX_NPC
	goto MitisTown_Lab_EventScript_AssistantDave_1

MitisTown_Lab_EventScript_AssistantDave_4:
# 950 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 951 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChangeStarters
# 952 "data/maps/MitisTown_Lab/scripts.pory"
	dynmultichoice 25, 5, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MitisTown_Lab_EventScript_AssistantDave_Text_1, MitisTown_Lab_EventScript_AssistantDave_Text_2, MitisTown_Lab_EventScript_AssistantDave_Text_3, MitisTown_Lab_EventScript_AssistantDave_Text_4, MitisTown_Lab_EventScript_AssistantDave_Text_5, MitisTown_Lab_EventScript_AssistantDave_Text_6, MitisTown_Lab_EventScript_AssistantDave_Text_7, MitisTown_Lab_EventScript_AssistantDave_Text_8, MitisTown_Lab_EventScript_AssistantDave_Text_9
# 963 "data/maps/MitisTown_Lab/scripts.pory"
	closemessage
# 964 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_RESULT
# 965 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_AssistantDave_8
# 968 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_AssistantDave_9
# 971 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, MitisTown_Lab_EventScript_AssistantDave_10
# 974 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, MitisTown_Lab_EventScript_AssistantDave_11
# 977 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, MitisTown_Lab_EventScript_AssistantDave_12
# 980 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, MitisTown_Lab_EventScript_AssistantDave_13
# 983 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, MitisTown_Lab_EventScript_AssistantDave_14
# 986 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, MitisTown_Lab_EventScript_AssistantDave_15
# 989 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_AssistantDave_16
MitisTown_Lab_EventScript_AssistantDave_16:
# 991 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 992 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
MitisTown_Lab_EventScript_AssistantDave_6:
# 994 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 995 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_AssistantDave_Text_10, MSGBOX_NPC
# 996 "data/maps/MitisTown_Lab/scripts.pory"
	waitmessage
	goto MitisTown_Lab_EventScript_AssistantDave_1

MitisTown_Lab_EventScript_AssistantDave_8:
# 966 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 967 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_9:
# 969 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 970 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_10:
# 972 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 973 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 3
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_11:
# 975 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 976 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 4
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_12:
# 978 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 979 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 5
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_13:
# 981 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 982 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 6
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_14:
# 984 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 985 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 7
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_15:
# 987 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 988 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 8
	goto MitisTown_Lab_EventScript_AssistantDave_6


MitisTown_Lab_EventScript_Jake::
# 1008 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 1009 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 1010 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_Jake_Text_0
# 1011 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeIntro, MSGBOX_NPC
# 1012 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_EventScript_Jake_Movement_0
# 1013 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 1014 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


# 1104 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WalkToCypress:
# 1105 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1109 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WalkToTable:
# 1110 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 1111 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1112 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
# 1113 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1113 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1113 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1114 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
	step_end

# 1117 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_GrassToCypress:
# 1118 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1119 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1119 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1120 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1121 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1124 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_FireToCypress:
# 1125 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1126 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1126 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1126 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1127 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1128 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1131 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WaterToCypress:
# 1132 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1133 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1133 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1133 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1133 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1134 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1135 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_RivalBattle_Movement_0:
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 60 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
	step_end

# 64 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_RivalBattle_Movement_1:
# 64 "data/maps/MitisTown_Lab/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/MitisTown_Lab/scripts.pory"
	delay_16
# 64 "data/maps/MitisTown_Lab/scripts.pory"
	delay_16
	step_end

# 70 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_RivalBattle_Movement_2:
# 70 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
	step_end

# 71 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_RivalBattle_Movement_3:
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	walk_fast_left
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	walk_fast_left
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	walk_fast_left
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	walk_fast_down
# 71 "data/maps/MitisTown_Lab/scripts.pory"
	walk_fast_down
	step_end

# 87 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_1_Movement_0:
# 87 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 87 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 95 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_2_Movement_0:
# 95 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 95 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_3_Movement_0:
# 103 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
# 103 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
	step_end

# 1002 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_AssistantDave_Movement_0:
# 1002 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
	step_end

# 1012 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_Jake_Movement_0:
# 1012 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
	step_end

MitisTown_Lab_StarterChoiceIntro_Text_0:
# 32 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Prof. Cypress$"

MitisTown_Lab_ObtainPokedex_Text_0:
# 46 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Obtained the Pokédex!$"

MitisTown_Lab_RivalBattle_Text_0:
# 66 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_JAKE}Hey, {PLAYER}, wait up!$"

MitisTown_Lab_Trigger_ChooseStarter_1_Text_0:
# 86 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Don't leave without choosing your\nPokémon!$"

MitisTown_Lab_EventScript_GrassBall_Text_0:
# 112 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I should wait...$"

MitisTown_Lab_EventScript_GrassBall_Text_1:
# 121 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I shouldn't take another, for now.$"

NicknamePartyMon_Text_0:
# 170 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Give it a nickname?$"

GrassStarterChoice_Text_0:
# 183 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chikorita, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_1:
# 189 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chikorita!$"

GrassStarterChoice_Text_2:
# 199 "data/maps/MitisTown_Lab/scripts.pory"
	.string "No more room in party.$"

GrassStarterChoice_Text_3:
# 205 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Take your time.$"

GrassStarterChoice_Text_4:
# 210 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Treecko, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_5:
# 216 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Treecko!$"

GrassStarterChoice_Text_6:
# 237 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Turtwig, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_7:
# 243 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Turtwig!$"

GrassStarterChoice_Text_8:
# 264 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Snivy, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_9:
# 270 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Snivy!$"

GrassStarterChoice_Text_10:
# 291 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chespin, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_11:
# 297 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chespin!$"

GrassStarterChoice_Text_12:
# 318 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Rowlet, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_13:
# 324 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Rowlet!$"

GrassStarterChoice_Text_14:
# 345 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Grookey, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_15:
# 351 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Grookey!$"

GrassStarterChoice_Text_16:
# 372 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Sprigatito, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_17:
# 378 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Sprigatito!$"

GrassStarterChoice_Text_18:
# 400 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Bulbasaur, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_19:
# 406 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Bulbasaur!$"

FireStarterChoice_Text_0:
# 433 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Cindaquil, the\nFire type Pokémon?$"

FireStarterChoice_Text_1:
# 439 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Cyndaquil!$"

FireStarterChoice_Text_2:
# 460 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Torchic, the\nFire type Pokémon?$"

FireStarterChoice_Text_3:
# 466 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Torchic!$"

FireStarterChoice_Text_4:
# 487 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chimchar, the\nFire type Pokémon?$"

FireStarterChoice_Text_5:
# 493 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chimchar!$"

FireStarterChoice_Text_6:
# 514 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Tepig, the\nFire type Pokémon?$"

FireStarterChoice_Text_7:
# 520 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Tepig!$"

FireStarterChoice_Text_8:
# 541 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Fennekin, the\nFire type Pokémon?$"

FireStarterChoice_Text_9:
# 547 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Fennekin!$"

FireStarterChoice_Text_10:
# 568 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Litten, the\nFire type Pokémon?$"

FireStarterChoice_Text_11:
# 574 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Litten!$"

FireStarterChoice_Text_12:
# 595 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Scorbunny, the\nFire type Pokémon?$"

FireStarterChoice_Text_13:
# 601 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Scorbunny!$"

FireStarterChoice_Text_14:
# 622 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Fuecoco, the\nFire type Pokémon?$"

FireStarterChoice_Text_15:
# 628 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Fuecoco!$"

FireStarterChoice_Text_16:
# 650 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Charmander, the\nFire type Pokémon?$"

FireStarterChoice_Text_17:
# 656 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Charmander!$"

WaterStarterChoice_Text_0:
# 683 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Totodile, the\nWater type Pokémon?$"

WaterStarterChoice_Text_1:
# 689 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Totodile!$"

WaterStarterChoice_Text_2:
# 710 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Mudkip, the\nWater type Pokémon?$"

WaterStarterChoice_Text_3:
# 716 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Mudkip!$"

WaterStarterChoice_Text_4:
# 737 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Piplup, the\nWater type Pokémon?$"

WaterStarterChoice_Text_5:
# 743 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Piplup!$"

WaterStarterChoice_Text_6:
# 764 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Oshawott, the\nWater type Pokémon?$"

WaterStarterChoice_Text_7:
# 770 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Oshawott!$"

WaterStarterChoice_Text_8:
# 791 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Froakie, the\nWater type Pokémon?$"

WaterStarterChoice_Text_9:
# 797 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Froakie!$"

WaterStarterChoice_Text_10:
# 818 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Popplio, the\nWater type Pokémon?$"

WaterStarterChoice_Text_11:
# 824 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Popplio!$"

WaterStarterChoice_Text_12:
# 845 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Sobble, the\nWater type Pokémon?$"

WaterStarterChoice_Text_13:
# 851 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Sobble!$"

WaterStarterChoice_Text_14:
# 872 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Quaxly, the\nWater type Pokémon?$"

WaterStarterChoice_Text_15:
# 878 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Quaxly!$"

WaterStarterChoice_Text_16:
# 900 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Squirtle, the\nWater type Pokémon?$"

WaterStarterChoice_Text_17:
# 906 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Squirtle!$"

MitisTown_Lab_EventScript_AssistantDave_Text_0:
# 945 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Dave$"

MitisTown_Lab_EventScript_AssistantDave_Text_1:
# 953 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Kanto$"

MitisTown_Lab_EventScript_AssistantDave_Text_2:
# 954 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Johto$"

MitisTown_Lab_EventScript_AssistantDave_Text_3:
# 955 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Hoenn$"

MitisTown_Lab_EventScript_AssistantDave_Text_4:
# 956 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Sinnoh$"

MitisTown_Lab_EventScript_AssistantDave_Text_5:
# 957 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Unova$"

MitisTown_Lab_EventScript_AssistantDave_Text_6:
# 958 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Kalos$"

MitisTown_Lab_EventScript_AssistantDave_Text_7:
# 959 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Alola$"

MitisTown_Lab_EventScript_AssistantDave_Text_8:
# 960 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Galar$"

MitisTown_Lab_EventScript_AssistantDave_Text_9:
# 961 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Paldea$"

MitisTown_Lab_EventScript_AssistantDave_Text_10:
# 995 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Choose Wisely.$"

MitisTown_Lab_EventScript_Jake_Text_0:
# 1010 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Jake$"

MitisTown_Lab_MegaEvoDialogue::
# 1019 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I'm researching Mega Evolution.\p"
	.string "Such a wonderful and mysterious phenomena...\p"
	.string "I've had the opportunity to\ntalk with Professor Sycamore from\lthe Kalos region about it.$"

MitisTown_Lab_DaveInfo::
# 1025 "data/maps/MitisTown_Lab/scripts.pory"
	.string "The professor gives trainers a\nrare Pokémon every 20 species they\lregister on the Pokédex.$"

MitisTown_Lab_DaveChangeStarters::
# 1029 "data/maps/MitisTown_Lab/scripts.pory"
	.string "What region would you like to choose?$"

MitisTown_Lab_JakeIntro::
# 1033 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Professor Cypress should be here\nany minute now, so go check your\lparents.\p"
	.string "Your parents are at the digging\nsite.$"

MitisTown_Lab_DaveChooseForFree::
# 1038 "data/maps/MitisTown_Lab/scripts.pory"
	.string "For this occasion though, you'll\nget one for free!$"

MitisTown_Lab_CypressIntro::
# 1042 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Hello, My name is Professor Cypress.\n"
	.string "I am the new professor in Mitis Town.\p"
	.string "I'll bet you're {PLAYER}. Your parents\n"
	.string "were just telling me about you.\p"
	.string "You must be very excited to get your\n"
	.string "first Pokémon today.\p"
	.string "There are a few things you must know\n"
	.string "about Pokémon first.\p"
	.string "Pokémon are our friends, and we grow\n"
	.string "alongside them. They grow, and in\l"
	.string "some cases evolve and change form, as\l"
	.string "we battle with them.\p"
	.string "Your Pokémon will grow to love you as\n"
	.string "you adventure with them.\p"
	.string "There are still lots of things we do not\n"
	.string "fully know about Pokémon.\p"
	.string "{PLAYER}, I want you now to pick a\n"
	.string "Pokémon that will accompany you on your\l"
	.string "adventures.\p"
	.string "Make a choice between one of these 27\n"
	.string "different species. Talk to my assistant\l"
	.string "Dave if you want to see species from\l"
	.string "other regions.\p"
	.string "Go ahead now.$"

MitisTown_Lab_CypressGivePokedex::
# 1069 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}Excellent choice, {PLAYER}!\p"
	.string "{SPEAKER NAME_MOM}Your new Pokémon is so cute!\p"
	.string "{SPEAKER NAME_DAD}That definitely has battle potential!\p"
	.string "{SPEAKER NAME_JAKE}I hope you and your Pokémon become best\nfriends like we are!\p"
	.string "{SPEAKER NAME_CYPRESS}Alright, {PLAYER}, many challenges await\nyou.\pLet me give you one more gift that will\nhelp you along your way\p"
	.string "{SPEAKER NAME_CYPRESS}It's a Pokédex.\pIt's an electronic encyclopedia that\nrecords the kinds of Pokémon you\lencounter and capture.\p"
	.string "{SPEAKER NAME_CYPRESS}Not only that, you'll also help the lab's\nresearch efforts!$"

MitisTown_Lab_PokedexObtained::
# 1079 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}Also, once every 20 species of Pokémon\nyou register on the Pokédex, you can\lcome back here and get another one of \lthese rare Pokémon for free!\l"
	.string "{SPEAKER NAME_CYPRESS}Be sure to check it out!\p"
	.string "{SPEAKER NAME_CYPRESS}Now, what are you waiting for?\pGo and explore the world of Pokémon!\p"
	.string "{SPEAKER NAME_DAD}That's right, {PLAYER}. Go ahead and have\nfun with your new Pokémon.\pWe need to stay behind and talk to the\nprofessor for a minute.\pWe'll meet up with you later.$"

MitisTown_Lab_CypressGoodLuck::
# 1086 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}I wish you best of luck on your journey,\n{PLAYER}!$"

MitisTown_Lab_JakeBattleIntro::
# 1090 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_JAKE}We have Pokémon now!\pLET'S BATTLE!!$"

MitisTown_Lab_JakeBattleOutro::
# 1094 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Amazing!$"

MitisTown_Lab_JakePostBattle::
# 1098 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Nice fighting!\pHere, let me heal your Pokémon.$"
