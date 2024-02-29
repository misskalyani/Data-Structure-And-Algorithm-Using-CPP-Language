#include<iostream.h>
#include<conio.h>

class Clock
{
 public:
	int h,m,s;
	Clock()
	{
	 h=0;
	 m=0;
	 s=0;
	}
	Clock(int h,int m,int s)
	{
	 this->h=h;
	 this->m=m;
	 this->s=s;
	}
	void operator ++();
	void operator --();
	void operator <<(Clock);
	void operator >>(Clock);
	void disp();
};

void Clock :: operator ++()
{
 h++;
 s++;
 m++;
}
void Clock :: operator --()
{
 h--;
 m--;
 s--;
}
void Clock :: operator <<(Clock C)
{
 cout<<h<<":"<<m<<":"<<s<<endl;
}

void Clock :: operator >>(Clock C)
{
 cout<<"In hours,minutes,seconds manner"<<endl;
 cin>>h>>m>>s;
}

void Clock :: disp()
{
 cout<<"The time is "<<endl;
 if(h<=12)
 {
   while(m>=60)
   {
    h++;
    m=m-60;
   }

   while(s>=60)
   {
    m++;
    s=s-60;
   }

 }


 else
 {
  while(h>=12)
  {
   h=h-12;
  }

  while(m>=60)
  {
   h++;
   m=m-60;
  }

  while(s>=60)
  {
   m++;
   s=s-60;
  }
 }

}

void main()
{
 Clock C;
 int a,b,c;
 clrscr();
 cout<<"Enter the time to increament"<<endl;
 Clock C2(a,b,c);
 C2>>C2;
 C2++;
 C2.disp();
 C2<<C;
 cout<<"Enter time to decreament"<<endl;
 Clock C1(a,b,c);
 C1>>C1;
 C1--;
 C1.disp();
 C1<<C;
 getch();
}
Output:-
**************************************************
Enter the time to increament
In hours,minutes,seconds manner
12
23
34
The time is
1:24:35
Enter time to decreament
In hours,minutes,seconds manner
12
23
34
The time is
11:22:33
**************************************************










