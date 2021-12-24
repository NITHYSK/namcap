/**
 * PAUSE.C
 */

#include "pause.h"

int pause()
{
	for(;;)
	{
		switch(isInterrupt)
		{
			case p:			// Pが押下された場合、ゲームに戻る
				return 0;
				break;
			case __KEY_ESC:		// ESCが押下された場合、タイトル画面に戻る
				
		}
	}
}
