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


MitisTown_Trigger_Parents1::
# 15 "data/maps/MitisTown/scripts.pory"
	lockall
# 16 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkToParents_1
# 17 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 18 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Parents
	return


MitisTown_Trigger_Parents2::
# 22 "data/maps/MitisTown/scripts.pory"
	lockall
# 23 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkToParents_2
# 24 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 25 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Parents
	return


MitisTown_EventScript_Parents::
# 29 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ParentsDialogue1
# 30 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_MOM, Mitis_ParentsSurprised
# 31 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_DAD, Mitis_ParentsSurprised
# 32 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 34 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ParentsDialogue2
# 35 "data/maps/MitisTown/scripts.pory"
	closemessage
# 36 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_MOM, Mitis_MomWalkAway
# 37 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_DAD, Mitis_DadWalkAway
# 38 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_MOM
# 40 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_DAD
# 43 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Parents_Text_0
# 44 "data/maps/MitisTown/scripts.pory"
	closemessage
# 45 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkAway
# 46 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 48 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 49 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 51 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_JakeIntro::
# 55 "data/maps/MitisTown/scripts.pory"
	lockall
# 56 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_0
# 57 "data/maps/MitisTown/scripts.pory"
	closemessage
# 59 "data/maps/MitisTown/scripts.pory"
	addobject MITIS_TOWN_ID_JAKE_INTRO
# 60 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 62 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceLeft
# 63 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToPlayer
# 65 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/MitisTown/scripts.pory"
	setspeaker MitisTown_EventScript_JakeIntro_Text_1
# 68 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_JakeDialogue
# 69 "data/maps/MitisTown/scripts.pory"
	closemessage
# 70 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToLab
# 71 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_JAKE_INTRO
# 74 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 75 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 76 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 78 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_Trigger_BlockPath::
# 82 "data/maps/MitisTown/scripts.pory"
	lockall
# 83 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceRight
# 84 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/MitisTown/scripts.pory"
	releaseall
# 86 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Fisherman
	return


MitisTown_Trigger_FishermanSpecial::
# 90 "data/maps/MitisTown/scripts.pory"
	lockall
# 91 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_SpecialTrigger_Fisherman
# 92 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/MitisTown/scripts.pory"
	releaseall
# 94 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Fisherman
	return


MitisTown_EventScript_TownSign::
# 100 "data/maps/MitisTown/scripts.pory"
	lockall
# 101 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTownSign
# 102 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_PlayersHouseSign::
# 106 "data/maps/MitisTown/scripts.pory"
	lockall
# 107 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_PlayersHouseSign_Text_0
# 108 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_RivalsHouseSign::
# 112 "data/maps/MitisTown/scripts.pory"
	lockall
# 113 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_RivalsHouseSign_Text_0
# 114 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_LabSign::
# 118 "data/maps/MitisTown/scripts.pory"
	lockall
# 119 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_LabSign_Text_0
# 120 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_DiggingSiteSign::
# 124 "data/maps/MitisTown/scripts.pory"
	lockall
# 125 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_DiggingSiteSign_Text_0
# 126 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Scientist::
# 132 "data/maps/MitisTown/scripts.pory"
	lockall
# 133 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 134 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ScientistDialogue, MSGBOX_AUTOCLOSE
# 135 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_SCIENTIST, MitisTown_EventScript_Scientist_Movement_0
# 136 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_TechBoy::
# 141 "data/maps/MitisTown/scripts.pory"
	lockall
# 142 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 143 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_TechBoyDialogue, MSGBOX_AUTOCLOSE
# 144 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Camper::
# 148 "data/maps/MitisTown/scripts.pory"
	lockall
# 149 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 150 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_CamperDialogue, MSGBOX_AUTOCLOSE
# 151 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Woman::
# 155 "data/maps/MitisTown/scripts.pory"
	lockall
# 156 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 157 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_PokeballDialogue, MSGBOX_AUTOCLOSE
# 158 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Fisherman::
# 162 "data/maps/MitisTown/scripts.pory"
	lockall
# 163 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 164 "data/maps/MitisTown/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 165 "data/maps/MitisTown/scripts.pory"
	case 0, MitisTown_EventScript_Fisherman_3
# 168 "data/maps/MitisTown/scripts.pory"
	case 1, MitisTown_EventScript_Fisherman_4
# 173 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_2
MitisTown_EventScript_Fisherman_1:
# 176 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_FISHERMAN, MitisTown_EventScript_Fisherman_Movement_0
# 177 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/MitisTown/scripts.pory"
	releaseall
	return

MitisTown_EventScript_Fisherman_3:
# 166 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_0, MSGBOX_AUTOCLOSE
# 167 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkUp
	goto MitisTown_EventScript_Fisherman_1

MitisTown_EventScript_Fisherman_4:
# 169 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_1, MSGBOX_AUTOCLOSE
# 170 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkAway
# 171 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	goto MitisTown_EventScript_Fisherman_1


# 236 "data/maps/MitisTown/scripts.pory"
Mitis_FaceRight:
# 237 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 240 "data/maps/MitisTown/scripts.pory"
Mitis_FaceLeft:
# 241 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

# 244 "data/maps/MitisTown/scripts.pory"
Mitis_WalkUp:
# 245 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToPlayer:
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 249 "data/maps/MitisTown/scripts.pory"
	walk_down
# 250 "data/maps/MitisTown/scripts.pory"
	face_right
# 251 "data/maps/MitisTown/scripts.pory"
	walk_right
# 251 "data/maps/MitisTown/scripts.pory"
	walk_right
# 251 "data/maps/MitisTown/scripts.pory"
	walk_right
# 251 "data/maps/MitisTown/scripts.pory"
	walk_right
	step_end

# 254 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToLab:
# 255 "data/maps/MitisTown/scripts.pory"
	face_left
# 256 "data/maps/MitisTown/scripts.pory"
	walk_left
# 256 "data/maps/MitisTown/scripts.pory"
	walk_left
# 256 "data/maps/MitisTown/scripts.pory"
	walk_left
# 256 "data/maps/MitisTown/scripts.pory"
	walk_left
# 257 "data/maps/MitisTown/scripts.pory"
	face_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
# 258 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 261 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_1:
# 262 "data/maps/MitisTown/scripts.pory"
	walk_up
# 262 "data/maps/MitisTown/scripts.pory"
	walk_up
# 262 "data/maps/MitisTown/scripts.pory"
	walk_up
# 262 "data/maps/MitisTown/scripts.pory"
	walk_up
# 263 "data/maps/MitisTown/scripts.pory"
	face_left
# 264 "data/maps/MitisTown/scripts.pory"
	walk_left
# 264 "data/maps/MitisTown/scripts.pory"
	walk_left
# 265 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 268 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_2:
# 269 "data/maps/MitisTown/scripts.pory"
	walk_up
# 269 "data/maps/MitisTown/scripts.pory"
	walk_up
# 269 "data/maps/MitisTown/scripts.pory"
	walk_up
# 269 "data/maps/MitisTown/scripts.pory"
	walk_up
# 270 "data/maps/MitisTown/scripts.pory"
	face_left
# 271 "data/maps/MitisTown/scripts.pory"
	walk_left
# 271 "data/maps/MitisTown/scripts.pory"
	walk_left
# 271 "data/maps/MitisTown/scripts.pory"
	walk_left
# 272 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 275 "data/maps/MitisTown/scripts.pory"
Mitis_ParentsSurprised:
# 276 "data/maps/MitisTown/scripts.pory"
	face_down
# 277 "data/maps/MitisTown/scripts.pory"
	emote_exclamation_mark
# 278 "data/maps/MitisTown/scripts.pory"
	delay_16
# 279 "data/maps/MitisTown/scripts.pory"
	delay_16
	step_end

# 282 "data/maps/MitisTown/scripts.pory"
Mitis_MomWalkAway:
# 283 "data/maps/MitisTown/scripts.pory"
	face_right
# 284 "data/maps/MitisTown/scripts.pory"
	walk_right
# 284 "data/maps/MitisTown/scripts.pory"
	walk_right
# 285 "data/maps/MitisTown/scripts.pory"
	face_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
# 286 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 289 "data/maps/MitisTown/scripts.pory"
Mitis_DadWalkAway:
# 290 "data/maps/MitisTown/scripts.pory"
	face_right
# 291 "data/maps/MitisTown/scripts.pory"
	walk_right
# 291 "data/maps/MitisTown/scripts.pory"
	walk_right
# 291 "data/maps/MitisTown/scripts.pory"
	walk_right
# 292 "data/maps/MitisTown/scripts.pory"
	face_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
# 293 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 296 "data/maps/MitisTown/scripts.pory"
Mitis_WalkAway:
# 297 "data/maps/MitisTown/scripts.pory"
	face_down
# 298 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/MitisTown/scripts.pory"
Mitis_SpecialTrigger_Fisherman:
# 302 "data/maps/MitisTown/scripts.pory"
	face_left
# 303 "data/maps/MitisTown/scripts.pory"
	walk_left
# 304 "data/maps/MitisTown/scripts.pory"
	face_down
# 305 "data/maps/MitisTown/scripts.pory"
	walk_down
# 306 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 135 "data/maps/MitisTown/scripts.pory"
MitisTown_EventScript_Scientist_Movement_0:
# 135 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 176 "data/maps/MitisTown/scripts.pory"
MitisTown_EventScript_Fisherman_Movement_0:
# 176 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

MitisTown_EventScript_Parents_Text_0:
# 43 "data/maps/MitisTown/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}... I should get going.$"

MitisTown_EventScript_JakeIntro_Text_0:
# 56 "data/maps/MitisTown/scripts.pory"
	.string "Hey {PLAYER}, it's me, Jake!$"

MitisTown_EventScript_JakeIntro_Text_1:
# 67 "data/maps/MitisTown/scripts.pory"
	.string "Jake$"

MitisTown_EventScript_PlayersHouseSign_Text_0:
# 107 "data/maps/MitisTown/scripts.pory"
	.string "{PLAYER}'s House.$"

MitisTown_EventScript_RivalsHouseSign_Text_0:
# 113 "data/maps/MitisTown/scripts.pory"
	.string "Jake's House.$"

MitisTown_EventScript_LabSign_Text_0:
# 119 "data/maps/MitisTown/scripts.pory"
	.string "Roria Pokémon research lab.$"

MitisTown_EventScript_DiggingSiteSign_Text_0:
# 125 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town Digging Site.\pNote: those ledges are supposed\nto be stairs...$"

MitisTown_EventScript_Fisherman_Text_0:
# 166 "data/maps/MitisTown/scripts.pory"
	.string "You don't have a Pokémon yet, right?\nYou should go to the lab first.$"

MitisTown_EventScript_Fisherman_Text_1:
# 169 "data/maps/MitisTown/scripts.pory"
	.string "Good luck on your Journey!\pIf you need help, talk to me.\nI'll heal your Pokémon!$"

MitisTown_EventScript_Fisherman_Text_2:
# 173 "data/maps/MitisTown/scripts.pory"
	.string "Here, let me heal your Pokémon!$"

MitisTownSign::
# 183 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town.\n"
	.string "The fresh breeze of a new start.$"

MitisTown_JakeDialogue::
# 188 "data/maps/MitisTown/scripts.pory"
	.string "I can't believe the day has come!\nWe'll finally get our first Pokémon!\p"
	.string "I saw your parents go to the digging site.\nYou should go check them.\lI'll wait for you at the lab!$"

MitisTown_ParentsDialogue1::
# 193 "data/maps/MitisTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}Well that ought to take care of it...\p"
	.string "{SPEAKER NAME_DAD}We have to keep this a secret, for\neveryone's safety.\p"
	.string "{SPEAKER NAME_MOM}You're right.\pIt's too dangerous for anyone to go\ndown there.\p"
	.string "{SPEAKER NAME_DAD}I don't think we should tell anybody\nabout this.\p"
	.string "{SPEAKER NAME_MOM}Maybe we can tell that new professor.\p"
	.string "{SPEAKER NAME_DAD}Maybe you're right.$"

MitisTown_ParentsDialogue2::
# 202 "data/maps/MitisTown/scripts.pory"
	.string "{SPEAKER NAME_MOM}{PLAYER}! You startled us!\p"
	.string "{SPEAKER NAME_DAD}Hey champ!\pToday is the day you get your first\nPokémon!\p"
	.string "{SPEAKER NAME_MOM}We are so happy for you, sweetie!\p"
	.string "{SPEAKER NAME_DAD}Sorry we didn't meet you at home.\pWe just discovered something in the\ncave last night.\p"
	.string "{SPEAKER NAME_DAD}As archeologists, your mother and I are\nvery thorough in our work.\p"
	.string "{SPEAKER NAME_MOM}That's right, but enough talking.\pLet's head down to the research lab\nand let you pick your very first\lPokémon!\p"
	.string "{SPEAKER NAME_DAD}We'll see you there!$"

MitisTown_ScientistDialogue::
# 212 "data/maps/MitisTown/scripts.pory"
	.string "At the end of the road lies Roria's\nPokémon research lab.\p"
	.string "Years of studies on Pokémon are\nstored and mantained there.$"

MitisTown_TechBoyDialogue::
# 217 "data/maps/MitisTown/scripts.pory"
	.string "Technology is amazing!\p"
	.string "People can easily make their own\ngames using decomps!$"

MitisTown_CamperDialogue::
# 222 "data/maps/MitisTown/scripts.pory"
	.string "I'm not a good swimmer.\n"
	.string "Matter of fact, I'm scared of water.\p"
	.string "People sometimes use Pokémon to\ntravel on water.\p"
	.string "I wonder if that'll help me\nfight my fear of water...$"

MitisTown_PokeballDialogue::
# 229 "data/maps/MitisTown/scripts.pory"
	.string "Some Pokéballs are better\nthan others.\p"
	.string "Some work better on certain Pokémon\nwhile others work better in\lspecific places.$"
