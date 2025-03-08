#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class district
{
 int d_code,population;
 char d_name[20];
 float area_sqft,lit_rate;
 public:
 void getdata()
 {
  cout<<"\nenter district code:";
  cin>>d_code;
  cout<<"\enter district name:";
  cin>>d_name;
  cout<<"\nenter area:";
  cin>>area_sqft;
  cout<<"\nenter population:";
  cin>>population;
  cout<<"\nenter literacy rate:";
  cin>>lit_rate;
 }
 void putdata()
 {
  cout<<"\ndistrict code="<<d_code<<setw(4);
  cout<<"\ndistrict name="<<d_name<<setw(4);
  cout<<"\narea="<<area_sqft<<setw(4);
  cout<<"\npopulation="<<population<<setw(4);
  cout<<"\nliteracy rate="<<lit_rate<<setw(4);
 }
 void findhrte(district d[10],int i,int n)
 {
  int max,pos;
  max=d[0].lr;
  for(i=0;i<=n;i++)
  {
   if(max<d[i].lr)
   {
    max=d[i].lr;
    pos=i;
   }
   cout<<"\district with maximum literacy rate=";
   d[pos].display();
  }
 }
 void findlit(district d[],int i,int n)
 {
  int min,pos;
  min=d[0].lr;
  for(i=0;i<=n;i++)
  {
   if(min>d[i].lr)
   {
    min=d[i].lr;
    pos=i;
   }
   cout<<"\district with minimum literacy rate=";
   d[pos].display();
  }
 }
};
void main()
{
int n,i;
cout<<"\nenter a number:";
cin>>n;
district d1[14];
for(i=0;i<n;i++)
{
 cout<<"\nenter details of district:"<<i+1<<endl;
 d1[i].getdata();
}
for(i=0;i<=n;i++)
{
 cout<<"\details of district:"<<i+1<<endl;
 d1[i].putdata();
}
d1.findhrte(d1[],i,n);
d1.findlit(d1[],i,n);

getch();
}