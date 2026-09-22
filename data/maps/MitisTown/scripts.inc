# 1 "data/maps/MitisTown/scripts.pory"

# 2 "data/maps/MitisTown/scripts.pory"
MitisTown_MapScripts::
# 3 "data/maps/MitisTown/scripts.pory"
	.byte 0

MitisTown_EventScript_TownSign::
# 8 "data/maps/MitisTown/scripts.pory"
	lockall
# 9 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTownSign
# 10 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_PlayersHouseSign::
# 14 "data/maps/MitisTown/scripts.pory"
	lockall
# 15 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_PlayersHouseSign_Text_0
# 16 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_RivalsHouseSign::
# 20 "data/maps/MitisTown/scripts.pory"
	lockall
# 21 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_RivalsHouseSign_Text_0
# 22 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_LabSign::
# 26 "data/maps/MitisTown/scripts.pory"
	lockall
# 27 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_LabSign_Text_0
# 28 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_DiggingSiteSign::
# 32 "data/maps/MitisTown/scripts.pory"
	lockall
# 33 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_DiggingSiteSign_Text_0
# 34 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_Trigger_BlockPath::
# 38 "data/maps/MitisTown/scripts.pory"
	lockall
# 39 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 40 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 41 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_Trigger_BlockPath_Text_0, MSGBOX_AUTOCLOSE
# 42 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkUp
# 43 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


# 52 "data/maps/MitisTown/scripts.pory"
FaceRight:
# 53 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 56 "data/maps/MitisTown/scripts.pory"
WalkUp:
# 57 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 60 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToPlayer:
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 61 "data/maps/MitisTown/scripts.pory"
	walk_down
# 62 "data/maps/MitisTown/scripts.pory"
	face_right
# 63 "data/maps/MitisTown/scripts.pory"
	walk_right
# 63 "data/maps/MitisTown/scripts.pory"
	walk_right
# 63 "data/maps/MitisTown/scripts.pory"
	walk_right
# 63 "data/maps/MitisTown/scripts.pory"
	walk_right
	step_end

# 66 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToLab:
# 67 "data/maps/MitisTown/scripts.pory"
	face_left
# 68 "data/maps/MitisTown/scripts.pory"
	walk_left
# 68 "data/maps/MitisTown/scripts.pory"
	walk_left
# 68 "data/maps/MitisTown/scripts.pory"
	walk_left
# 68 "data/maps/MitisTown/scripts.pory"
	walk_left
# 69 "data/maps/MitisTown/scripts.pory"
	face_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
# 70 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

MitisTown_EventScript_PlayersHouseSign_Text_0:
# 15 "data/maps/MitisTown/scripts.pory"
	.string "{PLAYER}'s House.$"

MitisTown_EventScript_RivalsHouseSign_Text_0:
# 21 "data/maps/MitisTown/scripts.pory"
	.string "Jake's House.$"

MitisTown_EventScript_LabSign_Text_0:
# 27 "data/maps/MitisTown/scripts.pory"
	.string "Roria Pokémon research lab.$"

MitisTown_EventScript_DiggingSiteSign_Text_0:
# 33 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town Digging Site.\pNote: those ledges are supposed\nto be stairs...$"

MitisTown_Trigger_BlockPath_Text_0:
# 41 "data/maps/MitisTown/scripts.pory"
	.string "You don't have a Pokémon yet, right?\nYou should go to the lab first.$"

MitisTownSign::
# 47 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town.\n"
	.string "The fresh breeze of a new start.$"
