//header files
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
//delcaring functions
void header();
void add();
void feature();
void menu();
void delete1();
void edit();
void password();
void searchbyroom();
void searchbyname();
void list();
void passsword();
void exit();
//declaring structure
struct Customer
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char period[10];
	char arrivaldate[10];
}s;
//main function
main()
 {
	system ("color B");
	password();
}
void exit()
{
	system("cls");
	int k;
	int o;
	char name[60]=" THIS PROGRAM IS DEVELOPED BY NITESH DEVKOTA. PAS076BCT019 ";
	o=strlen(name);
	for(k=0;k<=16;k++){
		Sleep(30);
		printf("\xB2");
	}
	for(k=0;k<=o;k++){
		Sleep(60);
		printf(" %c",name[k]);
	}
	for(k=0;k<=16;k++){
		Sleep(50);
		printf("\xB2");
	}
	Sleep(900);
	//used for exiting else this program will run forever
	exit(0);
}

//function for header
 void header()
 {
 system("cls");
   printf("\n                       :::::::::::::::::::::::::::::::::::::");
   printf("\n                       ::                                 ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @      WELCOME TO     @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @      Nitzech INN    @     ::");
   printf("\n                       ::     @                     @     ::");
   printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
   printf("\n                       ::                                 ::");
   printf("\n                       ::::::::::::::::::::::::::::::::::::: \n");
 }
 
 //function for menu
void menu()
 {
 
    system("cls");
 	int ch1;
	char name;
	printf (" \xDB\xDB\xDB\xDB\xDB   WELCOME TO HOTEL NITZECH INN  \xDB\xDB\xDB\xDB\xDB\xDB\n\n\n\n");
	printf (" 1.CHECK IN \n\n\n 2.FEATURES OF ROOMS \n\n\n 3.EDIT RECORDS \n\n\n 4.DELETE RECORDS\n\n\n 5. SEARCH BY ROOM\n\n\n 6. VIEW INFORMATION \n\n\n 7.SEARCH BY NAME \n\n\n 8.EXIT  \n\n");
	scanf ("%d",&ch1);
	switch(ch1)
	{
		case 1:
			add();
			break;
		case 2:
		     feature();
		     break;			
			 case 3:
				edit();
				break;
				case 4:
		         delete1();
		         break;
		              case 5:
		                     searchbyroom();
		                     break;
		                    case 6:
		                            list();
		                            break;
		                            case 7:
		              	                   searchbyname();
		                                 	break;
		                                	case 8:
		              		                       exit();
		              		                       break;
				deafult:
					printf ("\n\n\nWrong input enter your choice between 1 and 8 \n\n\n");}
					char ch;
				printf("\n\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}
//fun for features of the room
void feature()
 { char ch;
   int type;
   system("cls");
   header();
   printf("\nChoose the room type:\n1.Combo deluxe \n2. Deluxe");
   printf("\n3. Normal \n4. Couple-friendly \n5. Couple combo Deluxe\n6. Economy \n");
   scanf("%d",&type);
   if(type>6)
     {
       printf("\nWrong choice!! Choose a number between 1-6:");
       feature();
       
     }
   switch(type)
     {
       case 1:system("cls");
       header();
       printf("\n Room number            :::> 1");
       printf("\n Advance                :::>750\n\n");
       printf("\n----------------FEATURES OF THIS ROOM----------------------------");
       printf("\n------------------------------------------------------------------");
       printf("\n\n Room Type            :::> Sp.delux");
       printf("\n\n Room charges         :::> Rs.1500 per day");
       printf("\n\n 1. Bed               :::>      2");
       printf("\n\n 2.Capacity           :::>  5 extendable to 8");
       printf("\n\n 3.Balcony and pool as well as gym access available     ");
       printf("\n____________________________________________________________________");
       printf("\n-------------------ADDITIONAL FEATURES----------------------------");
       printf("\n\n 1.A/C & TV AVAILABLE INSIDE THE ROOM WITH HOT WATER FROM GEYSER ");
       printf("\n____________________________________________________________________");
       printf("\n NOTE :- Extra bed will cost Rs.500 per bed \n\n\n");
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();
	}
       break;
       case 2:system("cls");
       header();
       printf("\n Room number            :::>2\n\n");
       printf("\n Advance                :::>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n______________________________________________________________________");
       printf("\n\n Room Type            :::> Deluxe                                      ");
       printf("\n\n Room charges         :::>Rs.1299/- per day");
       printf("\n\n 1. Bed               :::>      2");
       printf("\n\n 2.Capacity           >>>      5");
       printf("\n___________________________________________________________________");
       printf("\n---------------------ADDITIONAL FEATURES----------------------------");
       printf("\n___________________________________________________________________");
       printf("\n\n 1.A/C & TV AVAILABLE INSIDE THE ROOM WITH HOT WATER FROM GEYSER ");
       printf("\n___________________________________________________________________");
       printf("\n NOTE :- Extra bed will cost Rs.300 per bed \n\n\n");
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
       break;
       case 3:system("cls");
       header();
       printf("\n Room number            :::>3\n\n");
       printf("\n Advance                :::>400\n\n");
       printf("\n----------------------FEATURES OF THIS ROOM------------------------");
       printf("\n___________________________________________________________________");
       printf("\n\n Room Type            :::> General                                    ");
       printf("\n\n Room charges         :::>Rs.899/- per day");
       printf("\n\n 1. Bed               :::>      2");
       printf("\n\n 2.Capacity           :::>      5");
       printf("\n________________________________________________________________");
       printf("\n----------------------ADDITIONAL FEATURES---------------------------");
       printf("\n___________________________________________________________________");
       printf("\n\n 1.Geyser available      ");
       printf("\n___________________________________________________________________");
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed \n\n\n");
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
       break;
       case 4:system("cls");
       header();
       printf("\n Room number            :::>4\n\n");
       printf("\n Advance                :::>500\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n-------------------------------------------------------------------");
       printf("\n\n Room Type            :::> Couple                                     ");
       printf("\n\n Room charges         :::>Rs.1899/- per day");
       printf("\n\n 1. Bed               :::>      1");
       printf("\n\n 2.Capacity           :::>      2");
       printf("\n___________________________________________________________________");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n___________________________________________________________________");
       printf("\n\n 1.Geyser available");
       printf("\n\n 2.TV available      ");
       printf("\n___________________________________________________________________");
       printf("\n NOTE: HOTEL STAFF THINKS THAT EXTRA BED IS NOT NECESSARY.\n\n\n");
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y')
	{
		menu();
		}
       break;
       case 5:system("cls");
       header();
       printf("\n Room number            :::>5\n\n");
       printf("\n Advance                :::>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n___________________________________________________________________");
       printf("\n\n Room Type            :::> Couple Deluxe                                    ");
       printf("\n\n Room charges         :::>Rs.1599/- per day");
       printf("\n\n 1. Bed               :::>      1");
       printf("\n\n 2.Capacity           :::>      2");
       printf("\n___________________________________________________________________");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n___________________________________________________________________");
       printf("\n\n 1.A/C available   ");
       printf("\n\n 2.Geyser available");
       printf("\n\n 3.TV available      ");
       printf("\n___________________________________________________________________");
       printf("\n NOTE :- Extra bed will cost Rs.300 per bed\n\n\n ");
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
       break;
       
     case 6:system("cls");
       header();
       printf("\n Room number            :::>6\n\n");
       printf("\n Advance                :::>750\n\n");
       printf("\n                      FEATURES OF THIS ROOM                       ");
       printf("\n___________________________________________________________________");
       printf("\n\n Room Type            :::> Economy                                    ");
       printf("\n\n Room charges         :::>Rs.600/- per day");
       printf("\n\n 1. Bed               :::>      1");
       printf("\n\n 2.Capacity           :::>      1");
       printf("\n___________________________________________________________________");
       printf("\n                    ADDITIONAL FEATURES                        ");
       printf("\n___________________________________________________________________");
       printf("\n\n Only TV available      ");
       printf("\n___________________________________________________________________");
       printf("\n NOTE :-NO Extra bed. "); 
	printf("\n\nPress y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
       break;
       default:
       	printf ("wrong choice\n");
       	printf("Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
       	break;
       }
}
//function for booking rooms
void add()
{header();
	FILE *f;
	char test;
	f=fopen("custoomer.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		fflush(stdin);
		scanf("%s",&s.roomnumber);
		printf("Enter Name:\n");
		fflush(stdin);
		scanf("%s",&s.name);
		fflush(stdin);
		printf("Enter Address:\n");
		fflush(stdin);
		scanf("%s",&s.address);
		printf("Enter Phone Number:\n");
		fflush(stdin);
		scanf("%s",&s.phonenumber);
		printf("Enter Period(\'x\'days):\n");
		fflush(stdin);
		scanf("%s",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		fflush(stdin);
		scanf("%s",&s.arrivaldate);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf ("\n\n\n\n\n PRESS ESC TO END ");
		test=getche();
		if(test==27)
		
			break;
			
	}
	fclose(f);
		char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
			

}
//function fro deleting data ( checking out or modifying) 
void delete1()
{header();
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("custoomer.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/custoomer.txt"); to remove content of og files
	   //rename("E:/temp.txt","E:/customer.txt"); to rename
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	fclose(f);
	fclose(t);
	remove("custoomer.txt");
	rename("temp.txt","custoomer.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
	char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}
//function to search customer detail by room number
void searchbyname()
{
	char cusname[20];
FILE *f;
f=fopen("custoomer.txt","rb");
                    system("cls");
                    printf("enter the full name of the customer : \n\n\n\n");
                    scanf("%s",cusname);
                    while(fread(&s,sizeof(s),1,f))
                    {
                        if(strcmp(cusname,s.name)==0)
                        {
                        	printf("\n\tRecord Found\n ");
			                printf("\nRoom Number:\t%s",s.roomnumber);
			                printf("\nName:\t%s",s.name);
			                printf("\nAddress:\t%s",s.address);
			                printf("\nPhone number:\t%s",s.phonenumber);
			                printf("\nPeriod:\t%s",s.period);
			                printf("\nArrival date:\t%s",s.arrivaldate);
			                break;
                           
                        }
                    }
                    fclose(f);
                    getch();
char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}

//function to search customer detail by their full name
void searchbyroom()
{
system("cls");

header();
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("custoomer.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nPeriod:\t%s",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
	char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}
//function to edit the data of the customer
void edit()
{
	system ("cls");
	FILE *f;
	int w=1;
	char roomnumber[20];
	if((f=fopen("custoomer.txt","r+"))==NULL)
	system("cls");
	printf("Enter Room number of the customer to edit:\n\n");
	scanf("%s",roomnumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{
			w=0;
			printf("\nEnter Room Number     :");
			gets(s.roomnumber);
			printf("\nEnter Name    :");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\nEnter Address        :");
			fflush(stdin);
			scanf("%s",&s.address);
			printf("\nEnter Phone number :");
			fflush(stdin);
			scanf("%f",&s.phonenumber);
			printf("\nEnter Period :");
			fflush(stdin);
			scanf("%s",&s.period);
			printf("\nEnter Arrival date :");
			fflush(stdin);
			scanf("%s",&s.arrivaldate);
			fseek(f,-sizeof(s),SEEK_CUR);  //to go to desired position infile
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	if(w==1){
		printf("\n\nTHE RECORD DOESN'T EXIST!!!!");
		fclose(f);
		getch();
	}else{
	fclose(f);
	printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
	getch();
}

	char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}



void list()
{   header();
	FILE *f;
	int i;
	if((f=fopen("custoomer.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n\n\n");
	
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		*/
		printf("\n%s \t%s \t%s \t%s \t%s  \t%s  \t  \n\n\n",s.roomnumber, s.name , s.address , s.phonenumber ,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
	char ch;
				printf("\n\n\n\n Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'||'Y'){
		menu();}
}

// function to make the program password protected
void password(void){
	char passwords[20]="nitesh";
	int j;
	int z;
	char name[40]=" ACCESS PROVIDED TO HOTEL STAFF ONLY ";
	z=strlen(name);
	for(j=0;j<=16;j++){
		Sleep(50);
		printf("\xB2");
	}
	for(j=0;j<=z;j++){
		Sleep(60);
		printf(" %c",name[j]);
	}
	for(j=0;j<=16;j++){
		Sleep(50);
		printf("\xB2");
	}
	printf("\n\n\n\n\nPassword:");
	char ch,pass[20];
	char w='*';
	int i=0;
	while(ch!=13){
		ch=getch();
		if(ch!=13 && ch!=8){
			printf("%c",w);
			pass[i]=ch;
			i++;
		}
			}
	pass[i]='\0';
	if(strcmp(pass,passwords)==0){
		printf("\n\n\n\n CORRECT PASSWORD.");
		Sleep(1000);
		menu();
	}
	else{
		printf("You entered the wrong password.");
		Sleep(700);
		system("cls");
		password();
}	
}
