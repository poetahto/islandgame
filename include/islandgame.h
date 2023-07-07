#ifndef GUARD_ISLANDGAME_H
#define GUARD_ISLANDGAME_H

#include "gba/types.h"
#include "constants/map_groups.h"

#define ISLANDGAME_STARTING_MAP_GROUP   MAP_GROUP ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_MAP_NUM     MAP_NUM   ( FOREST_BASE_CAMP_FRONT_LAWN )
#define ISLANDGAME_STARTING_X           10
#define ISLANDGAME_STARTING_Y           15

#define ISLANDGAME_JUNGLE_ROUTE1_GROUP   MAP_GROUP ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_NUM     MAP_NUM   ( ISLAND_JUNGLE_ROUTE1 )
#define ISLANDGAME_JUNGLE_ROUTE1_X       10
#define ISLANDGAME_JUNGLE_ROUTE1_Y      54

// Custom intro cutscene
void IslandGameCustomStartup();

// Make sure that this string is always exactly 7 characters long, or compile warnings
// will follow!
#define ISLANDGAME_PLAYER_NAME          "GAMER "

// This mon definition is kinda basic, we might want more control over exact moveset later
// but for testing now, its probably fine
#define ISLANDGAME_STARTING_MON         SPECIES_ARBOK
#define ISLANDGAME_STARTING_MON_LEVEL   36
#define ISLANDGAME_STARTING_MON_ITEM    ITEM_NONE

#endif // GUARD_ISLANDGAME_H
