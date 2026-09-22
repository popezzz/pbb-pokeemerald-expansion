MitisTown_PlayersHouse_2F_MapScripts::
# 2 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0, MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 7 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script_2 MAP_SCRIPT_ON_FRAME_TABLE [ VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0, MitisTown_PlayersHouse_2F_IntroScript
	.2byte 0

MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


MitisTown_PlayersHouse_2F_IntroScript::
# 13 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	lockall
# 14 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 15 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox EnoughGames
# 16 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JumpDown
# 17 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 18 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox NewAdventure
# 19 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 20 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


# 23 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
JumpDown:
# 24 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_down
# 25 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	jump_down
	step_end

EnoughGames::
# 28 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "... Ugh! Enough Games for today.\n"
	.string "After all...$"

NewAdventure::
# 33 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I'll finally get my first Pokémon\n"
	.string "Today!\l"
	.string "I can't wait to start my own adventure!$"
