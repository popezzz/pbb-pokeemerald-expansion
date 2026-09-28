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


MitisTown_Trigger_Parents1::
# 37 "data/maps/MitisTown/scripts.pory"
	lockall
# 38 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkToParents_1
# 39 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 40 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Parents
	return


MitisTown_Trigger_Parents2::
# 44 "data/maps/MitisTown/scripts.pory"
	lockall
# 45 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkToParents_2
# 46 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Parents
	return


MitisTown_EventScript_Parents::
# 51 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ParentsDialogue1
# 52 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_MOM, Mitis_ParentsSurprised
# 53 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_DAD, Mitis_ParentsSurprised
# 54 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ParentsDialogue2
# 57 "data/maps/MitisTown/scripts.pory"
	closemessage
# 58 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_MOM, Mitis_MomWalkAway
# 59 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_DAD, Mitis_DadWalkAway
# 60 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_MOM
# 62 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_DAD
# 64 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Parents_Text_0
# 65 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkAway
# 66 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 69 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 71 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_JakeIntro::
# 75 "data/maps/MitisTown/scripts.pory"
	lockall
# 76 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_0
# 77 "data/maps/MitisTown/scripts.pory"
	closemessage
# 79 "data/maps/MitisTown/scripts.pory"
	addobject MITIS_TOWN_ID_JAKE_INTRO
# 80 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 82 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceLeft
# 83 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 84 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToPlayer
# 85 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_1
# 88 "data/maps/MitisTown/scripts.pory"
	closemessage
# 89 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToLab
# 90 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 92 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_JAKE_INTRO
# 93 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 94 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 95 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 97 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_DiggingSiteSign::
# 101 "data/maps/MitisTown/scripts.pory"
	lockall
# 102 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_DiggingSiteSign_Text_0
# 103 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_Trigger_BlockPath::
# 107 "data/maps/MitisTown/scripts.pory"
	lockall
# 108 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceRight
# 109 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 110 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_Trigger_BlockPath_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkUp
# 112 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 113 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


# 135 "data/maps/MitisTown/scripts.pory"
Mitis_FaceRight:
# 136 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 139 "data/maps/MitisTown/scripts.pory"
Mitis_FaceLeft:
# 140 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

# 143 "data/maps/MitisTown/scripts.pory"
Mitis_WalkUp:
# 144 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToPlayer:
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 148 "data/maps/MitisTown/scripts.pory"
	walk_down
# 149 "data/maps/MitisTown/scripts.pory"
	face_right
# 150 "data/maps/MitisTown/scripts.pory"
	walk_right
# 150 "data/maps/MitisTown/scripts.pory"
	walk_right
# 150 "data/maps/MitisTown/scripts.pory"
	walk_right
# 150 "data/maps/MitisTown/scripts.pory"
	walk_right
	step_end

# 153 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToLab:
# 154 "data/maps/MitisTown/scripts.pory"
	face_left
# 155 "data/maps/MitisTown/scripts.pory"
	walk_left
# 155 "data/maps/MitisTown/scripts.pory"
	walk_left
# 155 "data/maps/MitisTown/scripts.pory"
	walk_left
# 155 "data/maps/MitisTown/scripts.pory"
	walk_left
# 156 "data/maps/MitisTown/scripts.pory"
	face_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
# 157 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 160 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_1:
# 161 "data/maps/MitisTown/scripts.pory"
	walk_up
# 161 "data/maps/MitisTown/scripts.pory"
	walk_up
# 161 "data/maps/MitisTown/scripts.pory"
	walk_up
# 161 "data/maps/MitisTown/scripts.pory"
	walk_up
# 162 "data/maps/MitisTown/scripts.pory"
	face_left
# 163 "data/maps/MitisTown/scripts.pory"
	walk_left
# 163 "data/maps/MitisTown/scripts.pory"
	walk_left
# 164 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 167 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_2:
# 168 "data/maps/MitisTown/scripts.pory"
	walk_up
# 168 "data/maps/MitisTown/scripts.pory"
	walk_up
# 168 "data/maps/MitisTown/scripts.pory"
	walk_up
# 168 "data/maps/MitisTown/scripts.pory"
	walk_up
# 169 "data/maps/MitisTown/scripts.pory"
	face_left
# 170 "data/maps/MitisTown/scripts.pory"
	walk_left
# 170 "data/maps/MitisTown/scripts.pory"
	walk_left
# 170 "data/maps/MitisTown/scripts.pory"
	walk_left
# 171 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 174 "data/maps/MitisTown/scripts.pory"
Mitis_ParentsSurprised:
# 175 "data/maps/MitisTown/scripts.pory"
	face_down
# 176 "data/maps/MitisTown/scripts.pory"
	emote_exclamation_mark
# 177 "data/maps/MitisTown/scripts.pory"
	delay_16
# 178 "data/maps/MitisTown/scripts.pory"
	delay_16
	step_end

# 181 "data/maps/MitisTown/scripts.pory"
Mitis_MomWalkAway:
# 182 "data/maps/MitisTown/scripts.pory"
	face_right
# 183 "data/maps/MitisTown/scripts.pory"
	walk_right
# 183 "data/maps/MitisTown/scripts.pory"
	walk_right
# 184 "data/maps/MitisTown/scripts.pory"
	face_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
# 185 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 188 "data/maps/MitisTown/scripts.pory"
Mitis_DadWalkAway:
# 189 "data/maps/MitisTown/scripts.pory"
	face_right
# 190 "data/maps/MitisTown/scripts.pory"
	walk_right
# 190 "data/maps/MitisTown/scripts.pory"
	walk_right
# 190 "data/maps/MitisTown/scripts.pory"
	walk_right
# 191 "data/maps/MitisTown/scripts.pory"
	face_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
# 192 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/MitisTown/scripts.pory"
Mitis_WalkAway:
# 196 "data/maps/MitisTown/scripts.pory"
	face_down
# 197 "data/maps/MitisTown/scripts.pory"
	walk_down
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

MitisTown_EventScript_Parents_Text_0:
# 64 "data/maps/MitisTown/scripts.pory"
	.string "... I should get going.$"

MitisTown_EventScript_JakeIntro_Text_0:
# 76 "data/maps/MitisTown/scripts.pory"
	.string "Hey {PLAYER}, it's me, Jake!$"

MitisTown_EventScript_JakeIntro_Text_1:
# 87 "data/maps/MitisTown/scripts.pory"
	.string "I can't believe the day has come!\nWe'll finally get our first Pokémon!\pI saw your parents go to the digging site.\nYou should go check them.\lI'll wait for you at the lab!$"

MitisTown_EventScript_DiggingSiteSign_Text_0:
# 102 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town Digging Site.\pNote: those ledges are supposed\nto be stairs...$"

MitisTown_Trigger_BlockPath_Text_0:
# 110 "data/maps/MitisTown/scripts.pory"
	.string "You don't have a Pokémon yet, right?\nYou should go to the lab first.$"

MitisTownSign::
# 116 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town.\n"
	.string "The fresh breeze of a new start.$"

MitisTown_ParentsDialogue1::
# 121 "data/maps/MitisTown/scripts.pory"
	.string "Dad: Well, that ought to take care of it...\p"
	.string "Mom: We should keep this hidden\nto everyone. For their safety.\p"
	.string "Dad: You're right...$"

MitisTown_ParentsDialogue2::
# 127 "data/maps/MitisTown/scripts.pory"
	.string "Mom: {PLAYER}! You startled us!\p"
	.string "Dad: Hey champ! We found some things we\nhad to check here before going to the lab\p"
	.string "Mom: Today is your special day!\nYou'll finally get your first Pokémon!\p"
	.string "Dad: We were about to head to the lab\nto meet up with professor Cypress.\p"
	.string "Mom: We'll see you there!$"
