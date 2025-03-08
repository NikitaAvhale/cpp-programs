#include<iostream.h>
#include<conio.h>
class student
{
  int rollno;
  char name[20];
  char class1[20];
  char branch[20];
public:
void getdata()
{
 cout<<"enter rollno: ";
 cin>>rollno;
 cout<<"enter name: ";
 cin>>name;
 cout<<"enter branch: ";
 cin>>branch;
}
void putdata()
{
 cout<<"Roll number: "<<rollno<<"\n";
 cout<<"Name: "<<name<<"\n";
 cout<<"Branch: "<<branch<<"\n";
}
};
void main()
{
student std;
clrscr();
std.getdata();
std.putdata();
getch();
}

