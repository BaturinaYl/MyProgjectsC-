//#include <stdio.h>
//#include <stdlib.h>
#include <ncurses.h>
int main(void)
{
register int i,j;
initscr();
refresh();

for (i=1,j=1;j<24;i+=3,j++)
{
move(i,j);
addch('G');
}
getch();
refresh();
endwin();
return 0;

}
