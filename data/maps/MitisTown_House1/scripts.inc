MitisTown_House1_MapScripts::
	.byte 0


MitisTown_House1_EventScript_OldWoman::
# 7 "data/maps/MitisTown_House1/scripts.pory"
	lockall
# 8 "data/maps/MitisTown_House1/scripts.pory"
	faceplayer
# 9 "data/maps/MitisTown_House1/scripts.pory"
	msgbox MitisTown_House1_OldWomanDialogue, MSGBOX_AUTOCLOSE
# 10 "data/maps/MitisTown_House1/scripts.pory"
	releaseall
	return


MitisTown_House1_EventScript_OldMan::
# 14 "data/maps/MitisTown_House1/scripts.pory"
	lockall
# 15 "data/maps/MitisTown_House1/scripts.pory"
	faceplayer
# 16 "data/maps/MitisTown_House1/scripts.pory"
	msgbox MitisTown_House1_OldManDialogue, MSGBOX_AUTOCLOSE
# 17 "data/maps/MitisTown_House1/scripts.pory"
	releaseall
	return


MitisTown_House1_OldWomanDialogue::
# 22 "data/maps/MitisTown_House1/scripts.pory"
	.string "What I'd do to be young again...\nTo have my own adventure once more...\p"
	.string "Remember young man, time is fleeting.\nEnjoy your adventues to the fullest!$"

MitisTown_House1_OldManDialogue::
# 27 "data/maps/MitisTown_House1/scripts.pory"
	.string "How time flies...\p"
	.string "I remember they once said there were\nonly 151 Pokémon...\l"
	.string "Now there are more than 1000 species!$"
