#include"stdio.h"
#include"conio.h"
void main()
{
    clrscr();
    char i[10];
    printf("Enter your name=");
    gets(i);
    for(int j=1;j<=10;j++)
    {
     textcolor(j) ;  
  cprintf("your name is %s\n",i);
    }
  getch();
    }