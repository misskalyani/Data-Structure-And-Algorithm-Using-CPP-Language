// Bubble Sort Method

#include<stdio.h>
#include<conio.h>

void create(int[],int);
void display(int[],int);
void bubblesort(int[],int);

void main()
{
	int a[100],n;
	clrscr();
	printf("\n Enter the number of elements==>");
	scanf("%d",&n);
	printf("\n Enter the arrry==>");
	create(a,n);
	printf("\n The unsorted arry is==>\n");
	display(a,n);
	bubblesort(a,n);
	printf("\n The sorted array is==>\n");
	display(a,n);
	getch();
}

void create(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
}
void display(int a[],int n)
{
   int i;
   for(i=0;i<n;i++)
   {
    printf("\n%d",a[i]);
   }
}

void bubblesort(int a[],int n)
{
   int  i,pos,temp;
   for(pos=1;pos<n;pos++)
   {
   for(i=0;i<n-pos;i++)
    {
     if(a[i]>a[i+1])
       {
	 temp =a[i];
	 a[i]=a[i+1];
	 a[i+1]=temp;
	 }
       }
     }
}


/*OUTPUT
 Enter the number of elements==>5

 Enter the arrry==>50
30
40
10
20

 The unsorted arry is==>

50
30
40
10
20
 The sorted array is==>

10
20
30
40
50*/
