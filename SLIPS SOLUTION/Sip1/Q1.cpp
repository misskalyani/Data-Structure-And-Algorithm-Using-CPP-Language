// Menu driven program for stack

#include<stdio.h>
#include<conio.h>

#define MAX 100

struct stack     //create structure
{
 int top;
 int  item[MAX];
 };

void initstack(struct stack*);
int isfull(struct stack*);
int  isempty(struct stack*);
void push(struct stack*,int);
int pop(struct stack*);
void display(struct stack*);
//kalyani Chaudhari 
void main()
{

  int n,ch;
  struct stack s; //memory allocate
  clrscr();
  initstack(&s);
  do
  {
   printf("\n\nMenu");
   printf("\n 1: Push");
   printf("\n 2:Pop");
   printf("\n 3:Display");
   printf("\n 4:Exit");
   printf("\n Enter your choice==");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:
	    printf("Enter your  number to push==");
	    scanf("%d",&n);
	    push(&s,n);
     break;

     case 2:
	   printf("%d is pop successfully",pop(&s));
     break;

     case 3:
	    printf("The stack is");
	    display(&s);
     break;

     case 4:
	     exit();
     break;

     default:
	      printf(" You enter wrong choice");


  }//end of switch
 }while(ch!=4);//end of do while

getch();//End of main
}

void initstack(struct stack *ps) //fun defn
{
   ps->top=-1;
}
int isfull(struct stack *ps)
{
   if(ps->top==MAX-1)
   {
    return 1;
   }
   else
   {
     return 0;
    }
}
int isempty(struct stack *ps)
{
     if(ps->top==-1)
   {
    return 1;
   }
   else
   {
     return 0;
    }
}
void push(struct stack *ps ,int n)
{
   if(isfull(ps))
   {
      printf("Stack is full");
   }
   ps->top++;
   ps->item[ps->top]=n;
}
int pop(struct stack *ps)
{
  int  num;
   if(isempty(ps))
   {
      printf("Stack is empty");
   }
   num=ps->item[ps->top];
   ps->top--;
   return num;

}
void  display(struct stack *ps)
{
  int i;
  if(isempty(ps))
  {
	 printf("\nstack is empty");
  }
  for(i=ps->top;i>=0;i--)
  {
   printf("\n%d",ps->item[i]);
  }
}




/*OUTPUT
