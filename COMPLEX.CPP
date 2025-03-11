#include<iostream.h>
#include<conio.h>
class complex
{
float real,imag;
public:
complex(float r=0, float i=0):real(r),imag(i){}
void display() const{
cout<< real;
if(imag>=0)
{
cout<<"+" << imag << "i" <<endl;
}
else
{
cout<<"-"<<-imag<<"i" << endl;
}
}
friend complex addComplex(const complex & c1, const complex & c2);
};
complex addComplex(const complex& c1, const complex& c2)
{
return complex(c1.real + c2.real, c1. imag+c2.imag);
}
int main()
{
complex c1(4.5,3.2);
complex c2(1.5,2.8);
cout<<"First complex number";
c1.display();
cout <<"Second complex number: ";
c2.display();
complex result = addComplex (c1,c2);
cout<<"Sum is:";
result.display();
getch();
return 0;
}
