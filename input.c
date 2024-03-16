
void input(int,int );

void input(int cnt,int cno)
{

	int a[cnt];	
	int pos=0,res;
	switch(cno)
	{
		case 1:strcpy(p.destination,     "ITALY");break;
		case 2:strcpy(p.destination,     "FRANCE");break;
		case 3:strcpy(p.destination,     "LONDON");break;
		case 4:strcpy(p.destination,    "SYDNEY" );break;
		case 5:strcpy(p.destination,     "NEW_YORK");break;
		case 6:strcpy(p.destination,     "TOKYO");break;
		case 7:strcpy(p.destination,    "SHIMLA" );break;
	}
	int x=0,id;
	while(x<cnt)
		{  
		system("cls");
			printf("\n\t\t ENTER %d PERSON DETAILS",x+1);
		a:
		printf("\n\n\t     CHOOSE YOUR TRAVEL ID (1-100) : ");
	scanf("%d",&id);
	res=check(id);
	if(res==1)
	goto a;
	printf("\n\t    ENTER  NAME , AGE , GENDER (M/F)  :\n\n");
	FILE *f;
	f=fopen("info.txt","a+");
	printf("\t    ");
	scanf("%s", &p.name);
	printf("\t    ");
	scanf("%d",&p.age);
	printf("\t    ");
	getchar();
    p.gender=getchar();
    printf("\n\n\t\t   press enter to continue .....");
     getchar();
	getchar();
	bus(id);	
//	flights(id);
	hotels();
	fprintf(f,"%d %s %d %c %d %s %s %f %s ",id,p.name,p.age,p.gender,p.cost,p.destination,p.fname,p.time,p.shift);
	fprintf(f," %d %d %d %d %d %d %s\n",d,m,y,d1,m1,y1,p.hname);
      fclose(f);
      a[x]=id;
      ++x;
		}
	print_ticket(a,cnt);
}
