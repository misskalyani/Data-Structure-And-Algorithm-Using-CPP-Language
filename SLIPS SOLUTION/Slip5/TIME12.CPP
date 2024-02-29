#include<iostream.h>
#include<conio.h>
#include<string.h>
class Time12
{
  private:
	  int h,m,s;
	  char type[10];
  public:

	 void accessors();
	 void mutators();
};
inline void Time12::accessors()
{
  cout<<"Enter 12 hour time"<<endl;
  cin>>h>>m>>s;
  cout<<"Enter the type"<<endl;
  cin>>type;
}
inline void Time12::mutators()
{
  if(strcmp(type,"PM")==0 || strcmp(type,"pm")==0)
     {
	h=h+12;
       cout<<h<<":"<<m<<":"<<s<<endl;
     }
  else
     {
	cout<<h<<":"<<m<<":"<<s<<endl;
     }
}
class Time24
{
  private:
	  int h1,m1,s1;
	  char type[10];
  public:

	 void accessors();
	 void mutators();
};
inline void Time24::accessors()
{
  cout<<"Enter 24 hour time"<<endl;
  cin>>h1>>m1>>s1;
}
inline void Time24::mutators()
{
 h1=24-h1;
 cout<<h1<<":"<<m1<<":"<<s1<<"PM"<<endl;
}
void main()
{
  Time12 ob;
  Time24 ob1;
  clrscr();
  ob.accessors();
  ob.mutators();
  ob1.accessors();
  ob1.mutators();
  getch();
}
Output:-
*****************************************
Enter 12 hour time
06
45
34
Enter the type
PM
18:45:34
Enter 24 hour time
22
45
34
2:45:34PM
******************************************











