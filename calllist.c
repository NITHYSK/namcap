/**
 * CALLLIST.C
 */

#include "calllist.h"

static Calllist *globalcalllist = NULL;

Calllist *newCall(int (*pfunc)(Calllist*), Calllist *back, Calllist *next)
{
	Calllist *newcall = (Calllist *)malloc(sizeof(Calllist));
	newcall.pfunc	= pfunc;
	newcall.back	= back;
	newcall.next	= next;
	return newcall;
}

Calllist *setHeadCall(int (*pfunc)(Calllist *))
{
	return newCall(pfunc, getHeadCall
}

Calllist *getHeadCall()
{

}
