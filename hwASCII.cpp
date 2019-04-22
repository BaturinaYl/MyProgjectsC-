#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
int i,j;
//clrscr();
//gotoxy(31,1);
setlocale(LC_CTYPE,"");
printf("Таблица ASCII");
for (i=32; i<=52; i++)
{

  //goroxy(1, i-29);
for (j=i; j<255; j+=21)
   printf("%c  %3d  ", i,j);

}

getch ();
return 0;
}
