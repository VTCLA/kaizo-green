FourIsland_IcefallCave_Entrance_MapScripts:: @ 8163D3A
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Entrance_OnTransition
	.byte 0

FourIsland_IcefallCave_Entrance_OnTransition:: @ 8163D40
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND_ICEFALL_CAVE_ENTRANCE
	end