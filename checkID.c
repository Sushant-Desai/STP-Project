int check(int);
int check(int id)
{   
   int fi;
	 FILE *f1;

        f1=fopen("checkid.txt","w");

fclose(f1);

 FILE *f;
	f=fopen("checkid.txt","r+");
   while(!feof(f))
{
	fscanf(f,"%d",&fi);
	if(fi==id)
	{
	printf("\n\t ID ALDREADY EXISTS!) !\n\t CHOOSE ANOTHER ID :\n");
	return 1;
	}
}
fclose(f);
return 0;
}
