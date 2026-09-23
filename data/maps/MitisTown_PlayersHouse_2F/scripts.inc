MitisTown_PlayersHouse_2F_MapScripts::
# 2 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 8 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 3 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0, MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 4 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return

MitisTown_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 0, MitisTown_PlayersHouse_2F_IntroScript
	.2byte 0


MitisTown_PlayersHouse_2F_IntroScript::
# 14 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	lockall
# 15 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_EnoughGames
# 16 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 17 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_JumpDown
# 18 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_NewAdventure
# 20 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_FaceRight
# 21 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_FillTrainerCard
# 23 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 24 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToTable
# 25 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 26 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_SetClock
# 27 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 28 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToClock
# 29 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_GoodToGo
# 31 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 32 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


# 35 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_FaceRight:
# 36 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 39 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToTable:
# 40 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 40 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 40 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 41 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
# 42 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 45 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToClock:
# 46 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_left
# 47 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 47 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 48 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 51 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_JumpDown:
# 52 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_down
# 53 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	jump_down
	step_end

PlayersHouse_EnoughGames::
# 56 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "... Ugh! Enough video games for today.\p"
	.string "After all...$"

PlayersHouse_NewAdventure::
# 61 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I'll finally get my first Pokémon\n"
	.string "Today!\p"
	.string "I can't wait to start my own adventure!$"

PlayersHouse_FillTrainerCard::
# 67 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "I just need to fill my trainer card...$"

PlayersHouse_SetClock::
# 71 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I also need to set the clock...$"

PlayersHouse_GoodToGo::
# 75 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...Perfect! I'm good to go.$"
