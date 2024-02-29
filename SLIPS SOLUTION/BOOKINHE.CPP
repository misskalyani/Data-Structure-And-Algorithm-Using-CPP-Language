#include<iostream.h>
#include<conio.h>
#include<string.h>

class Media
{
 public:
	int id;
	char title[20];
	void get()
	{
	 cout<<"Enter the Media title and id"<<endl;
	 cin>>title>>id;
	}
	void set()
	{
	 cout<<"Media Title is:- "<<title<<endl;
	 cout<<"Media ID is:- "<<id<<endl;
	}
};

class Book : public Media
{
  public:

	char ISBN[20];
	int price;
	virtual void accept()
	{
	 cout<<"Enter the ISBN number and price"<<endl;
	 cin>>ISBN>>price;
	}
	virtual void disp()
	{
	 cout<<"ISBN number ="<<ISBN<<endl;
	 cout<<"Price ="<<price<<endl;
	}
};

class CD : public Media
{
 public:
	int capacity;
	void getter()
	{
	 cout<<"Enter data in MB"<<endl;
	 cin>>capacity;
	}
	void setter()
	{
	 cout<<"Data is MB="<<capacity<<endl;
	}
};

void main()
{

 int n,i;
 char type[5];
 Book B;
 clrscr();
 cout<<"How much Media items you Buy?"<<endl;
 cin>>n;
 CD C;
 for(i=0;i<n;i++)
 {
  cout<<"The Media Item is CD or Book?"<<endl;
  cin>>type;
  if(strcmp(type,"cd")==0)
  {
   C.get();
   C.getter();
   C.set();
   C.setter();
  }
  else
  {
   B.get();
   B.accept();
   B.set();
   B.disp();
  }
 }
  getch();
}

