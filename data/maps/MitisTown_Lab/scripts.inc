MitisTown_Lab_MapScripts::
# 2 "data/maps/MitisTown_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MitisTown_Lab_MapScripts_MAP_SCRIPT_ON_TRANSITION
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
	return


MitisTown_Lab_EventScript_Scientist::
# 19 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 20 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 21 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_MegaEvoDialogue, MSGBOX_AUTOCLOSE
# 22 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement 1, MitisTown_Lab_EventScript_Scientist_Movement_0
# 23 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 24 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


MitisTown_Lab_EventScript_AssistantDave::
# 28 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 29 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 30 "data/maps/MitisTown_Lab/scripts.pory"
	switch VAR_BIRCH_LAB_STATE
# 31 "data/maps/MitisTown_Lab/scripts.pory"
	case 0, MitisTown_Lab_EventScript_AssistantDave_3
# 34 "data/maps/MitisTown_Lab/scripts.pory"
	case 1, MitisTown_Lab_EventScript_AssistantDave_4
# 37 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_AUTOCLOSE
MitisTown_Lab_EventScript_AssistantDave_1:
# 40 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_ASSISTANT_DAVE, MitisTown_Lab_EventScript_AssistantDave_Movement_0
# 41 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 42 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return

MitisTown_Lab_EventScript_AssistantDave_3:
# 32 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveInfo, MSGBOX_AUTOCLOSE
# 33 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChooseForFree, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_AssistantDave_1

MitisTown_Lab_EventScript_AssistantDave_4:
# 35 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_DaveChangeStarters, MSGBOX_AUTOCLOSE
	goto MitisTown_Lab_EventScript_AssistantDave_1


MitisTown_Lab_EventScript_Jake::
# 46 "data/maps/MitisTown_Lab/scripts.pory"
	lockall
# 47 "data/maps/MitisTown_Lab/scripts.pory"
	faceplayer
# 48 "data/maps/MitisTown_Lab/scripts.pory"
	msgbox MitisTown_Lab_JakeIntro, MSGBOX_AUTOCLOSE
# 49 "data/maps/MitisTown_Lab/scripts.pory"
	applymovement MITIS_LAB_ID_JAKE, MitisTown_Lab_EventScript_Jake_Movement_0
# 50 "data/maps/MitisTown_Lab/scripts.pory"
	waitmovement 0
# 51 "data/maps/MitisTown_Lab/scripts.pory"
	releaseall
	return


# 22 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_Scientist_Movement_0:
# 22 "data/maps/MitisTown_Lab/scripts.pory"
	face_up
	step_end

# 40 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_AssistantDave_Movement_0:
# 40 "data/maps/MitisTown_Lab/scripts.pory"
	face_down
	step_end

# 49 "data/maps/MitisTown_Lab/scripts.pory"
MitisTown_Lab_EventScript_Jake_Movement_0:
# 49 "data/maps/MitisTown_Lab/scripts.pory"
	face_left
	step_end

MitisTown_Lab_MegaEvoDialogue::
# 56 "data/maps/MitisTown_Lab/scripts.pory"
	.string "I'm researching Mega Evolution.\p"
	.string "Such a wonderful and mysterious phenomena...\p"
	.string "I've had the opportunity to\ntalk with Professor Sycamore from\lthe Kalos region about it.$"

MitisTown_Lab_DaveInfo::
# 62 "data/maps/MitisTown_Lab/scripts.pory"
	.string "The professor gives trainers a\nrare Pokémon every 20 species they\lregister on the Pokédex.$"

MitisTown_Lab_DaveChangeStarters::
# 66 "data/maps/MitisTown_Lab/scripts.pory"
	.string "lorem ipsum$"

MitisTown_Lab_JakeIntro::
# 70 "data/maps/MitisTown_Lab/scripts.pory"
	.string "Professor Cypress should be here\nany minute now, so go check your\lparents."
	.string "Your parents are at the digging\nsite.$"

MitisTown_Lab_DaveChooseForFree::
# 75 "data/maps/MitisTown_Lab/scripts.pory"
	.string "For this occasion though, you'll\nget one for free!$"
