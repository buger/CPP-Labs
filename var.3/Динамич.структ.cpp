#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct list
{
	int info;
	list *next, *prev;
};

int NewEl(list* &Head, list* &Tail, int pos)
{
	int i;
	list *X, *Y;

	if (pos==1)
	{
		Y=new list;
		Y->info=random(10);
		Y->prev=NULL;
		Y->next=Head;
		Head->prev=Y;
		Head=Y;
	}
	else
	{
		X=new list;
		X=Head;
		for (i=0;i<=pos-2;i++)
		{
			if (X!=Tail)
				X=X->next;
			else
				return 1;
		}
		Y=new list;
		Y->info=random(10);
		Y->prev=X->prev;
		X->prev->next=Y;
		Y->next=X;
		X->prev=Y;
	}

	return 0;
}

void Replace(list *Head, list *Tail, int El1, int El2)
{
	list *X;
	X=new list;
	X=Head;

	while (X!=Tail)
	{
		if (X->info==El1)
			X->info=El2;
		X=X->next;
	}
	if (X->info==El1)
		X->info=El2;
}

void PrintList(list *Head, list *Tail)
{
	list *X;
	X=new list;
	X=Head;

	while (X!=Tail)
	{
		printf("%d ",X->info);
		X=X->next;
	}
	printf("%d ",X->info);
}

void main()
{
	clrscr();
	randomize();

	list *Head, *Tail;
	int el1, el2, i, n;

	Head=new list;
	Tail=new list;
	Head->info=random(10);
	Head->prev=NULL;
	Head->next=NULL;
	Tail=Head;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for (i=1;i<=n-1;i++)
		NewEl(Head,Tail,1);

	printf("Your list: ");
	PrintList(Head,Tail);
	printf("\nEnter element to replace: ");
	scanf("%d",&el1);
	printf("Enter element to replace with: ");
	scanf("%d",&el2);
	Replace(Head,Tail,el1,el2);
	printf("New list: ");
	PrintList(Head,Tail);

	delete Head;
	delete Tail;

	getch();
}