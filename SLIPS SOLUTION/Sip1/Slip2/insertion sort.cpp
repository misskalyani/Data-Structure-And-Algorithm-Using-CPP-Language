

#include<stdio.h>
#include<conio.h>

void main()
{
  int i,n,a[100],k,key;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  printf("Enter the array");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   }
   printf("\n\n the array is");
   for(i=0;i<n;i++)
   {
   printf("\n%d",a[i]);
   }
   for(i=1;i<n;i++)
   {
     key=a[i];
     for(k=i-1;k>=0&&a[k]>key;k--)
     {
       a[k+1]=a[k];
       }
       a[k+1]=key;
    }
   printf("\n\n the sorted array is");
   for(i=0;i<n;i++)
   {
   printf("\n%d",a[i]);
   }
   getch();
}
