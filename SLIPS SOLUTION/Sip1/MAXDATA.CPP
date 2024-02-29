#include<iostream.h>
#include<conio.h>

class Maxdata
{
 public:
	void maximum(int a,int b)
	{
	  if(a>b)
	  {
	   cout<<"The largest number is "<<a<<endl;
	  }
	  else
	  {
	   cout<<"The largest number is "<<b<<endl;
	  }
	}

	void maximum(int a[10])
	{
	int max=0;
	 for(int i=0;i<5;i++)
	 {
	  if(max<a[i])
	  {
	    max=a[i];
	  }
	  else continue;
	 }
	 cout<<"Maximum number is "<<max<<endl;
	}
};

void main()
{
 int x,y;
 int a[10];
 Maxdata M;
 clrscr();
 cout<<"Enter the two numbers to find maximum number "<<endl;
 cin>>x>>y;
 M.maximum(x,y);
 cout<<"Enter the FIVE number to find its maximum "<<endl;
 for(int i=0;i<5;i++)
 {
  cin>>a[i];
 }
 M.maximum(a);
 getch();
}
















