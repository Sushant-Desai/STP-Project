
void hotels();
void hotels()
{



	int n;
	system("cls");
	printf("\n\t\t HOTELS :");
	printf("\n\n\t1. RAJWADA PALACE\t PRICE : 2000 PER DAY");
	printf("\n\n\t2. SUN CITY RESORT \t       PRICE : 1950 PER DAY");
	printf("\n\n\t3. JW MARRIOT\t PRICE : 1700 PER DAY");
	printf("\n\n\t4. CROWN PLAZA \t PRICE : 2000 PER DAY");
	printf("\n\n\t5. CONRAD\t    PRICE : 8,000 PER DAY");
	printf("\n\n\t ENTER CHOICE :  ");
	scanf("%d", &n);
	printf("\n\n\t ENTER NO OF DAYS : ");
	scanf("%d",&p.days);
	switch (n)
	{
case 1: p.cost+=p.days*2000;
strcpy(p.hname,"RAJWADA PALACE");break;
case 2: p.cost+=p.days*1950;
strcpy(p.hname,"SUNCITY RESORT");break;
case 3: p.cost+=p.days*1700;
strcpy(p.hname,"JW MARRIOT");break;
case 4: p.cost+=p.days*2000;
strcpy(p.hname,"CROWN PLAZA ");break;
case 5: p.cost+=p.days*8000;
strcpy(p.hname,"CONRAD");break;
	}
	printf("\n\t ENTER DATE OF CHECKIN : ");
	scanf("%d",&d);
	printf("\n\t ENTER MONTH OF CHECKIN : ");
	scanf("%d",&m);
	printf("\n\t ENTER YEAR OF CHECKIN : ");
	scanf("%d",&y);

	d1=d+p.days;
	m1=m;
	y1=y;
	if(d1>31)
	{
		d1=d1-31;
		m1+=1;
		if(m1>12)
		{
			m1=m1-12;
			y1+=1;
		}
	}
printf("\n\n\t\t   press enter to continue .....");
	getchar();
	getchar();
}
