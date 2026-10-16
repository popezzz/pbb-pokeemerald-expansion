Route1_Roria_MapScripts::
	.byte 0


Route1_Trainer_Ralph::
# 5 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_RALPH, Route1_Text_RalphIntro, Route1_Text_RalphDefeat
# 6 "data/maps/Route1_Roria/scripts.pory"
	goto_if_defeated TRAINER_ROUTE_1_RALPH, Route1_EventScript_RalphPostBattle
	end


Route1_EventScript_RalphPostBattle::
# 11 "data/maps/Route1_Roria/scripts.pory"
	lockall
# 12 "data/maps/Route1_Roria/scripts.pory"
	msgbox Route1_EventScript_RalphPostBattle_Text_0, MSGBOX_YESNO
# 13 "data/maps/Route1_Roria/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route1_EventScript_RalphRematch
# 14 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_EventScript_RalphRematch::
# 18 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE_1_RALPH, Route1_Text_RalphDefeat
# 19 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_Trainer_Jack::
# 33 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_JACK, Route1_Text_JackIntro, Route1_Text_JackDefeat
# 34 "data/maps/Route1_Roria/scripts.pory"
	goto_if_defeated TRAINER_ROUTE_1_JACK, Route1_EventScript_JackPostBattle
	end


Route1_EventScript_JackPostBattle::
# 39 "data/maps/Route1_Roria/scripts.pory"
	lockall
# 40 "data/maps/Route1_Roria/scripts.pory"
	msgbox Route1_EventScript_RalphPostBattle_Text_0, MSGBOX_YESNO
# 41 "data/maps/Route1_Roria/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route1_EventScript_JackRematch
# 42 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_EventScript_JackRematch::
# 46 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE_1_JACK, Route1_Text_JackDefeat
# 47 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_Trainer_Susie::
# 59 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_single TRAINER_ROUTE_1_SUSIE, Route1_Text_SusieIntro, Route1_Text_SusieDefeat
# 60 "data/maps/Route1_Roria/scripts.pory"
	goto_if_defeated TRAINER_ROUTE_1_SUSIE, Route1_EventScript_SusiePostBattle
	end


Route1_EventScript_SusiePostBattle::
# 65 "data/maps/Route1_Roria/scripts.pory"
	lockall
# 66 "data/maps/Route1_Roria/scripts.pory"
	msgbox Route1_EventScript_RalphPostBattle_Text_0, MSGBOX_YESNO
# 67 "data/maps/Route1_Roria/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route1_EventScript_SusieRematch
# 68 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_EventScript_SusieRematch::
# 72 "data/maps/Route1_Roria/scripts.pory"
	trainerbattle_no_intro TRAINER_ROUTE_1_SUSIE, Route1_Text_SusieDefeat
# 73 "data/maps/Route1_Roria/scripts.pory"
	release
	return


Route1_EventScript_RalphPostBattle_Text_0:
# 12 "data/maps/Route1_Roria/scripts.pory"
	.string "You're pretty strong!\nWant a rematch?$"

Route1_Text_RalphIntro::
# 22 "data/maps/Route1_Roria/scripts.pory"
	.string "I'll battle you with the bug type\n"
	.string "Pokémon I just caught.$"

Route1_Text_RalphDefeat::
# 27 "data/maps/Route1_Roria/scripts.pory"
	.string "Maybe bug type Pokémon are not the\n"
	.string "strongest...$"

Route1_Text_JackIntro::
# 50 "data/maps/Route1_Roria/scripts.pory"
	.string "Let's battle!$"

Route1_Text_JackDefeat::
# 54 "data/maps/Route1_Roria/scripts.pory"
	.string "I need to train my Pokémon more.$"

Route1_Text_SusieIntro::
# 76 "data/maps/Route1_Roria/scripts.pory"
	.string "My Pokémon are so cute!$"

Route1_Text_SusieDefeat::
# 80 "data/maps/Route1_Roria/scripts.pory"
	.string "My cute little Pokémon!$"
