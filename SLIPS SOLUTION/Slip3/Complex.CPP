#include<iostream.h>
#include<conio.h>
class Complex
{
   public :
      int r,i;
    Complex()
    {
    r=0;
    i=0;
    }
    Complex(Complex &c3)
    {
    r=c3.r;
    i=c3.i;
    }
    void read()
    {
    cout<<"Enter the Real and Imginary part "<<endl;
    cin>>r>>i;
    }
    friend Complex operator +(Complex,Complex);
    friend Complex operator -(Complex,Complex);
    friend Complex operator *(Complex,Complex);
    void display();
};
Complex operator *(Complex op1,Complex op2)
{
 Complex op3;
 op3.r=(op1.r*op2.r)-(op1.i*op2.i);
 op3.i=(op1.i*op2.r)-(op1.r*op2.i);
 return op3;
}

Complex operator +(Complex op1,Complex op2)
{
Complex op3;
op3.r=op1.r+op2.r;
op3.i=op1.i+op2.i;
return op3;
}
Complex operator -(Complex op1,Complex op2)
{
Complex op3;
op3.r=op1.r-op2.r;
op3.i=op1.i-op2.i;
return op3;
}

void Complex::display()
{
cout<<r<<"+"<<i<<"i"<<endl;
}
void main()
{
Complex c;
clrscr();
c.read();
Complex c1(c);
c1.display();
c.read();
Complex c2(c);
c2.display();
Complex c4;
cout<<"Addition is"<<endl;
c4=c1+c2;
cout<<"\n";
c4.display();
c.read();
Complex C2(c);
C2.display();
c1.read();
c1.display();
Complex C4;
cout<<"Substraction is"<<endl;
C4=C2-c1;
C4.display();
c.read();
Complex M(c);
M.display();
c1.read();
c1.display();
Complex M1;
cout<<"Multiplication is "<<endl;
M1=M*c1;
M1.display();
getch();

}

Output:-
*****************************************************
3+44i
Addition is

4+46i
Enter the Real and Imginary part
2
3
2+3i
Enter the Real and Imginary part
4
5
4+5i
Substraction is
-2+-2i
Enter the Real and Imginary part
4
3
4+3i
Enter the Real and Imginary part
1
2
1+2i
Multiplication is
-2+-5i
*****************************************************                                                    *
