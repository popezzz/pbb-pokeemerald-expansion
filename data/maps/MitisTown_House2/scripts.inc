MitisTown_House2_MapScripts::
	.byte 0


MitisTown_House2_EventScript_CoupleMan::
# 7 "data/maps/MitisTown_House2/scripts.pory"
	lockall
# 8 "data/maps/MitisTown_House2/scripts.pory"
	faceplayer
# 9 "data/maps/MitisTown_House2/scripts.pory"
	msgbox MitisTown_House2_CoupleManDialogue, MSGBOX_AUTOCLOSE
# 10 "data/maps/MitisTown_House2/scripts.pory"
	releaseall
	return


MitisTown_House2_EventScript_CoupleWoman::
# 14 "data/maps/MitisTown_House2/scripts.pory"
	lockall
# 15 "data/maps/MitisTown_House2/scripts.pory"
	faceplayer
# 16 "data/maps/MitisTown_House2/scripts.pory"
	msgbox MitisTown_House2_CoupleWomanDialogue, MSGBOX_AUTOCLOSE
# 17 "data/maps/MitisTown_House2/scripts.pory"
	releaseall
	return


MitisTown_House2_CoupleManDialogue::
# 22 "data/maps/MitisTown_House2/scripts.pory"
	.string "Did you know?\p"
	.string "Pokémon are stronger when using moves\nof the same type.\p"
	.string "Makes sense.$"

MitisTown_House2_CoupleWomanDialogue::
# 28 "data/maps/MitisTown_House2/scripts.pory"
	.string "My husband always has interesting\nPokémon bits of knowledge.\p"
	.string "Last time he told me some Pokémon\nevolve only when they have a strong\lbond with their trainer.$"
