#include "coordinates.h"

extern int board[11][11];

extern Player winner;

void play();

bool put_stone(Player player, Board_XY Board_XY);

void switch_player();

bool has_won(Player player);

void restart_game();