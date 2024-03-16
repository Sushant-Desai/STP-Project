void destination();
void mahabaleshwar();
void lonavala();
void raigad();
void tarkarli();
void harihareshwar();
void tadoba();
void matheran();

void destination()
{
	system("cls");
	int n;
	printf("\n\t DESTINATION :");
	printf("\n\n\t 1. MAHABALESHWAR ");
	printf("\n\n\t 2. LONAVALA");
	printf("\n\n\t 3. RAIGAD ");	
	printf("\n\n\t 4. TARKARLI BEACH ");
	printf("\n\n\t 5. HARIHARESHWAR ");
	printf("\n\n\t 6. TADOBA NATIONAL PARK ");
	printf("\n\n\t 7. MATHERAN ");
	printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	switch (n)
	{
	case 1:mahabaleshwar();break;
	case 2:lonavala();break;
	case 3:raigad();break;
	case 4:tarkarli();break;
	case 5:harihareshwar();break;
	case 6:tadoba();break;
	case 7:matheran();break;
	}
}
void mahabaleshwar()
{
	int cnt;
	system("cls");
	printf("\n\t\tWELCOME TO MAHABALESHWAR  !!!\n");
    printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,1);
}

void lonavala()
{
	int  cnt;
	system("cls");	
	printf("\n\t\tWELCOME TO LONAVALA !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)   ");
    scanf("%d",&cnt);
	input(cnt,2);	
}

void raigad()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO RAIGAD !!!\n");
	printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,3);	
}

void tarkarli()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TARKRALI BEACH  !!!\n");
	printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,4);	
}

void harihareshwar()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO HARIHARESHWAR  !!!\n");
printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,5);	
}

void tadoba()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO TADOBA NATIONAL PARK !!!\n");
	printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,6);	
}

void matheran()
{
	int  cnt;
	system("cls");
	printf("\n\t\tWELCOME TO MATHEEAN !!!\n");
	printf("\n\t\t    ENTER NO. OF PEOPLE  (PLEASE ENTER ONLY ONE PERSON INFORMATION  SO ENTER 1)  ");
    scanf("%d",&cnt);
	input(cnt,7);	
}
