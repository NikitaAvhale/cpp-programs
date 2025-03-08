#include<iostream.h>
#include<coio.h>
main(){
float pi=3.14,area;
int radius;
clrscr();
printf("enter the radius");
scanf("%d",& radius);
area=pi*radius*radius;
printf("%f",area);
getch();
return 0;
}