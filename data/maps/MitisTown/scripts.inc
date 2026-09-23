MitisTown_MapScripts::
# 2 "data/maps/MitisTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MitisTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/MitisTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MitisTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MitisTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	return

MitisTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/MitisTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_TOWN_STATE, 0, MitisTown_EventScript_JakeIntro
	.2byte 0


MitisTown_EventScript_TownSign::
# 13 "data/maps/MitisTown/scripts.pory"
	lockall
# 14 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTownSign
# 15 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_PlayersHouseSign::
# 19 "data/maps/MitisTown/scripts.pory"
	lockall
# 20 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_PlayersHouseSign_Text_0
# 21 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_RivalsHouseSign::
# 25 "data/maps/MitisTown/scripts.pory"
	lockall
# 26 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_RivalsHouseSign_Text_0
# 27 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_LabSign::
# 31 "data/maps/MitisTown/scripts.pory"
	lockall
# 32 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_LabSign_Text_0
# 33 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_JakeIntro::
# 37 "data/maps/MitisTown/scripts.pory"
	lockall
# 38 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_0
# 39 "data/maps/MitisTown/scripts.pory"
	closemessage
# 41 "data/maps/MitisTown/scripts.pory"
	addobject LOCALID_JAKE_INTRO
# 42 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 44 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceLeft
# 45 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 46 "data/maps/MitisTown/scripts.pory"
	applymovement LOCALID_JAKE_INTRO, Jake_Intro_ToPlayer
# 47 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_1
# 50 "data/maps/MitisTown/scripts.pory"
	closemessage
# 51 "data/maps/MitisTown/scripts.pory"
	applymovement LOCALID_JAKE_INTRO, Jake_Intro_ToLab
# 52 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/MitisTown/scripts.pory"
	removeobject LOCALID_JAKE_INTRO
# 55 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 56 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 58 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_DiggingSiteSign::
# 62 "data/maps/MitisTown/scripts.pory"
	lockall
# 63 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_DiggingSiteSign_Text_0
# 64 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_Trigger_BlockPath::
# 68 "data/maps/MitisTown/scripts.pory"
	lockall
# 69 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceRight
# 70 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_Trigger_BlockPath_Text_0, MSGBOX_AUTOCLOSE
# 72 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkUp
# 73 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


# 82 "data/maps/MitisTown/scripts.pory"
Mitis_FaceRight:
# 83 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 86 "data/maps/MitisTown/scripts.pory"
Mitis_FaceLeft:
# 87 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

# 90 "data/maps/MitisTown/scripts.pory"
Mitis_WalkUp:
# 91 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToPlayer:
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 95 "data/maps/MitisTown/scripts.pory"
	walk_down
# 96 "data/maps/MitisTown/scripts.pory"
	face_right
# 97 "data/maps/MitisTown/scripts.pory"
	walk_right
# 97 "data/maps/MitisTown/scripts.pory"
	walk_right
# 97 "data/maps/MitisTown/scripts.pory"
	walk_right
# 97 "data/maps/MitisTown/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToLab:
# 101 "data/maps/MitisTown/scripts.pory"
	face_left
# 102 "data/maps/MitisTown/scripts.pory"
	walk_left
# 102 "data/maps/MitisTown/scripts.pory"
	walk_left
# 102 "data/maps/MitisTown/scripts.pory"
	walk_left
# 102 "data/maps/MitisTown/scripts.pory"
	walk_left
# 103 "data/maps/MitisTown/scripts.pory"
	face_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
# 104 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

MitisTown_EventScript_PlayersHouseSign_Text_0:
# 20 "data/maps/MitisTown/scripts.pory"
	.string "{PLAYER}'s House.$"

MitisTown_EventScript_RivalsHouseSign_Text_0:
# 26 "data/maps/MitisTown/scripts.pory"
	.string "Jake's House.$"

MitisTown_EventScript_LabSign_Text_0:
# 32 "data/maps/MitisTown/scripts.pory"
	.string "Roria Pokémon research lab.$"

MitisTown_EventScript_JakeIntro_Text_0:
# 38 "data/maps/MitisTown/scripts.pory"
	.string "Hey {PLAYER}, it's me, Jake!$"

MitisTown_EventScript_JakeIntro_Text_1:
# 49 "data/maps/MitisTown/scripts.pory"
	.string "I can't believe the day has come!\nWe'll finally get our first Pokémon!\pI saw your parents go to the digging site.\nYou should go check them.\lI'll wait for you at the lab!$"

MitisTown_EventScript_DiggingSiteSign_Text_0:
# 63 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town Digging Site.\pNote: those ledges are supposed\nto be stairs...$"

MitisTown_Trigger_BlockPath_Text_0:
# 71 "data/maps/MitisTown/scripts.pory"
	.string "You don't have a Pokémon yet, right?\nYou should go to the lab first.$"

MitisTownSign::
# 77 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town.\n"
	.string "The fresh breeze of a new start.$"
