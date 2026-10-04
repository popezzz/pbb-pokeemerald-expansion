MitisTown_PlayersHouse_1F_MapScripts::
# 2 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MitisTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MitisTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
	goto_if_eq MitisTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return

MitisTown_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	return


MitisTown_PlayersHouse_1F_EventScript_Mom::
# 13 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	lockall
# 14 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 15 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	msgbox MitisTown_PlayersHouse_1F_EventScript_Mom_Text_0, MSGBOX_NPC
# 16 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


MitisTown_PlayersHouse_1F_EventScript_Dad::
# 20 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	lockall
# 21 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 22 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	msgbox MitisTown_PlayersHouse_1F_EventScript_Dad_Text_0, MSGBOX_NPC
# 23 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	releaseall
	return


MitisTown_PlayersHouse_1F_EventScript_Mom_Text_0:
# 15 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_MOM}Don't forget to floss!$"

MitisTown_PlayersHouse_1F_EventScript_Dad_Text_0:
# 22 "data/maps/MitisTown_PlayersHouse_1F/scripts.pory"
	.string "{SPEAKER NAME_DAD}Good luck, {PLAYER}!\nKeep the Bronze Brick safe.$"
