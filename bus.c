void bus(int );
void bus(int id)
	{
		int choice;
	printf("\n\n\t\t BUS AVAILABLE : ");
	printf("\n\n    1. SHIVNERI AC :       DEPARTURE : 6.00 AM FROM PUNE  PRICE :1500 RS");
	printf("\n    2. SHIVNERI  :     DEPARTURE : 9.00 AM FROM MUMBAI  : 2000 RS");
			printf("\n    3. VITHAI  :  DEPARTURE : 1.00 PM FROM NASHIK  PRICE : 2000 RS");
		printf("\n    4. LALPARI :        DEPARTURE : 5.00 PM  PRICE : 500 RS");
		printf("\n    5. SLIPPER AC SHIVAI ELECTRICAL  :       DEPARTURE : 9.00 PM  PRICE : 3,000 RS");
		printf("\n\n\t ENTER CHOICE :  ");
		scanf("%d",&choice);
		switch(choice)
		{
case 1: p.cost+=1500;
p.time=6.00;
strcpy(p.shift,"AM");
strcpy(p.fname,"SHIVNERI AC");
break;

case 2: p.cost+=2000;
p.time=9.00;
strcpy(p.shift,"AM");
strcpy(p.fname,"SHIVNERI");
break;

case 3: p.cost+=2000;
p.time=1.00;
strcpy(p.shift,"PM");
strcpy(p.fname,"VITHAI");
break;

case 4: p.cost+=500;
p.time=5.00;
strcpy(p.shift,"PM");
strcpy(p.fname,"LALPARI");break;

case 5: p.cost+=3000;
p.time=9.00;
strcpy(p.shift,"SHIVAI ELECTRICAL");
break;
}
	  
	  FILE *p1;
       p1=fopen("checkid.txt","a+");      
	  fprintf(p1,"%d \n",id);
      fclose(p1);
    printf("\n\n\t\t   press enter to continue .....");
	getchar();
	getchar();
  
}
