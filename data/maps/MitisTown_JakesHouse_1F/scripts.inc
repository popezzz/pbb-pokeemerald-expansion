MitisTown_JakesHouse_1F_MapScripts::
	.byte 0


MitisTown_JakesHouse_1F_EventScript_JakeMom::
# 7 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	lockall
# 8 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	faceplayer
# 9 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	msgbox MitisTown_JakesHouse_1F_JakeMomDialogue, MSGBOX_AUTOCLOSE
# 10 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	release
	return


MitisTown_JakesHouse_1F_EventScript_JakeDad::
# 14 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	lockall
# 15 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	faceplayer
# 16 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	msgbox MitisTown_JakesHouse_1F_JakeDadDialogue, MSGBOX_AUTOCLOSE
# 17 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	release
	return


MitisTown_JakesHouse_1F_JakeMomDialogue::
# 22 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	.string "Hey {PLAYER}!\p"
	.string "Jake's so excited to embark on his\nfirst adventure!\p"
	.string "I remember him talking about the\nthing's he'll do with you once\lhe'll get his first Pokémon.$"

MitisTown_JakesHouse_1F_JakeDadDialogue::
# 28 "data/maps/MitisTown_JakesHouse_1F/scripts.pory"
	.string "Can you do me a favor and keep\nan eye on Jake for me?\p"
	.string "He's a talented young man, but\nhe's always a bit careless.$"
