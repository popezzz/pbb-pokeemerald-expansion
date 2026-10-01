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
# 42 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Parents_Text_0
# 43 "data/maps/MitisTown/scripts.pory"
	closemessage
# 44 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkAway
# 45 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 48 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 50 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_JakeIntro::
# 54 "data/maps/MitisTown/scripts.pory"
	lockall
# 55 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_JakeIntro_Text_0
# 56 "data/maps/MitisTown/scripts.pory"
	closemessage
# 58 "data/maps/MitisTown/scripts.pory"
	addobject MITIS_TOWN_ID_JAKE_INTRO
# 59 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 61 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceLeft
# 62 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToPlayer
# 64 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 66 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_JakeDialogue
# 67 "data/maps/MitisTown/scripts.pory"
	closemessage
# 68 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_JAKE_INTRO, Jake_Intro_ToLab
# 69 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 71 "data/maps/MitisTown/scripts.pory"
	removeobject MITIS_TOWN_ID_JAKE_INTRO
# 72 "data/maps/MitisTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 73 "data/maps/MitisTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 74 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 76 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_Trigger_BlockPath::
# 80 "data/maps/MitisTown/scripts.pory"
	lockall
# 81 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_FaceRight
# 82 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/MitisTown/scripts.pory"
	releaseall
# 84 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Fisherman
	return


MitisTown_Trigger_FishermanSpecial::
# 88 "data/maps/MitisTown/scripts.pory"
	lockall
# 89 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_SpecialTrigger_Fisherman
# 90 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/MitisTown/scripts.pory"
	releaseall
# 92 "data/maps/MitisTown/scripts.pory"
	goto MitisTown_EventScript_Fisherman
	return


MitisTown_EventScript_TownSign::
# 98 "data/maps/MitisTown/scripts.pory"
	lockall
# 99 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTownSign
# 100 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_PlayersHouseSign::
# 104 "data/maps/MitisTown/scripts.pory"
	lockall
# 105 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_PlayersHouseSign_Text_0
# 106 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_RivalsHouseSign::
# 110 "data/maps/MitisTown/scripts.pory"
	lockall
# 111 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_RivalsHouseSign_Text_0
# 112 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_LabSign::
# 116 "data/maps/MitisTown/scripts.pory"
	lockall
# 117 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_LabSign_Text_0
# 118 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_DiggingSiteSign::
# 122 "data/maps/MitisTown/scripts.pory"
	lockall
# 123 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_DiggingSiteSign_Text_0
# 124 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Scientist::
# 130 "data/maps/MitisTown/scripts.pory"
	lockall
# 131 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 132 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_ScientistDialogue, MSGBOX_AUTOCLOSE
# 133 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_SCIENTIST, MitisTown_EventScript_Scientist_Movement_0
# 134 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 135 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_TechBoy::
# 139 "data/maps/MitisTown/scripts.pory"
	lockall
# 140 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 141 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_TechBoyDialogue, MSGBOX_AUTOCLOSE
# 142 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Camper::
# 146 "data/maps/MitisTown/scripts.pory"
	lockall
# 147 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 148 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_CamperDialogue, MSGBOX_AUTOCLOSE
# 149 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Woman::
# 153 "data/maps/MitisTown/scripts.pory"
	lockall
# 154 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 155 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_PokeballDialogue, MSGBOX_AUTOCLOSE
# 156 "data/maps/MitisTown/scripts.pory"
	releaseall
	return


MitisTown_EventScript_Fisherman::
# 160 "data/maps/MitisTown/scripts.pory"
	lockall
# 161 "data/maps/MitisTown/scripts.pory"
	faceplayer
# 162 "data/maps/MitisTown/scripts.pory"
	switch VAR_LITTLEROOT_INTRO_STATE
# 163 "data/maps/MitisTown/scripts.pory"
	case 0, MitisTown_EventScript_Fisherman_3
# 166 "data/maps/MitisTown/scripts.pory"
	case 1, MitisTown_EventScript_Fisherman_4
# 171 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_2
MitisTown_EventScript_Fisherman_1:
# 174 "data/maps/MitisTown/scripts.pory"
	applymovement MITIS_TOWN_ID_FISHERMAN, MitisTown_EventScript_Fisherman_Movement_0
# 175 "data/maps/MitisTown/scripts.pory"
	waitmovement 0
# 176 "data/maps/MitisTown/scripts.pory"
	releaseall
	return

MitisTown_EventScript_Fisherman_3:
# 164 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_0, MSGBOX_AUTOCLOSE
# 165 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkUp
	goto MitisTown_EventScript_Fisherman_1

MitisTown_EventScript_Fisherman_4:
# 167 "data/maps/MitisTown/scripts.pory"
	msgbox MitisTown_EventScript_Fisherman_Text_1, MSGBOX_AUTOCLOSE
# 168 "data/maps/MitisTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Mitis_WalkAway
# 169 "data/maps/MitisTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	goto MitisTown_EventScript_Fisherman_1


# 229 "data/maps/MitisTown/scripts.pory"
Mitis_FaceRight:
# 230 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 233 "data/maps/MitisTown/scripts.pory"
Mitis_FaceLeft:
# 234 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

# 237 "data/maps/MitisTown/scripts.pory"
Mitis_WalkUp:
# 238 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 241 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToPlayer:
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 242 "data/maps/MitisTown/scripts.pory"
	walk_down
# 243 "data/maps/MitisTown/scripts.pory"
	face_right
# 244 "data/maps/MitisTown/scripts.pory"
	walk_right
# 244 "data/maps/MitisTown/scripts.pory"
	walk_right
# 244 "data/maps/MitisTown/scripts.pory"
	walk_right
# 244 "data/maps/MitisTown/scripts.pory"
	walk_right
	step_end

# 247 "data/maps/MitisTown/scripts.pory"
Jake_Intro_ToLab:
# 248 "data/maps/MitisTown/scripts.pory"
	face_left
# 249 "data/maps/MitisTown/scripts.pory"
	walk_left
# 249 "data/maps/MitisTown/scripts.pory"
	walk_left
# 249 "data/maps/MitisTown/scripts.pory"
	walk_left
# 249 "data/maps/MitisTown/scripts.pory"
	walk_left
# 250 "data/maps/MitisTown/scripts.pory"
	face_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
# 251 "data/maps/MitisTown/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_1:
# 255 "data/maps/MitisTown/scripts.pory"
	walk_up
# 255 "data/maps/MitisTown/scripts.pory"
	walk_up
# 255 "data/maps/MitisTown/scripts.pory"
	walk_up
# 255 "data/maps/MitisTown/scripts.pory"
	walk_up
# 256 "data/maps/MitisTown/scripts.pory"
	face_left
# 257 "data/maps/MitisTown/scripts.pory"
	walk_left
# 257 "data/maps/MitisTown/scripts.pory"
	walk_left
# 258 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 261 "data/maps/MitisTown/scripts.pory"
Mitis_WalkToParents_2:
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
# 264 "data/maps/MitisTown/scripts.pory"
	walk_left
# 265 "data/maps/MitisTown/scripts.pory"
	face_up
	step_end

# 268 "data/maps/MitisTown/scripts.pory"
Mitis_ParentsSurprised:
# 269 "data/maps/MitisTown/scripts.pory"
	face_down
# 270 "data/maps/MitisTown/scripts.pory"
	emote_exclamation_mark
# 271 "data/maps/MitisTown/scripts.pory"
	delay_16
# 272 "data/maps/MitisTown/scripts.pory"
	delay_16
	step_end

# 275 "data/maps/MitisTown/scripts.pory"
Mitis_MomWalkAway:
# 276 "data/maps/MitisTown/scripts.pory"
	face_right
# 277 "data/maps/MitisTown/scripts.pory"
	walk_right
# 277 "data/maps/MitisTown/scripts.pory"
	walk_right
# 278 "data/maps/MitisTown/scripts.pory"
	face_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
# 279 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 282 "data/maps/MitisTown/scripts.pory"
Mitis_DadWalkAway:
# 283 "data/maps/MitisTown/scripts.pory"
	face_right
# 284 "data/maps/MitisTown/scripts.pory"
	walk_right
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
Mitis_WalkAway:
# 290 "data/maps/MitisTown/scripts.pory"
	face_down
# 291 "data/maps/MitisTown/scripts.pory"
	walk_down
	step_end

# 294 "data/maps/MitisTown/scripts.pory"
Mitis_SpecialTrigger_Fisherman:
# 295 "data/maps/MitisTown/scripts.pory"
	face_left
# 296 "data/maps/MitisTown/scripts.pory"
	walk_left
# 297 "data/maps/MitisTown/scripts.pory"
	face_down
# 298 "data/maps/MitisTown/scripts.pory"
	walk_down
# 299 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 133 "data/maps/MitisTown/scripts.pory"
MitisTown_EventScript_Scientist_Movement_0:
# 133 "data/maps/MitisTown/scripts.pory"
	face_right
	step_end

# 174 "data/maps/MitisTown/scripts.pory"
MitisTown_EventScript_Fisherman_Movement_0:
# 174 "data/maps/MitisTown/scripts.pory"
	face_left
	step_end

MitisTown_EventScript_Parents_Text_0:
# 42 "data/maps/MitisTown/scripts.pory"
	.string "... I should get going.$"

MitisTown_EventScript_JakeIntro_Text_0:
# 55 "data/maps/MitisTown/scripts.pory"
	.string "Hey {PLAYER}, it's me, Jake!$"

MitisTown_EventScript_PlayersHouseSign_Text_0:
# 105 "data/maps/MitisTown/scripts.pory"
	.string "{PLAYER}'s House.$"

MitisTown_EventScript_RivalsHouseSign_Text_0:
# 111 "data/maps/MitisTown/scripts.pory"
	.string "Jake's House.$"

MitisTown_EventScript_LabSign_Text_0:
# 117 "data/maps/MitisTown/scripts.pory"
	.string "Roria Pokémon research lab.$"

MitisTown_EventScript_DiggingSiteSign_Text_0:
# 123 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town Digging Site.\pNote: those ledges are supposed\nto be stairs...$"

MitisTown_EventScript_Fisherman_Text_0:
# 164 "data/maps/MitisTown/scripts.pory"
	.string "You don't have a Pokémon yet, right?\nYou should go to the lab first.$"

MitisTown_EventScript_Fisherman_Text_1:
# 167 "data/maps/MitisTown/scripts.pory"
	.string "Good luck on your Journey!\pIf you need help, talk to me.\nI'll heal your Pokémon!$"

MitisTown_EventScript_Fisherman_Text_2:
# 171 "data/maps/MitisTown/scripts.pory"
	.string "Here, let me heal your Pokémon!$"

MitisTownSign::
# 181 "data/maps/MitisTown/scripts.pory"
	.string "Mitis Town.\n"
	.string "The fresh breeze of a new start.$"

MitisTown_JakeDialogue::
# 186 "data/maps/MitisTown/scripts.pory"
	.string "I can't believe the day has come!\nWe'll finally get our first Pokémon!\p"
	.string "I saw your parents go to the digging site.\nYou should go check them.\lI'll wait for you at the lab!$"

MitisTown_ParentsDialogue1::
# 191 "data/maps/MitisTown/scripts.pory"
	.string "Dad: Well, that ought to take care of it...\p"
	.string "Mom: We should keep this hidden\nto everyone. For their safety.\p"
	.string "Dad: You're right...$"

MitisTown_ParentsDialogue2::
# 197 "data/maps/MitisTown/scripts.pory"
	.string "Mom: {PLAYER}! You startled us!\p"
	.string "Dad: Hey champ! We found some things we\nhad to check here before\lgoing to the lab\p"
	.string "Mom: Today is your special day!\nYou'll finally get your first Pokémon!\p"
	.string "Dad: We were about to head to the lab\nto meet up with professor Cypress.\p"
	.string "Mom: We'll see you there!$"

MitisTown_ScientistDialogue::
# 205 "data/maps/MitisTown/scripts.pory"
	.string "At the end of the road lies Roria's\nPokémon research lab.\p"
	.string "Years of studies on Pokémon are\nstored and mantained there.$"

MitisTown_TechBoyDialogue::
# 210 "data/maps/MitisTown/scripts.pory"
	.string "Technology is amazing!\p"
	.string "People can easily make their own\ngames using decomps!$"

MitisTown_CamperDialogue::
# 215 "data/maps/MitisTown/scripts.pory"
	.string "I'm not a good swimmer.\n"
	.string "Matter of fact, I'm scared of water.\p"
	.string "People sometimes use Pokémon to\ntravel on water.\p"
	.string "I wonder if that'll help me\nfight my fear of water...$"

MitisTown_PokeballDialogue::
# 222 "data/maps/MitisTown/scripts.pory"
	.string "Some Pokéballs are better\nthan others.\p"
	.string "Some work better on certain Pokémon\nwhile others work better in\lspecific places.$"
