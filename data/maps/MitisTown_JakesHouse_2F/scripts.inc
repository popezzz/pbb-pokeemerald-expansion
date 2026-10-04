MitisTown_JakesHouse_2F_MapScripts::
# 2 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MitisTown_JakesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MitisTown_JakesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq MitisTown_JakesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

MitisTown_JakesHouse_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return


MitisTown_JakesHouse_2F_EventScript_Jake::
# 13 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	lockall
# 14 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	faceplayer
# 15 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	msgbox MitisTown_JakesHouse_2F_JakeDialogue, MSGBOX_NPC
# 16 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	applymovement 1, MitisTown_JakesHouse_2F_EventScript_Jake_Movement_0
# 17 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	releaseall
	return


# 16 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
MitisTown_JakesHouse_2F_EventScript_Jake_Movement_0:
# 16 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	face_up
	step_end

MitisTown_JakesHouse_2F_JakeDialogue::
# 21 "data/maps/MitisTown_JakesHouse_2F/scripts.pory"
	.string "{SPEAKER NAME_JAKE}I need to gather a few things\nbefore I set off on my adventure.\p"
	.string "{SPEAKER NAME_JAKE}I'll see you later in Cheshma Town!$"
