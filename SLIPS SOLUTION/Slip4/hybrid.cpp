#include<conio.h>
#include<iostream.h>
class person
{
  public:
	char fname[20],lname[20];
	void accept()
	 {
	   cout<<"Enter the first name";
	   cin>>fname;
	   cout<<"Enter the last name";
	   cin>>lname;
	 }
	void display()
	 {
	   cout<<"First name="<<fname;
	   cout<<"Last name="<<lname;
	 }
};
class student:public person
{
   public:
	  char course[20];
	  void accept1()
	    {
	      cout<<"Enter the course name";
	      cin>>course;
	    }
	  void disp1()
	    {
	      cout<<"COURSE="<<course;
	    }
};
class Teacher:public person
{
  public:
	 char dept[20];
	 void accept2()
	   {
	      cout<<"Enter the department name";
	      cin>>dept;
	   }
	void disp2()
	   {
	      cout<<"DEPARTMENT="<<dept;
	   }
};
class Teacherass:public student
{
   public:
	 int n,i,pno;
	 char name[20],addr[20];
	 void accept3()
	  {
	    cout<<"Enter the name";
	    cin>>name;
	    cout<<"Enter the address";
	    cin>>addr;
	    cout<<"Enter the phone no";
	    cin>>pno;

	    }
	 void disp3()
	   {
	      cout<<"Name="<<name;
	      cout<<"Address="<<addr;
	      cout<<"Phone no="<<pno;
	   }
};
int main()
{
  int n,i,pno;
  char name[20],addr[20];
  clrscr();
 Teacherass t;
   t.accept();
   t.display();
   t.accept1();
   t.disp1();
   t.accept3();
   t.disp3();
   getch();
   return 0;
 }

/*
Output:-
Enter the first name
Ganesh                                                                          
Enter the last name
Ambedkar
First name=Ganesh
Last name=Ambedkar
Enter the course name= SYBCS
COURSE=SYBCS
Enter the name=Akki
Enter the address =shrirampur
Enter the phone no=9876904658
Name=Akki
Address=shrirampur
Phone no=9876904658
*/
                                                                                

                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
