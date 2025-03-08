#include<iostream.h>
#include<conio.h>
#include<string.h>
class worker
{
  char wname[20];
  int no_of_days_worked;
  float pay_rate,sum;
  public:
  worker()
  {
   strcpy(wname,"abc");
   no_of_days_worked=350;
   pay_rate=100.00;
  }
  worker(const char name[20],int days,float rate)
  {
   strcpy(wname,name);
   no_of_days_worked=days;
   pay_rate=rate;
  }
  worker(worker &w)
  {
   strcpy(wname,w.wname);
   no_of_days_worked=w.no_of_days_worked;
   pay_rate=w.pay_rate;
  }
  void displaysum()
  {
   sum=no_of_days_worked * pay_rate;
   cout<<"\nsalary of worker is: "<<sum;
  }
};
void main()
{
 worker w1,w2("abc",350,100.00),w3(w2);
 clrscr();
 w1.displaysum();
 w2.displaysum();
 w3.displaysum();
 getch();
}