#include<stdio.h>
#include<conio.h>
#include"bank.h"
#include"menu.h"
#include"design.h"
void main()
 {
   int opt=1;
   char st[][20]={"1.OPEN ACCOUNT",
		  "2.DISPLAY ALL",
		  "3.SEARCH A/C",
		  "4.DEPOSIT",
		  "5.WITHDRAWAL",
		  "6.CLOSE A/C",
		  "7.EXIT"};
  while(1)
  {
    clrscr();
    _setcursortype(_NOCURSOR);
    gotoxy(38,6);
    printf("S   B   I");
    box(34,5,49,15);
    hline(7,35,48);
    opt=pmenu(st,7,8,35,opt-1);
    norm();
    clrscr();
      _setcursortype(_NORMALCURSOR);
    switch(opt)
    {
     case 1:
	       openacc(ret_accno());
	       break;
     case 2:
	       dispall();
	       break;
     case 3:
	     searchacc();
		      break;
     case 4:
	      deposit();
	      break;
    case 5:
	      withdrawal();
	      break;
    case 6:
	      closeacc();
	      break;
    case 7:
		exit(0);
     }
   getch();
    }
  }


