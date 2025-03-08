#include<iostream.h>
#include<conio.h>
class distance
{
 int feet,inches;
 public:
 void input_dist()
 {
  cout<<"\nenter distance in feet: ";
  cin>>feet;
  cout<<"\nenter distance in inches: ";
  cin>>inches;
 }
 void output_dist()
 {
  cout<<"\ndistance in feet ="<<feet;
  cout<<"\ndistance in inches ="<<inches;
 }
 void add(distance x1,distance x2)
 {
  feet=x1.feet+x2.feet;
  inches=x1.inches+x2.inches;
  feet=feet+(inches/12);
  inches=inches%12;
 }
 void display_sum()
 {
  cout<<"\nthe sum of distance in feet ="<<feet;
  cout<<"\nthe sum of distance in inches ="<<inches;
 }
};
void main()
{
  distance x1,x2,x3;
  clrscr();
  x1.input_dist();
  x1.output_dist();
  x2.input_dist();
  x2.output_dist();
  x3.add(x1,x2);
  x3.display_sum();
  getch();
}