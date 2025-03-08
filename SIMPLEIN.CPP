#include<iostream.h>
#include<conio.h>
class simpleinrst
{
 float p,r;
 int n;
 public:
 simpleinrst(float pri,int t,float rt=9.5 )
 {
   p=pri;
   r=rt;
   n=t;
 }
 void findinterest()
 {
  float total=0 ;
  total=((p*r*n)/100);
  cout<<(p*n*r)/100;
  cout<<"\n"<<p<<"\n"<<r<<"\n"<<n<<"\n";
  cout<<"\nsimple interest is:"<<total;
 }
};
void main()
{
 simpleinrst s1(50000,10);
 clrscr();
 s1.findinterest();
 getch();
}