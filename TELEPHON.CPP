#include<iostream.h>
#include<conio.h>
#include<string.h>
class telephone
{
public:char name[30],city[30];
       int tno;
public:void get()
       {
       cout<<"enter name:-";
       cin>>name;
       cout<<"\nenter telephone number:-";
       cin>>tno;
       cout<<"\nenter city name:-";
       cin>>city;
       }
       void search(int tnum)
       {
       cout<<"\ntelephone number of given customer:-"<<tnum;
       }
       void search(char n[30])
       {
       cout<<"\ncustomer name of the given number:-"<<n;
       }
       void search(char ct[30],int tnum)
       {
       cout<<"\n"<<ct<<"  "<<tnum;
       }
};
int main()
{
int i,tno,check;
char name[30],city[30];
telephone t[3];
clrscr();
for(i=0;i<3;i++)
t[i].get();
cout<<"\nsearch the telephone number of the given name";
cout<<"\nenter customer name:-";
cin>>name;
for(i=0;i<3;i++)
{
check=strcmp(name,t[i].name);
if(check==0)
t[i].search(t[i].tno);
}
cout<<"\n\n\nsearch the name of the given telephone number";
cout<<"\nenter telephone no.:-";
cin>>tno;
for(i=0;i<3;i++)
{
if(tno==t[i].tno)
t[i].search(t[i].name);
}
cout<<"\n\n\nsearch all customer in a given city";
cout<<"\nenter city name:-";
cin>>city;
for(i=0;i<3;i++)
{
check=strcmp(city,t[i].city);
if(check==0)
t[i].search(t[i].name,t[i].tno);
}
getch();
return 0;
}
