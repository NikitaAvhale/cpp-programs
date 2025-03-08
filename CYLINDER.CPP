#include<iostream.h>
#include<conio.h>
class cylinder
{
 float radius,height,volume,area;
public:
 void setradius(float);
 void setheight(float);
 void volume1();
 void area1();
};
void cylinder::setradius(float r)
{
radius=r;

}

void cylinder::setheight(float h)
{
 height=h;
 }
void cylinder::volume1()
{
volume=3.14*radius*radius*height;
cout<<"\nvolume of cylinder is:"<<volume;
}
void cylinder::area1()
{
area=2*3.14*height+2*3.14*radius*radius;
cout<<"\narea of cylinder is:"<<area;
}
int main()
{
float r,h,r1,h1;
cylinder c1,c2;
clrscr();
cout<<"\ncylinder 1:";
cout<<"\nenter radius :";
cin>>r;
cout<<"\nenter height:";
cin>>h;
c1.setradius(r);
c1.setheight(h);
c1.volume1();
c1.area1();
cout<<"\ncylinder 2:";
cout<<"\nenter radius :";
cin>>r1;
cout<<"\nenter height:";
cin>>h1;
c2.setradius(r1);
c2.setheight(h1);
c2.volume1();
c2.area1();
getch();
return 0;
}