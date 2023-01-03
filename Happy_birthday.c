#include"stdio.h"
#include"conio.h"
void main()
{
    clrscr();
    char c[10];
printf("Enter your name=");
scanf("%s",&c);
for(int a=1;a<11;a++)
{
    textcolor(RED);
    cprintf("\nHappy Birthday dear %s\3",c);
}
}