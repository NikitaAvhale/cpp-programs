#include<iostream.h>
#include<conio.h>
class Number
{
 int a,b;
 public:
 Number()
 {
  a=10;
  b=20;
 }
 Number(int x,int y)
 {
  a=x;
  b=y;
 }
 void maximum()
 {
  if(a>b)
  {
   cout<<"\na is greater";
  }
  else
  {
   cout<<"\nb is greater";
  }
 }
};
void main()
{
 Number obj1,obj2(10,20);
 clrscr();
 obj1.maximum();
 obj2.maximum();
 getch();
}
