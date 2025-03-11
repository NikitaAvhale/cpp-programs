#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
 int meter,centimeter;
 public:
 void getdata()
 {
  cout<<"enter distance in meter and centimeter:";
  cin>>meter>>centimeter;
 }
 void display()
 {
  cout<<"\nmeter:"<<meter;
  cout<<"\ncentimeter:"<<centimeter;
 }
 friend void add(DB d1,DM d2);
};
class DB
{
 int feet,inches;
 public:
 void getdata()
 {
  cout<<"enter distance in feet and inches:";
  cin>>feet>>inches;
 }
 void display()
 {
  cout<<"\nfeet:"<<feet;
  cout<<"\ninches:"<<inches;
 }
 friend void add(DB d1,DM d2);
};
void add(DB d1,DM d2)
{
 DM d;
 int sum;
 sum=(d2.meter*100+d2.centimeter+d1.feet*30.48+d1.inches*2.54);
 if(sum>100)
 {
  d.meter=sum/100;
  d.centimeter=sum%100;
 }
 else
 {
  d.meter=0;
  d.centimeter=sum;
 }
 d.display();
}
void main()
{
 DB d1;
 DM d2;
 clrscr();
 d1.getdata();
 d2.getdata();
 d1.display();
 d2.display();
 cout<<"\nAddition of meter and centimeter:";
 add(d1,d2);
 getch();
}
