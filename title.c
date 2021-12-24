/**
 * TITLE.C
 */

#include "title.h"

int title()
{
	for(;;)
	{
		switch(isInterrupt)
		{
			case __KEY_ENTER:
				game();
				break;
		}
	}
	return 0;
}
