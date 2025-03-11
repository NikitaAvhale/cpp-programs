#include<iostream.h>
#include<conio.h>

float volume(float side)
{
 float vol;
 vol=side*side*side;
 return vol;
}
float volume(float radius,float height)
{
 float vol;
 vol=3.14*radius*radius*height;
 return vol;
}
float volume(double radius)
{
 float vol;
 vol=(4/2)*3.14*radius*radius*radius;
 return vol;
}

int main()
{
 float r1,h,s;
 double r2;
 clrscr();
 cout<<"\nEnter the value of side of cube:";
 cin>>s;
 cout<<"Enter the value of radius of cylinder:";
 cin>>r1;
 cout<<"Enter the value of height of cylinder:";
 cin>>h;
 cout<<"Enter the value if radius of sphere:";
 cin>>r2;
 cout<<"\nvolume of the cube="<<volume(s);
 cout<<"\nvolume of the cylinder="<<volume(r1,h);
 cout<<"\nvolume of the sphere="<<volume(r2);
 getch();
 return 0;
}

