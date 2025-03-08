#include<iostream.h>
#include<conio.h>
class point
{
 int x,y;
 public:
 point()
 {
  x=30;
  y=40;
 }
 point(int a,int b)
 {
  x=a;
  y=b;
 }
 point(point &p)
 {
  x=p.x;
  y=p.y;
 }
 void display()
 {
  cout<<"\nvalue of x="<<x;
  cout<<"\nvalue of y="<<y;
 }
};
void main()
{
 point obj1(10,20),obj2(obj1),obj3;
 clrscr();
 obj1.display();
 obj2.display();
 obj3.display();
 getch();
}
