void print_ticket(int [],int);

void print_ticket(int a[],int cnt)
{

	system("cls");
	int z,no,flag;
		FILE *f;
  		printf("\n\n\t YOUR TICKET:");
  for(z=0;z<cnt;++z)
  {   
  flag=0;
  f=fopen("info.txt", "r");
	while (!feof(f))
	{   
		fscanf(f,"%d %s %d %c %d %s %s %f %s  %d %d %d %d %d %d %s",&no,&p.name,&p.age,&p.gender,&p.cost,&p.destination,&p.fname,&p.time,&p.shift,&d,&m,&y,&d1,&m1,&y1,&p.hname);
			if(a[z]==no)
		{
		printf("\n\n\tID : %d",no);
		printf("\n\tNAME : %s\t\t HOTEL NAME : %s ", p.name,p.hname);
		printf("\n\tAGE : \t%d\t\t CHECK IN : %d/%d/%d ",p.age,d,m,y);
		printf("\n\tGENDER : %c\t \t CHECK OUT : %d/%d/%d", p.gender, d1,m1,y1);
        printf("\n\tDESTINATION : %s",p.destination);
        printf("\n\tFLIGHT NAME : %s",p.fname);
        printf("\n\tDEPARTURE TIME : %f %s",p.time,p.shift);
       flag=1;
			}
     if(flag==1)
     break;
           }
  fclose(f);
  }
   printf("\n\n\t\tTOTAL COST : %ld",p.cost);
printf("\n\n\t\tBOOKING SUCCESSFULL");
   printf("\n\n\t\t   press enter to go to main menu .....");
   getchar();
menu();
}
