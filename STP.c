#include<stdio.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
int d,m,y;
int d1,m1,y1;
#include"pinformation.c";
#include"place.c";
#include"input.c";
#include"bus.c";
#include"menu.c";

#include"hotels.c";
#include"print_ticket.c";
#include"print_details.c";
#include"checkID.c";

int main()
{

	system("cls");
	printf("\n\n\n\n\n\n\t\t\t   WELCOME \n\n\t\t     SUSHANT TRAVEL AGENCY");
	printf("\n\n\t\t   press enter to continue .....");
	getchar();
	menu();
	return 0;
}


