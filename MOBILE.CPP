#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class Mobile
{
 int mid;
  char mname[20];
 float mprice;
 public:
 Mobile(int id, const char name[20],float amt)
 {
  mid=id;
  strcpy(mname,name);
  mprice=amt;
 }
 void display()
 {
  cout<<setw(2)<<mid<<"\n";
  cout<<setw(2)<<mname<<"\n";
  cout<<setprecision(3)<<mprice;
 }
};
void main()
{
 Mobile m(101,"Abc",8000.2345);
 clrscr();
 m.display();
 getch();
}

