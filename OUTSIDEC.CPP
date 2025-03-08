#include<iostream.h>
#include<conio.h>
class student
{
  int rollno;
  char name[20];
  char class1[20];
  char branch[20];
public:
  void getdata();
  void putdata();
};
void student::getdata()
{
  cout<<"enter rollno: ";
  cin>>rollno;
  cout<<"enter name: ";
  cin>>name;
  cout<<"enter branch: ";
  cin>>branch;
}
void student::putdata()
{
cout<<"roll no: "<<rollno<<"\n";
cout<<"name: "<<name<<"\n";
cout<<"branch: "<<branch<<"\n";
}
void main()
{
 student st1;
 st1.getdata();
 st1.putdata();
 getch();
}