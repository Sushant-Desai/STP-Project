int menu();
int menu()
{
	int n;
system("cls");
	printf("\n\tMENU :");
	printf("\n\n\t1. CHOOSE DESTINATION \n\n\t2. GENERATE BILL\n\n\t3. EXIT\n\n\tENTER CHOICE :  ");
	scanf("\n%d", &n);
	switch (n)
	{
	case 1:destination();break;
	case 2:print_details();break;
	case 3: return 0;
}
getch();
menu();
return 0;
}
