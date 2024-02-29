#include<stdio.h>
#include<conio.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node *NODEPTR;

void main()
{
	void display(NODEPTR);
	NODEPTR createlist(NODEPTR);
	NODEPTR merge(NODEPTR, NODEPTR, NODEPTR);
	NODEPTR list1 = NULL, list2 = NULL, list3 = NULL;
	clrscr();
	list1 = createlist(list1);
	list2 = createlist(list2);
	list3 = merge(list1, list2, list3);
	printf("\n The first list is : \n\n");
	display(list1);
	printf("\n The second list is : \n\n");
	display(list2);
	printf("\n The third list is : \n\n");
	display(list3);
	getch();
}
NODEPTR createlist(NODEPTR list)
{
	int n, i, arr[20];
	NODEPTR temp, newnode;
	printf("\n\nEnter the no. of elements in the list : ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		printf("\nEnter the element arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	temp = list;
       //	for(i=0; i<=n; i++)
	{
		newnode = (NODEPTR)malloc(sizeof(struct node));
		newnode -> next = NULL;
		scanf("%d",&newnode->data);
		if(list == NULL)
			list = temp = newnode;
		else
			temp -> next = newnode;
			temp = newnode;
	}
	return list;
}

void display(NODEPTR list)
{
	NODEPTR temp = list;
	for(temp=list; temp!=NULL; temp=temp->next)
	printf("%d\t",temp->data);
}

NODEPTR merge(NODEPTR list1, NODEPTR list2, NODEPTR list3)
{
	NODEPTR t1=list1, t2=list2, t3=list3, newnode;
	while(t1 && t2)
	{
		newnode = (NODEPTR)malloc(sizeof(struct node));
		newnode -> next = NULL;
		if((t1->data) < (t2->data))
		{
			newnode -> data = t1 -> data;
			t1 = t1 -> next;
		}
		else
		{
			newnode -> data = t2 -> data;
			t2 = t2 -> next;
		}
		if(list3 == NULL)
			t3 = list3 = newnode;
		else
		{
			t3 -> next = newnode;
			t3 = t3 -> next;
		}
	}
	if(t1)
		t3 -> next = t1;
	if(t2)
		t3 -> next = t2;
	return list3;
}


