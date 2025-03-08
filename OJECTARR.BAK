#include<iostream.h>
#include<conio.h>
class books
{
 char title[30];
 float price;
public:
void getdata();
void putdata();
};
void books::getdata()
{
 cout<<"title:";
 cin>>title;
 cout<<"price:";
 cin>>price;
}
void books::putdata()
{
cout<<"title:"<<title<<"\n";
cout<<"price:"<<price<<"\n";
}
int main()
{
books book[4];
int i;
clrscr();
for(i=0;i<4;i++)
{
cout<<"enter details of book"<<(i+1)<<"\n";
book[i].getdata();
}
for(i=0;i<4;i++)
{
cout<<"\nbook"<<(i+1)<<"\n";
book[i].putdata();
}
getch();
return 0;
}