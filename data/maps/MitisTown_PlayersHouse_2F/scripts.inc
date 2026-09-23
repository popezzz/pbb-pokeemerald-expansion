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
# 21 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_FaceRight
# 22 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 23 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_FillTrainerCard
# 24 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 25 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToTable
# 26 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 27 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 28 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special NamePlayer
# 29 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 30 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	delay 30
# 32 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_SetClock
# 33 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 34 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayersHouse_HeadToClock
# 35 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	call MitisTown_PlayersHouse_2F_EventScript_SetWallClock
# 37 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	delay 30
# 38 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 40 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_GoodToGo
# 41 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1
# 42 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


# 45 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_FaceRight:
# 46 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_right
	step_end

# 49 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToTable:
# 50 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 50 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 50 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_right
# 51 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
# 52 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_HeadToClock:
# 56 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_left
# 57 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 57 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 57 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 57 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 58 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_up
	step_end

# 61 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_JumpDown:
# 62 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	face_down
# 63 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	jump_down
	step_end

MitisTown_PlayersHouse_2F_EventScript_SetWallClock::
# 90 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special StartWallClock
	return


MitisTown_PlayersHouse_2F_EventScript_UseWallClock::
# 96 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 98 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	releaseall
	return


PlayersHouse_EnoughGames::
# 66 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "... Ugh! Enough video games for today.\p"
	.string "After all...$"

PlayersHouse_NewAdventure::
# 71 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I'll finally get my first Pokémon\n"
	.string "Today!\p"
	.string "I can't wait to start my own adventure!$"

PlayersHouse_FillTrainerCard::
# 77 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "I just need to fill my trainer card...$"

PlayersHouse_SetClock::
# 81 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...I also need to set the clock...$"

PlayersHouse_GoodToGo::
# 85 "data/maps/MitisTown_PlayersHouse_2F/scripts.pory"
	.string "...Perfect! I'm good to go.$"
