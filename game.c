/**
 * GAME.C
 */

#include "game.h"

int game()
{
	for(;;)
	{
		switch(isInterrupt)
		{
			case 'p':
				pause();
				break;
			case 'w':
				break;
			case 'a':
				break;
			case 's':
				break;
			case 'd':
				break;
			case __KEY_ENTER:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
}
