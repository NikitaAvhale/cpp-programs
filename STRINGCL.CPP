#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
 char str1[10],str2[10];
 int length;
 char com[20],concat[20],rev[10];
 public:
 void getdata()
 {
  cout<<"\enter string1:";
  cin>>str1;
  cout<<"\enter string2:";
  cin>>str2;
 }
 void find_length(char str1[10])
 {
  length=strlen(str1);
  cout<<"\nlength = "<<length;
 }
/* void concatenate(char str1[10],char str2[10])
 {
  concat[20]=strcat(str1,str2);
 }
 void reverse(char str1)
 {
  rev[10]=strrev(str1);
 }
 void compare(char str1,char str2)
 {
  com[20]=strcmp(str1,str2);
 }*/
};
void main()
{
 string s1;
 char str1[10];
 clrscr();
 s1.getdata();
 s1.find_length(str1);
/* s1.concatenate(str1,str2);
 s1.reverse(str1);
 s1.compare(str1,str2);
*/
 getch();
}
