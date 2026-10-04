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
# 83 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_BronzeBrick
	return


MitisTown_Lab_BronzeBrick::
# 87 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 88 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_MOM, MitisLab_ParentsToPlayer
# 89 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_DAD, MitisLab_ParentsToPlayer
# 90 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 91 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_BronzeBrick_Movement_0
# 92 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_BronzeBrick_Movement_0
# 93 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 94 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_ParentsGiveBronzeBrick
# 95 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 96 "data/maps/MitisTown_Lab/scripts.pory"
	additem ITEM_BRONZE_BRICK, 1
# 97 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_BronzeBrick_Text_0
# 98 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 99 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_BronzeBrick_Text_1
# 100 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_ParentsLeave
# 101 "data/maps/MitisTown_Lab/scripts.pory"
	closemessage
# 102 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_DAD, MitisLab_ParentsWalkAway
# 103 "data/maps/MitisTown_Lab/scripts.pory"
	delay 5
# 104 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_MOM, MitisLab_ParentsWalkAway
# 105 "data/maps/MitisTown_Lab/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_MOM, MitisTown_Lab_BronzeBrick_Movement_1
# 107 "data/maps/MitisTown_Lab/scripts.pory"
	playse SE_EXIT
# 108 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 109 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject MITIS_LAB_ID_DAD
# 110 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject MITIS_LAB_ID_MOM
# 111 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
# 113 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_RivalBattle_Movement_2
# 114 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_BronzeBrick_Movement_2
# 115 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeGivePokeballs
# 116 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 117 "data/maps/MitisTown_Lab/scripts.pory"
	additem ITEM_POKE_BALL, 5
# 118 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_BronzeBrick_Text_2
# 120 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 121 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_BronzeBrick_Text_3
# 122 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeLeave
# 123 "data/maps/MitisTown_Lab/scripts.pory"
	closemessage
# 124 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisLab_JakeWalkAway
# 125 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 126 "data/maps/MitisTown_Lab/scripts.pory"
	playse SE_EXIT
# 127 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject MITIS_LAB_ID_JAKE
# 128 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 130 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 131 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_Trigger_ChooseStarter_1::
# 135 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 136 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 137 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_1_Movement_0
# 138 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 139 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_Trigger_ChooseStarter_2::
# 143 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 144 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 145 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_2_Movement_0
# 146 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 147 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_Trigger_ChooseStarter_3::
# 151 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 152 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_Trigger_ChooseStarter_1_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisTown_Lab_Trigger_ChooseStarter_3_Movement_0
# 154 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 155 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_GrassBall::
# 159 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 160 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 161 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_GrassBall_3
# 163 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_GrassBall_4
# 171 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_GrassBall_5
MitisTown_Lab_EventScript_GrassBall_5:
# 173 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_GrassBall_1:
# 175 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_GrassBall_3:
# 162 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_GrassBall_1

MitisTown_Lab_EventScript_GrassBall_4:
# 164 "data/maps/MitisTown_Lab/scripts.pory"
	call GrassStarterChoice
# 165 "data/maps/MitisTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MitisTown_Lab_EventScript_GrassBall_6
	goto MitisTown_Lab_EventScript_GrassBall_1

MitisTown_Lab_EventScript_GrassBall_6:
# 166 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_GrassToCypress
# 167 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 168 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 169 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_GrassBall_1


MitisTown_Lab_EventScript_FireBall::
# 179 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 180 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 181 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_FireBall_3
# 183 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_FireBall_4
# 191 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_FireBall_5
MitisTown_Lab_EventScript_FireBall_5:
# 193 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_FireBall_1:
# 195 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_FireBall_3:
# 182 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_FireBall_1

MitisTown_Lab_EventScript_FireBall_4:
# 184 "data/maps/MitisTown_Lab/scripts.pory"
	call FireStarterChoice
# 185 "data/maps/MitisTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MitisTown_Lab_EventScript_FireBall_6
	goto MitisTown_Lab_EventScript_FireBall_1

MitisTown_Lab_EventScript_FireBall_6:
# 186 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_FireToCypress
# 187 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 188 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 189 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_FireBall_1


MitisTown_Lab_EventScript_WaterBall::
# 199 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 200 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 201 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_WaterBall_3
# 203 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_WaterBall_4
# 211 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_WaterBall_5
MitisTown_Lab_EventScript_WaterBall_5:
# 213 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_1, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_WaterBall_1:
# 215 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_WaterBall_3:
# 202 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_GrassBall_Text_0, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_WaterBall_1

MitisTown_Lab_EventScript_WaterBall_4:
# 204 "data/maps/MitisTown_Lab/scripts.pory"
	call WaterStarterChoice
# 205 "data/maps/MitisTown_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, MitisTown_Lab_EventScript_WaterBall_6
	goto MitisTown_Lab_EventScript_WaterBall_1

MitisTown_Lab_EventScript_WaterBall_6:
# 206 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MitisLab_WaterToCypress
# 207 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 208 "data/maps/MitisTown_Lab/scripts.pory"
	release
# 209 "data/maps/MitisTown_Lab/scripts.pory"
	goto MitisTown_Lab_ObtainPokedex
	goto MitisTown_Lab_EventScript_WaterBall_1


StarterFade::
# 219 "data/maps/MitisTown_Lab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/MitisTown_Lab/scripts.pory"
	delay 20
# 221 "data/maps/MitisTown_Lab/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


NicknamePartyMon::
# 226 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 227 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 228 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 229 "data/maps/MitisTown_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 230 "data/maps/MitisTown_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


GrassStarterChoice::
# 235 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 236 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, GrassStarterChoice_3
# 263 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, GrassStarterChoice_4
# 290 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, GrassStarterChoice_5
# 317 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, GrassStarterChoice_6
# 344 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, GrassStarterChoice_7
# 371 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, GrassStarterChoice_8
# 398 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, GrassStarterChoice_9
# 425 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, GrassStarterChoice_10
# 452 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, GrassStarterChoice_11
GrassStarterChoice_11:
# 454 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 455 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 456 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_18, MSGBOX_YESNO
# 457 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_36
# 477 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 478 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
GrassStarterChoice_1:
	return

GrassStarterChoice_3:
# 237 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 238 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 239 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_0, MSGBOX_YESNO
# 240 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_12
# 260 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 261 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_4:
# 264 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 265 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 266 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_4, MSGBOX_YESNO
# 267 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_15
# 287 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 288 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_5:
# 291 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 292 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 293 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_6, MSGBOX_YESNO
# 294 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_18
# 314 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 315 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_6:
# 318 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SNIVY, 10, 3
# 319 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 320 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_8, MSGBOX_YESNO
# 321 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_21
# 341 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 342 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_7:
# 345 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 346 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 347 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_10, MSGBOX_YESNO
# 348 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_24
# 368 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 369 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_8:
# 372 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_ROWLET, 10, 3
# 373 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 374 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_12, MSGBOX_YESNO
# 375 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_27
# 395 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 396 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_9:
# 399 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_GROOKEY, 10, 3
# 400 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 401 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_14, MSGBOX_YESNO
# 402 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_30
# 422 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 423 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_10:
# 426 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SPRIGATITO, 10, 3
# 427 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 428 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_16, MSGBOX_YESNO
# 429 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GrassStarterChoice_33
# 449 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 450 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto GrassStarterChoice_1

GrassStarterChoice_12:
# 241 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5
# 242 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_40
# 254 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 255 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_39:
# 257 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_15:
# 268 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TREECKO, 5
# 269 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_44
# 281 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 282 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_43:
# 284 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_18:
# 295 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 296 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_48
# 308 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 309 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_47:
# 311 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_21:
# 322 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SNIVY, 5
# 323 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_52
# 335 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 336 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_51:
# 338 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_24:
# 349 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 350 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_56
# 362 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 363 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_55:
# 365 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_27:
# 376 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_ROWLET, 5
# 377 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_60
# 389 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 390 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_59:
# 392 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_30:
# 403 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_GROOKEY, 5
# 404 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_64
# 416 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 417 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_63:
# 419 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_33:
# 430 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SPRIGATITO, 5
# 431 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_68
# 443 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 444 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_67:
# 446 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_36:
# 458 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_BULBASAUR, 5
# 459 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GrassStarterChoice_72
# 471 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 472 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
GrassStarterChoice_71:
# 474 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto GrassStarterChoice_1

GrassStarterChoice_40:
# 243 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 244 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_1
# 246 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 247 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 248 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 249 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_75
	goto GrassStarterChoice_39

GrassStarterChoice_44:
# 270 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 271 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_5
# 273 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 274 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 275 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 276 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_77
	goto GrassStarterChoice_43

GrassStarterChoice_48:
# 297 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 298 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 299 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_7
# 300 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 301 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 302 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 303 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_79
	goto GrassStarterChoice_47

GrassStarterChoice_52:
# 324 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 325 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 326 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_9
# 327 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 328 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 329 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 330 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_81
	goto GrassStarterChoice_51

GrassStarterChoice_56:
# 351 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 352 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 353 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_11
# 354 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 355 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 356 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 357 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_83
	goto GrassStarterChoice_55

GrassStarterChoice_60:
# 378 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 379 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_13
# 381 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 382 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 383 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 384 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_85
	goto GrassStarterChoice_59

GrassStarterChoice_64:
# 405 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 406 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 407 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_15
# 408 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 409 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 410 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 411 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_87
	goto GrassStarterChoice_63

GrassStarterChoice_68:
# 432 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 433 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 434 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_17
# 435 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 436 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 437 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 438 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_89
	goto GrassStarterChoice_67

GrassStarterChoice_72:
# 460 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 461 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 462 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_19
# 463 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 464 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 7
# 465 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 466 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq GrassStarterChoice_91
	goto GrassStarterChoice_71

GrassStarterChoice_75:
# 250 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_39

GrassStarterChoice_77:
# 277 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_43

GrassStarterChoice_79:
# 304 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_47

GrassStarterChoice_81:
# 331 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_51

GrassStarterChoice_83:
# 358 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_55

GrassStarterChoice_85:
# 385 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_59

GrassStarterChoice_87:
# 412 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_63

GrassStarterChoice_89:
# 439 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_67

GrassStarterChoice_91:
# 467 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto GrassStarterChoice_71


FireStarterChoice::
# 485 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 486 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, FireStarterChoice_3
# 513 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, FireStarterChoice_4
# 540 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, FireStarterChoice_5
# 567 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, FireStarterChoice_6
# 594 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, FireStarterChoice_7
# 621 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, FireStarterChoice_8
# 648 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, FireStarterChoice_9
# 675 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, FireStarterChoice_10
# 702 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, FireStarterChoice_11
FireStarterChoice_11:
# 704 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 705 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 706 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_16, MSGBOX_YESNO
# 707 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_36
# 727 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 728 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
FireStarterChoice_1:
	return

FireStarterChoice_3:
# 487 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 488 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 489 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_0, MSGBOX_YESNO
# 490 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_12
# 510 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 511 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_4:
# 514 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 515 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 516 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_2, MSGBOX_YESNO
# 517 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_15
# 537 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 538 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_5:
# 541 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_CHIMCHAR, 10, 3
# 542 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 543 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_4, MSGBOX_YESNO
# 544 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_18
# 564 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 565 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_6:
# 568 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TEPIG, 10, 3
# 569 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 570 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_6, MSGBOX_YESNO
# 571 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_21
# 591 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 592 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_7:
# 595 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 596 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 597 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_8, MSGBOX_YESNO
# 598 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_24
# 618 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 619 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_8:
# 622 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_LITTEN, 10, 3
# 623 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 624 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_10, MSGBOX_YESNO
# 625 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_27
# 645 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 646 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_9:
# 649 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SCORBUNNY, 10, 3
# 650 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 651 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_12, MSGBOX_YESNO
# 652 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_30
# 672 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 673 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_10:
# 676 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 677 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 678 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_14, MSGBOX_YESNO
# 679 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FireStarterChoice_33
# 699 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 700 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto FireStarterChoice_1

FireStarterChoice_12:
# 491 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5
# 492 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_40
# 504 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 505 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_39:
# 507 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_15:
# 518 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 519 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_44
# 531 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 532 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_43:
# 534 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_18:
# 545 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHIMCHAR, 5
# 546 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_48
# 558 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 559 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_47:
# 561 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_21:
# 572 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TEPIG, 5
# 573 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_52
# 585 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 586 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_51:
# 588 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_24:
# 599 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 600 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_56
# 612 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 613 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_55:
# 615 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_27:
# 626 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_LITTEN, 5
# 627 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_60
# 639 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 640 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_59:
# 642 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_30:
# 653 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SCORBUNNY, 5
# 654 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_64
# 666 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 667 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_63:
# 669 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_33:
# 680 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FUECOCO, 5
# 681 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_68
# 693 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 694 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_67:
# 696 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_36:
# 708 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 709 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq FireStarterChoice_72
# 721 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 722 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
FireStarterChoice_71:
# 724 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto FireStarterChoice_1

FireStarterChoice_40:
# 493 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 494 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 495 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_1
# 496 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 497 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 498 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 499 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_75
	goto FireStarterChoice_39

FireStarterChoice_44:
# 520 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 521 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 522 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_3
# 523 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 524 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 525 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 526 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_77
	goto FireStarterChoice_43

FireStarterChoice_48:
# 547 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 548 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 549 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_5
# 550 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 551 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 552 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 553 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_79
	goto FireStarterChoice_47

FireStarterChoice_52:
# 574 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 575 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 576 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_7
# 577 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 578 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 579 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 580 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_81
	goto FireStarterChoice_51

FireStarterChoice_56:
# 601 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 602 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 603 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_9
# 604 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 605 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 606 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 607 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_83
	goto FireStarterChoice_55

FireStarterChoice_60:
# 628 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 629 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 630 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_11
# 631 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 632 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 633 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 634 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_85
	goto FireStarterChoice_59

FireStarterChoice_64:
# 655 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 656 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_13
# 658 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 659 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 660 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 661 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_87
	goto FireStarterChoice_63

FireStarterChoice_68:
# 682 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 683 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 684 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_15
# 685 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 686 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 687 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 688 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_89
	goto FireStarterChoice_67

FireStarterChoice_72:
# 710 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 711 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 712 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox FireStarterChoice_Text_17
# 713 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 714 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 8
# 715 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 716 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq FireStarterChoice_91
	goto FireStarterChoice_71

FireStarterChoice_75:
# 500 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_39

FireStarterChoice_77:
# 527 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_43

FireStarterChoice_79:
# 554 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_47

FireStarterChoice_81:
# 581 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_51

FireStarterChoice_83:
# 608 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_55

FireStarterChoice_85:
# 635 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_59

FireStarterChoice_87:
# 662 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_63

FireStarterChoice_89:
# 689 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_67

FireStarterChoice_91:
# 717 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto FireStarterChoice_71


WaterStarterChoice::
# 735 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_STARTER_REGION
# 736 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, WaterStarterChoice_3
# 763 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, WaterStarterChoice_4
# 789 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, WaterStarterChoice_5
# 816 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, WaterStarterChoice_6
# 843 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, WaterStarterChoice_7
# 870 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, WaterStarterChoice_8
# 897 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, WaterStarterChoice_9
# 924 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, WaterStarterChoice_10
# 951 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, WaterStarterChoice_11
WaterStarterChoice_11:
# 953 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 954 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 955 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_16, MSGBOX_YESNO
# 956 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_36
# 976 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 977 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
WaterStarterChoice_1:
	return

WaterStarterChoice_3:
# 737 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 738 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 739 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_0, MSGBOX_YESNO
# 740 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_12
# 760 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 761 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_4:
# 764 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 765 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 766 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_2, MSGBOX_YESNO
# 767 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_15
# 786 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 787 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_5:
# 790 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_PIPLUP, 10, 3
# 791 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 792 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_4, MSGBOX_YESNO
# 793 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_18
# 813 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 814 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_6:
# 817 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 818 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 819 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_6, MSGBOX_YESNO
# 820 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_21
# 840 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 841 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_7:
# 844 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 845 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 846 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_8, MSGBOX_YESNO
# 847 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_24
# 867 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 868 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_8:
# 871 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_POPPLIO, 10, 3
# 872 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 873 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_10, MSGBOX_YESNO
# 874 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_27
# 894 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 895 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_9:
# 898 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_SOBBLE, 10, 3
# 899 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 900 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_12, MSGBOX_YESNO
# 901 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_30
# 921 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 922 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_10:
# 925 "data/maps/MitisTown_Lab/scripts.pory"
	showmonpic SPECIES_QUAXLY, 10, 3
# 926 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 927 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_14, MSGBOX_YESNO
# 928 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterStarterChoice_33
# 948 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 949 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_3, MSGBOX_AUTOCLOSE
	goto WaterStarterChoice_1

WaterStarterChoice_12:
# 741 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_TOTODILE, 5
# 742 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_40
# 754 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 755 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_39:
# 757 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_15:
# 768 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 769 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_44
# 780 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 781 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_43:
# 783 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_18:
# 794 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_PIPLUP, 5
# 795 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_48
# 807 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 808 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_47:
# 810 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_21:
# 821 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5
# 822 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_52
# 834 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 835 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_51:
# 837 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_24:
# 848 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 849 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_56
# 861 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 862 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_55:
# 864 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_27:
# 875 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_POPPLIO, 5
# 876 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_60
# 888 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 889 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_59:
# 891 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_30:
# 902 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SOBBLE, 5
# 903 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_64
# 915 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 916 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_63:
# 918 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_33:
# 929 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_QUAXLY, 5
# 930 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_68
# 942 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 943 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_67:
# 945 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_36:
# 957 "data/maps/MitisTown_Lab/scripts.pory"
	givemon SPECIES_SQUIRTLE, 5
# 958 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq WaterStarterChoice_72
# 970 "data/maps/MitisTown_Lab/scripts.pory"
	hidemonpic
# 971 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox GrassStarterChoice_Text_2, MSGBOX_AUTOCLOSE
WaterStarterChoice_71:
# 973 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
	goto WaterStarterChoice_1

WaterStarterChoice_40:
# 743 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 744 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 745 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_1
# 746 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 747 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 748 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 749 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_75
	goto WaterStarterChoice_39

WaterStarterChoice_44:
# 770 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 771 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 772 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_3
# 773 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 774 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 775 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_77
	goto WaterStarterChoice_43

WaterStarterChoice_48:
# 796 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 797 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 798 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_5
# 799 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 800 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 801 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 802 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_79
	goto WaterStarterChoice_47

WaterStarterChoice_52:
# 823 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 824 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 825 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_7
# 826 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 827 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 828 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 829 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_81
	goto WaterStarterChoice_51

WaterStarterChoice_56:
# 850 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 851 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 852 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_9
# 853 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 854 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 855 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 856 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_83
	goto WaterStarterChoice_55

WaterStarterChoice_60:
# 877 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 878 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 879 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_11
# 880 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 881 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 882 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 883 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_85
	goto WaterStarterChoice_59

WaterStarterChoice_64:
# 904 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 905 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 906 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_13
# 907 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 908 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 909 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 910 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_87
	goto WaterStarterChoice_63

WaterStarterChoice_68:
# 931 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 932 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 933 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_15
# 934 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 935 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 936 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 937 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_89
	goto WaterStarterChoice_67

WaterStarterChoice_72:
# 959 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker NULL
# 960 "data/maps/MitisTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 961 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox WaterStarterChoice_Text_17
# 962 "data/maps/MitisTown_Lab/scripts.pory"
	waitfanfare
# 963 "data/maps/MitisTown_Lab/scripts.pory"
	removeobject 9
# 964 "data/maps/MitisTown_Lab/scripts.pory"
	call NicknamePartyMon
# 965 "data/maps/MitisTown_Lab/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 1
	goto_if_eq WaterStarterChoice_91
	goto WaterStarterChoice_71

WaterStarterChoice_75:
# 750 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_39

WaterStarterChoice_77:
# 776 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_43

WaterStarterChoice_79:
# 803 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_47

WaterStarterChoice_81:
# 830 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_51

WaterStarterChoice_83:
# 857 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_55

WaterStarterChoice_85:
# 884 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_59

WaterStarterChoice_87:
# 911 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_63

WaterStarterChoice_89:
# 938 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_67

WaterStarterChoice_91:
# 966 "data/maps/MitisTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto WaterStarterChoice_71


MitisTown_Lab_EventScript_Scientist::
# 987 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 988 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 989 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_MegaEvoDialogue, MSGBOX_AUTOCLOSE
# 990 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement 1, MitisTown_Lab_RivalBattle_Movement_2
# 991 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 992 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_AssistantDave::
# 996 "data/maps/MitisTown_Lab/scripts.pory"
	lock
# 997 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 998 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 999 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_AssistantDave_3
# 1004 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_AssistantDave_4
# 1053 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 1054 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_AssistantDave_1:
# 1057 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_ASSISTANT_DAVE, MitisTown_Lab_BronzeBrick_Movement_2
# 1058 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 1059 "data/maps/MitisTown_Lab/scripts.pory"
	release
	return

MitisTown_Lab_EventScript_AssistantDave_3:
# 1000 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 1001 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_NPC
# 1002 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 1003 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChooseForFree, MSGBOX_NPC
	goto MitisTown_Lab_EventScript_AssistantDave_1

MitisTown_Lab_EventScript_AssistantDave_4:
# 1005 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 1006 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChangeStarters
# 1007 "data/maps/MitisTown_Lab/scripts.pory"
	dynmultichoice 25, 5, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MitisTown_Lab_EventScript_AssistantDave_Text_1, MitisTown_Lab_EventScript_AssistantDave_Text_2, MitisTown_Lab_EventScript_AssistantDave_Text_3, MitisTown_Lab_EventScript_AssistantDave_Text_4, MitisTown_Lab_EventScript_AssistantDave_Text_5, MitisTown_Lab_EventScript_AssistantDave_Text_6, MitisTown_Lab_EventScript_AssistantDave_Text_7, MitisTown_Lab_EventScript_AssistantDave_Text_8, MitisTown_Lab_EventScript_AssistantDave_Text_9
# 1018 "data/maps/MitisTown_Lab/scripts.pory"
	closemessage
# 1019 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_RESULT
# 1020 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_AssistantDave_8
# 1023 "data/maps/MitisTown_Lab/scripts.pory"
	case 2, MitisTown_Lab_EventScript_AssistantDave_9
# 1026 "data/maps/MitisTown_Lab/scripts.pory"
	case 3, MitisTown_Lab_EventScript_AssistantDave_10
# 1029 "data/maps/MitisTown_Lab/scripts.pory"
	case 4, MitisTown_Lab_EventScript_AssistantDave_11
# 1032 "data/maps/MitisTown_Lab/scripts.pory"
	case 5, MitisTown_Lab_EventScript_AssistantDave_12
# 1035 "data/maps/MitisTown_Lab/scripts.pory"
	case 6, MitisTown_Lab_EventScript_AssistantDave_13
# 1038 "data/maps/MitisTown_Lab/scripts.pory"
	case 7, MitisTown_Lab_EventScript_AssistantDave_14
# 1041 "data/maps/MitisTown_Lab/scripts.pory"
	case 8, MitisTown_Lab_EventScript_AssistantDave_15
# 1044 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_AssistantDave_16
MitisTown_Lab_EventScript_AssistantDave_16:
# 1046 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1047 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 0
MitisTown_Lab_EventScript_AssistantDave_6:
# 1049 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_AssistantDave_Text_0
# 1050 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_EventScript_AssistantDave_Text_10, MSGBOX_NPC
# 1051 "data/maps/MitisTown_Lab/scripts.pory"
	waitmessage
	goto MitisTown_Lab_EventScript_AssistantDave_1

MitisTown_Lab_EventScript_AssistantDave_8:
# 1021 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1022 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 1
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_9:
# 1024 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1025 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 2
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_10:
# 1027 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1028 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 3
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_11:
# 1030 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1031 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 4
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_12:
# 1033 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1034 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 5
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_13:
# 1036 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1037 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 6
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_14:
# 1039 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1040 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 7
	goto MitisTown_Lab_EventScript_AssistantDave_6

MitisTown_Lab_EventScript_AssistantDave_15:
# 1042 "data/maps/MitisTown_Lab/scripts.pory"
	call StarterFade
# 1043 "data/maps/MitisTown_Lab/scripts.pory"
	setvar VAR_STARTER_REGION, 8
	goto MitisTown_Lab_EventScript_AssistantDave_6


MitisTown_Lab_EventScript_Jake::
# 1063 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 1064 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 1065 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_EventScript_Jake_Text_0
# 1066 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeIntro, MSGBOX_NPC
# 1067 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_EventScript_Jake_Movement_0
# 1068 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 1069 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_Cypress::
# 1073 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 1074 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 1075 "data/maps/MitisTown_Lab/scripts.pory"
	setspeaker MitisTown_Lab_StarterChoiceIntro_Text_0
# 1076 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_CypressGoodLuck, MSGBOX_NPC
# 1077 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


# 1196 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WalkToCypress:
# 1197 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
# 1198 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1201 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WalkToTable:
# 1202 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 1203 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1204 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
# 1205 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1205 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1205 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1206 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
	step_end

# 1209 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_GrassToCypress:
# 1210 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1211 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1211 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1212 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1213 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1216 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_FireToCypress:
# 1217 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1218 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1218 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1218 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1219 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1220 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1223 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_WaterToCypress:
# 1224 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 1225 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1225 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1225 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1225 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
# 1226 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 1227 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 1230 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_ParentsToPlayer:
# 1231 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1231 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1231 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1232 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 1233 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1233 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1233 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1233 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1233 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1234 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
	step_end

# 1237 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_ParentsWalkAway:
# 1238 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 1239 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1239 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
	step_end

# 1242 "data/maps/MitisTown_Lab/scripts.pory"
MitisLab_JakeWalkAway:
# 1243 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
# 1244 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
# 1245 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
# 1246 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1246 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
# 1246 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
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

# 91 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_BronzeBrick_Movement_0:
# 91 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
	step_end

# 106 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_BronzeBrick_Movement_1:
# 106 "data/maps/MitisTown_Lab/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_BronzeBrick_Movement_2:
# 114 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
	step_end

# 137 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_1_Movement_0:
# 137 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
# 137 "data/maps/MitisTown_Lab/scripts.pory"
	walk_up
	step_end

# 145 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_2_Movement_0:
# 145 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
# 145 "data/maps/MitisTown_Lab/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_Trigger_ChooseStarter_3_Movement_0:
# 153 "data/maps/MitisTown_Lab/scripts.pory"
	face_right
# 153 "data/maps/MitisTown_Lab/scripts.pory"
	walk_right
	step_end

# 1067 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_Jake_Movement_0:
# 1067 "data/maps/MitisTown_Lab/scripts.pory"
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

MitisTown_Lab_BronzeBrick_Text_0:
# 97 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_NONE}Obtained the Bronze Brick!$"

MitisTown_Lab_BronzeBrick_Text_1:
# 99 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{PLAYER} put the Bronze Brick in the Bag.$"

MitisTown_Lab_BronzeBrick_Text_2:
# 119 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Obtained 5 Pokéballs!$"

MitisTown_Lab_BronzeBrick_Text_3:
# 121 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{PLAYER} put the Pokéballs in the Bag.$"

MitisTown_Lab_Trigger_ChooseStarter_1_Text_0:
# 136 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Don't leave without choosing your\nPokémon!$"

MitisTown_Lab_EventScript_GrassBall_Text_0:
# 162 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I should wait...$"

MitisTown_Lab_EventScript_GrassBall_Text_1:
# 173 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I shouldn't take another, for now.$"

NicknamePartyMon_Text_0:
# 226 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Give it a nickname?$"

GrassStarterChoice_Text_0:
# 239 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chikorita, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_1:
# 245 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chikorita!$"

GrassStarterChoice_Text_2:
# 255 "data/maps/MitisTown_Lab/scripts.pory"
	.string "No more room in party.$"

GrassStarterChoice_Text_3:
# 261 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Take your time.$"

GrassStarterChoice_Text_4:
# 266 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Treecko, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_5:
# 272 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Treecko!$"

GrassStarterChoice_Text_6:
# 293 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Turtwig, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_7:
# 299 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Turtwig!$"

GrassStarterChoice_Text_8:
# 320 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Snivy, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_9:
# 326 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Snivy!$"

GrassStarterChoice_Text_10:
# 347 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chespin, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_11:
# 353 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chespin!$"

GrassStarterChoice_Text_12:
# 374 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Rowlet, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_13:
# 380 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Rowlet!$"

GrassStarterChoice_Text_14:
# 401 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Grookey, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_15:
# 407 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Grookey!$"

GrassStarterChoice_Text_16:
# 428 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Sprigatito, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_17:
# 434 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Sprigatito!$"

GrassStarterChoice_Text_18:
# 456 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Bulbasaur, the\nGrass type Pokémon?$"

GrassStarterChoice_Text_19:
# 462 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Bulbasaur!$"

FireStarterChoice_Text_0:
# 489 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Cindaquil, the\nFire type Pokémon?$"

FireStarterChoice_Text_1:
# 495 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Cyndaquil!$"

FireStarterChoice_Text_2:
# 516 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Torchic, the\nFire type Pokémon?$"

FireStarterChoice_Text_3:
# 522 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Torchic!$"

FireStarterChoice_Text_4:
# 543 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Chimchar, the\nFire type Pokémon?$"

FireStarterChoice_Text_5:
# 549 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Chimchar!$"

FireStarterChoice_Text_6:
# 570 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Tepig, the\nFire type Pokémon?$"

FireStarterChoice_Text_7:
# 576 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Tepig!$"

FireStarterChoice_Text_8:
# 597 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Fennekin, the\nFire type Pokémon?$"

FireStarterChoice_Text_9:
# 603 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Fennekin!$"

FireStarterChoice_Text_10:
# 624 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Litten, the\nFire type Pokémon?$"

FireStarterChoice_Text_11:
# 630 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Litten!$"

FireStarterChoice_Text_12:
# 651 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Scorbunny, the\nFire type Pokémon?$"

FireStarterChoice_Text_13:
# 657 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Scorbunny!$"

FireStarterChoice_Text_14:
# 678 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Fuecoco, the\nFire type Pokémon?$"

FireStarterChoice_Text_15:
# 684 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Fuecoco!$"

FireStarterChoice_Text_16:
# 706 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Charmander, the\nFire type Pokémon?$"

FireStarterChoice_Text_17:
# 712 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Charmander!$"

WaterStarterChoice_Text_0:
# 739 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Totodile, the\nWater type Pokémon?$"

WaterStarterChoice_Text_1:
# 745 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Totodile!$"

WaterStarterChoice_Text_2:
# 766 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Mudkip, the\nWater type Pokémon?$"

WaterStarterChoice_Text_3:
# 772 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Mudkip!$"

WaterStarterChoice_Text_4:
# 792 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Piplup, the\nWater type Pokémon?$"

WaterStarterChoice_Text_5:
# 798 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Piplup!$"

WaterStarterChoice_Text_6:
# 819 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Oshawott, the\nWater type Pokémon?$"

WaterStarterChoice_Text_7:
# 825 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Oshawott!$"

WaterStarterChoice_Text_8:
# 846 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Froakie, the\nWater type Pokémon?$"

WaterStarterChoice_Text_9:
# 852 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Froakie!$"

WaterStarterChoice_Text_10:
# 873 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Popplio, the\nWater type Pokémon?$"

WaterStarterChoice_Text_11:
# 879 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Popplio!$"

WaterStarterChoice_Text_12:
# 900 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Sobble, the\nWater type Pokémon?$"

WaterStarterChoice_Text_13:
# 906 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Sobble!$"

WaterStarterChoice_Text_14:
# 927 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Quaxly, the\nWater type Pokémon?$"

WaterStarterChoice_Text_15:
# 933 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Quaxly!$"

WaterStarterChoice_Text_16:
# 955 "data/maps/MitisTown_Lab/scripts.pory"
	.string "So, will you choose Squirtle, the\nWater type Pokémon?$"

WaterStarterChoice_Text_17:
# 961 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Received Squirtle!$"

MitisTown_Lab_EventScript_AssistantDave_Text_0:
# 1000 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Dave$"

MitisTown_Lab_EventScript_AssistantDave_Text_1:
# 1008 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Kanto$"

MitisTown_Lab_EventScript_AssistantDave_Text_2:
# 1009 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Johto$"

MitisTown_Lab_EventScript_AssistantDave_Text_3:
# 1010 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Hoenn$"

MitisTown_Lab_EventScript_AssistantDave_Text_4:
# 1011 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Sinnoh$"

MitisTown_Lab_EventScript_AssistantDave_Text_5:
# 1012 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Unova$"

MitisTown_Lab_EventScript_AssistantDave_Text_6:
# 1013 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Kalos$"

MitisTown_Lab_EventScript_AssistantDave_Text_7:
# 1014 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Alola$"

MitisTown_Lab_EventScript_AssistantDave_Text_8:
# 1015 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Galar$"

MitisTown_Lab_EventScript_AssistantDave_Text_9:
# 1016 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Paldea$"

MitisTown_Lab_EventScript_AssistantDave_Text_10:
# 1050 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Choose Wisely.$"

MitisTown_Lab_EventScript_Jake_Text_0:
# 1065 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Jake$"

MitisTown_Lab_MegaEvoDialogue::
# 1082 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I'm researching Mega Evolution.\p"
	.string "Such a wonderful and mysterious phenomena...\p"
	.string "I've had the opportunity to\ntalk with Professor Sycamore from\lthe Kalos region about it.$"

MitisTown_Lab_DaveInfo::
# 1088 "data/maps/MitisTown_Lab/scripts.pory"
	.string "The professor gives trainers a\nrare Pokémon every 20 species they\lregister on the Pokédex.$"

MitisTown_Lab_DaveChangeStarters::
# 1092 "data/maps/MitisTown_Lab/scripts.pory"
	.string "What region would you like to choose?$"

MitisTown_Lab_JakeIntro::
# 1096 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Professor Cypress should be here\nany minute now, so go check your\lparents.\p"
	.string "Your parents are at the digging\nsite.$"

MitisTown_Lab_DaveChooseForFree::
# 1101 "data/maps/MitisTown_Lab/scripts.pory"
	.string "For this occasion though, you'll\nget one for free!$"

MitisTown_Lab_CypressIntro::
# 1105 "data/maps/MitisTown_Lab/scripts.pory"
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
# 1132 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}Excellent choice, {PLAYER}!\p"
	.string "{SPEAKER NAME_MOM}Your new Pokémon is so cute!\p"
	.string "{SPEAKER NAME_DAD}That definitely has battle potential!\p"
	.string "{SPEAKER NAME_JAKE}I hope you and your Pokémon become best\nfriends like we are!\p"
	.string "{SPEAKER NAME_CYPRESS}Alright, {PLAYER}, many challenges await\nyou.\pLet me give you one more gift that will\nhelp you along your way\p"
	.string "{SPEAKER NAME_CYPRESS}It's a Pokédex.\pIt's an electronic encyclopedia that\nrecords the kinds of Pokémon you\lencounter and capture.\p"
	.string "{SPEAKER NAME_CYPRESS}Not only that, you'll also help the lab's\nresearch efforts!$"

MitisTown_Lab_PokedexObtained::
# 1142 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}Also, once every 20 species of Pokémon\nyou register on the Pokédex, you can\lcome back here and get another one of \lthese rare Pokémon for free!\l"
	.string "{SPEAKER NAME_CYPRESS}Be sure to check it out!\p"
	.string "{SPEAKER NAME_CYPRESS}Now, what are you waiting for?\pGo and explore the world of Pokémon!\p"
	.string "{SPEAKER NAME_DAD}That's right, {PLAYER}. Go ahead and have\nfun with your new Pokémon.\pWe need to stay behind and talk to the\nprofessor for a minute.\pWe'll meet up with you later.$"

MitisTown_Lab_CypressGoodLuck::
# 1149 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_CYPRESS}I wish you best of luck on your journey,\n{PLAYER}!$"

MitisTown_Lab_JakeBattleIntro::
# 1153 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_JAKE}We have Pokémon now!\pLET'S BATTLE!!$"

MitisTown_Lab_JakeBattleOutro::
# 1157 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Amazing!$"

MitisTown_Lab_JakePostBattle::
# 1161 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Nice fighting!\pHere, let me heal your Pokémon.$"

MitisTown_Lab_ParentsGiveBronzeBrick::
# 1165 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}, that was an excellent battle!\p"
	.string "{SPEAKER NAME_MOM}Your father and I watched you while we\nwere discussing things with the\lprofessor.\p"
	.string "{SPEAKER NAME_DAD}We are very proud of you in taking this\nstep to become a Pokémon Trainer!\p"
	.string "{SPEAKER NAME_DAD}We want you to know that we will be\nsupporting you as you explore Roria.\p"
	.string "{SPEAKER NAME_MOM}You need to be careful, as you are\ngoing to be out on your own for the\lfirst time.\p"
	.string "{SPEAKER NAME_MOM}Don't forget to floss!\p"
	.string "{SPEAKER NAME_DAD}{PLAYER}, we want to give you something\nto take with you as a gift to celebrate\lthis momentous occasion.$"

MitisTown_Lab_ParentsLeave::
# 1175 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_DAD}I made it into a necklace just this\nmorning.\p"
	.string "{SPEAKER NAME_DAD}When you look at it, remember your\nfamily who loves you.\pDon't forget to keep it safe.\p"
	.string "{SPEAKER NAME_MOM}We're headed back to the house.\pIf you need anything, that's where you\ncan find us!$"

MitisTown_Lab_JakeGivePokeballs::
# 1181 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_JAKE}Wow, that was really cool of your\nparents.\p"
	.string "{SPEAKER NAME_JAKE}Oh, by the way, I have something for\nyou.\pThey're for catching wild Pokémon!$"

MitisTown_Lab_JakeLeave::
# 1186 "data/maps/MitisTown_Lab/scripts.pory"
	.string "{SPEAKER NAME_JAKE}It works best if you weaken the\nPokémon before throwing a Pokéball at it.\p"
	.string "{SPEAKER NAME_JAKE}Well, I need to gather a few things\nbefore I set off on my adventure.\p"
	.string "{SPEAKER NAME_JAKE}You should go start training your\nPokémon on Route 1!\p"
	.string "{SPEAKER NAME_JAKE}Past route 1 is Cheshma Town.\pThat'll be a good place for us to\nmeet up.\p"
	.string "{SPEAKER NAME_JAKE}Alright, I'll see you later!$"
