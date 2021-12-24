/**
 * CALLLIST.H
 */

#ifndef __CALLLIST_H__
#define __CALLLIST_H__

typedef struct Calllist Calllist

struct Calllist
{
	int (*pfunc)(Callist*);
	Calllist *back;
	Calllist *next;
};

Calllist *newcall(int (*)(Calllist *), Calllist *, Calllist *);

#endif /* __CALLLIST_H__ */
