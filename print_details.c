void print_details();
void print_details()
{

	system("cls");
	int id,no,flag=0;
	printf("\n\t TRAVELLERS DETAILS :\n");
	printf(" \nENTER ID OF THE PERSON YOU ARE SEARCHING FOR :  ");
	scanf("%d", &id);
	FILE *f;
  	f=fopen("info.txt", "r");
	while (!feof(f))
	{
			fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&p.name,&p.age,&p.gender,&p.cost,&p.destination,&p.fname,&p.time,&p.shift,&d,&m,&y,&d1,&m1,&y1,&p.hname);
	
		if(id==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", p.name,p.hname);
		printf("\n\tAGE : \t%d\t\t CHECKIN : %d/%d/%d ",p.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECKOUT : %d/%d/%d", p.gender,d1,m1,y1);
        printf("\n\tDESTINATION : %s",p.destination);
        printf("\n\tFLIGHT NAME : %s",p.fname);
        printf("\n\tDEPARTURE TIME : %f %s",p.time,p.shift);
        printf("\nPress enter to continue .....");
	flag=1;
		}
     if(flag==1)
     break;
           }
	fclose(f);
	if(flag==0)
	{
		printf("\nNo bill exists.");
		printf("\nPress enter to continue .....");

	}
}

