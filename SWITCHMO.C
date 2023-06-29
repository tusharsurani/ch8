#include<stdio.h>
#include<conio.h>
void main()
{
  int c;
  clrscr();
  printf("press the month no. 1\n");
  printf("press the month no. 2\n");
  printf("press the month no. 3\n");
  printf("press the month no. 4\n");
  printf("press the month no. 5\n");
  printf("press the month no. 6\n");
  printf("press the month no. 7\n");
  printf("press the month no. 8\n");
  printf("press the month no. 9\n");
  printf("press the month no. 10\n");
  printf("press the month no. 11\n");
  printf("press the month no. 12\n");
  printf("\nand find month name");
  printf("\nenter the month no. =");
  scanf("%d",&c);
  switch(c)
  {
   case 1 :
	    printf("january");
	    break;
   case 2 :
	    printf("february");
	    break;
   case 3 :
	    printf("march");
	    break;
   case 4 :
	    printf("april");
	    break;
   case 5 :
	    printf("may");
	    break;
   case 6 :
	    printf("jun");
	    break;
   case 7 :
	    printf("july");
	    break;
   case 8 :
	    printf("august");
	    break;
   case 9 :
	    printf("saptember");
	    break;
   case 10:
	    printf("octomber");
	    break;
   case 11:
	    printf("november");
	    break;
   case 12:
	    printf("december");
	    break;
   default:
	    printf("plz enter the proper month no.");
   }
   getch();
}