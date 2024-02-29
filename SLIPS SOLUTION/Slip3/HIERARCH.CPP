#include<iostream.h>
#include<conio.h>
#include<string.h>
class Person
{
 public:
	char lname[20];

	char fname[20];
	Person()
	{}
	Person(char name1[20],char name2[20])
	{
	  strcpy(lname,name1);
	  strcpy(fname,name2);
	}
	void accept()
	{
	 cout<<"Enter the Last name"<<endl;
	 cin>>lname;
	 cout<<"Enter the first name"<<endl;
	 cin>>fname;
	}
	void disp()
	{
	 cout<<"Your Name is"<<endl;
	 cout<<fname<<" "<<lname<<endl;
	}
};

class Employee : public Person
{
 public:

	int eid;
	int d,m,y;
	Employee()
	{}
       /*	Employee(int id,int D)
	{
	 eid=id;
	 Date=D;
	}*/

	void getter()
	{
	 cout<<"Enter the Employee id"<<endl;
	 cin>>eid;
	 cout<<"Enter a joining date"<<endl;
	 cin>>d>>m>>y;
	}
	void setter()
	{
	 cout<<"Employee id ="<<eid<<endl;
	 cout<<"Joining date is="<<d<<"-"<<m<<"-"<<y<<endl;
	}
};

class Full_Time : public Employee
{
 public:
	int sal,bonus;
	Full_Time()
	{}
	void getters()
	{
	 cout<<"Enter the salary and bonus"<<endl;
	 cin>>sal>>bonus;
	}
	void setters()
	{
	 cout<<"Salary is= "<<sal<<endl;
	 cout<<"Bonus is ="<<bonus<<endl;
	 cout<<"Total salary is= "<<sal+bonus<<endl;
	}
};

class Part_Time : public Employee
{
 public:
	int wh,rate;
	Part_Time()
	{}
	void get()
	{
	 cout<<"Enter the Working hours"<<endl;
	 cin>>wh;
	 cout<<"Enter the per hour rate pay"<<endl;
	 cin>>rate;
	}

	void set()
	{
	  cout<<"Working hours="<<wh<<endl;
	  cout<<"Per hour rate ="<<rate<<endl;
	  cout<<"Total amount paid ="<<rate*wh<<endl;
	}
};


void main()
{
char c;
clrscr();
 Full_Time ft;
 ft.accept();
 cout<<"Are you doing full time ?"<<endl;
 cin>>c;
 if(c=='y')
 {
 ft.getter();
 ft.getters();
 Full_Time f(ft);
 ft.disp();
 ft.setter();
 ft.setters();
 }
 else
 {
 Part_Time pt;
 pt.getter();
 pt.get();
 Part_Time p(pt);
 pt.disp();
 pt.setter();
 pt.set();
 }


 getch();
}

Output:-
*****************************************
Enter the Last name
Ramesh
Enter the first name
Ambedkar
Are you doing full time ?
n
Enter the Employee id
122
Enter a joining date
12
03
2012
Enter the Working hours
4
Enter the per hour rate pay
500
Your Name is
anwar shaikh
Employee id =122
Joining date is=12-3-2012
Working hours=4
Per hour rate =500
Total amount paid =2000
*************************************************
Enter the Last name
Fulpagr
Enter the first name
Shubh
Are you doing full time ?
y
Enter the Employee id
332
Enter a joining date
12
02
2013
Enter the salary and bonus
5000
200
Your Name is
Shubh Fulpagr
Employee id =332
Joining date is=12-2-2013
Salary is= 5000
Bonus is =200
Total salary is= 5200
***************************************************



