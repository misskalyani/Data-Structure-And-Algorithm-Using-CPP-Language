
#include<stdio.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))

struct node
{
int data;
struct node *next,*current;
};

typedef struct node *NODEPTR;

NODEPTR create (NODEPTR head)
{
int i,n;
NODEPTR p,current;
printf("Enter no. of node");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
p=NODEALLOC;
p->next=NULL;
printf("\nEnter the data");
scanf("%d",&p->data);
if(head==NULL)
{
head=current=p;
}
else
{
current->next=p;
current=p;
}
}
return head;
}

int display(NODEPTR head)
{
NODEPTR current=head;
while(current!=NULL)
{
printf("%4d",current->data); 
current=current->next;
}
}

NODEPTR insert(NODEPTR head,int pos,int num)
{
int i;
NODEPTR current,p;
p=NODEALLOC;
p->data=num;
if(pos==1)
{
p->next=head;
head=p;
}
else
{
for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);

p->next=current->next;
current->next=p;

return head;
}
}

NODEPTR Delete(NODEPTR head,int pos)
{
int i;
NODEPTR p,current;
if(pos==1)
{
p=head;
head=head->next;
free(p);
}
else
{
for(i=1,current=head;i<pos-1 && current!=NULL;i++,current=current->next);

p=current->next;
current->next=p->next;
free(p);

return head;
}
}


int main()
{
int ch,pos,num;
NODEPTR head=NULL;
do{
printf("\nMenu");
printf("\n1.Create");
printf("\n2.Insert");
printf("\n3.Delete");
printf("\n4.Display");
printf("\n5.Exit");
printf("\nEnter the your choice");
scanf("%d",&ch);
switch(ch)
{
case 1: head=create(head);
break;
case 2: printf("\nEnter position");
	scanf("%d",&pos);
	printf("\nEnter number");
	scanf("%d",&num);
	head=insert(head,pos,num);
	printf("\n%d Inserted successfully...",num);
break;
case 3: printf("\nEnter position");
	scanf("%d",&pos);
	head=Delete(head,pos);
break;
case 4: printf("\n Linked list");
	display(head);
break;
//case 5: Exit(0);
//break;
}
}while(ch!=5);
}

















OUTPUT-
Menu
1.Create
2.Insert
3.Delete
4.Display
5.Exit
Enter the your choice 1
Enter no. of node 4

Enter the data 123

Enter the data 876

Enter the data 625

Enter the data 985

Menu
1.Create
2.Insert
3.Delete
4.Display
5.Exit
Enter the your choice 4

 Linked list  123  876  625  985
Menu
1.Create
2.Insert
3.Delete
4.Display
5.Exit
Enter the your choice 2

Enter position 3 

Enter number 900

900 Inserted successfully...
Menu
1.Create
2.Insert
3.Delete
4.Display
5.Exit
Enter the your choice 4
 Linked list  123  876  900  625  985
Menu
1.Create
2.Insert
3.Delete
4.Display
5.Exit
Enter the your choice5


