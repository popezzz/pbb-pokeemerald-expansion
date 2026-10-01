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
# 16 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	lockall
# 17 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_EnoughGames
# 18 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 19 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_JumpDown
# 20 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 21 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_NewAdventure
# 23 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_FaceRight
# 24 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_FillTrainerCard
# 26 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 27 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToTable
# 28 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 29 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special NamePlayer
# 31 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 32 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	delay 30
# 34 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_SetClock
# 35 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 36 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToClock
# 37 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 38 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	call MitisTown_PlayersHouse_2F_EventScript_SetWallClock
# 39 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	delay 30
# 40 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 42 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_GoodToGo
# 43 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 44 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


MitisTown_PlayersHouse_2F_EventScript_SetWallClock::
# 48 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special StartWallClock
	return


MitisTown_PlayersHouse_2F_EventScript_UseWallClock::
# 54 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 55 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 56 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


# 86 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_FaceRight:
# 87 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 90 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToTable:
# 91 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 91 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 91 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 92 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
# 93 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 96 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToClock:
# 97 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_left
# 98 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 98 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 98 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 98 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 99 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 102 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_JumpDown:
# 103 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_down
# 104 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	jump_down
	step_end

PlayersHouse_EnoughGames::
# 61 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "... Ugh! Enough video games for today.\p"
	.string "After all...$"

PlayersHouse_NewAdventure::
# 66 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I'll finally get my first Pokémon\n"
	.string "Today!\p"
	.string "I can't wait to start my own adventure!$"

PlayersHouse_FillTrainerCard::
# 72 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "I just need to fill my trainer card...$"

PlayersHouse_SetClock::
# 76 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I also need to set the clock...$"

PlayersHouse_GoodToGo::
# 80 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...Perfect! I'm good to go.$"
