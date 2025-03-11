#include<iostream.h>
#include<conio.h>
#include<string.h>
class printdata
{
 public:
  void print(int no)
  {
   cout<<"\n<"<<no<<">";
  }
  void print(char *str)
  {
   cout<<"\""<<str<<"\"";
  }
  void print(int n,char *str)
  {
   char *str1=new char[20];
   int j,i;
   for( i=0;str[i]!='\0';i++)
   {
    j=i;
     if(i==n)
      break;
     else
     {
      str1[i]=str[i];
     }
   }
   str1[j]='\0';
   cout<<"\n\""<<str1<<"\"";
  }
};
int main()
{
 printdata ob1;
 int num,n1,n2;
 char *str,ch;
 clrscr();
 cout<<"\n Enter num : ";
 cin>>num;
 ob1.print(num);
 //str=new char[30];
 cout<<"\n Enter string : ";
 cin>>str;
 ob1.print(str);
 cout<<"\n Enter string :";
 cin>>str;
 cout<<"\n Enter no of characters to be display : ";
 cin>>num;
 ob1.print(num,str);
 getch();
 return 0;
}
