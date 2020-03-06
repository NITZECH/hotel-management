#include <stdio.h>
#include <conio.h>
#include <windows.h>
void header();
void roombook();
void cancel();
void datafun();
void feature();
void menu();
main()
 {
	system ("color B");
	menu();
	getch();
}
//func for booking a room
void roombook()
{    
system("cls");
	header();
 FILE *fptr;
  
  // integer variable
  int num;
  // character variable
  char name[50],age[10];
  
  // open the file in write mode
  fptr = fopen("hoteldata.txt", "a");
  
 if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");}
     
 
  // get cusatomer detail
  printf("Enter name: \n");
  scanf("%s", &name);
  printf("Enter  number: \n");
  scanf("%d", &num);
  printf("Enter age: \n ");
  scanf("%s", &age);
  
  // write data in file
  fprintf(fptr, "%s %d %s", name, num, age);
  
  // close connection
  fclose(fptr); 
    char ch;
	printf("Press y for menu option:");
	Sleep(1000);
	fflush(stdin);
	while((ch=getch())=='y'){
		menu();}
	
}
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
   printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
 }
 void feature()
 {
   int type;
   system("cls");
   header();
   printf("\nChoose the room type:\n1.Combo deluxe \n2. Deluxe");
   printf("\n3. Normal \n4. Couple-friendly \n5. Couple combo Deluxe\n6.Economy");
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
       printf("\n NOTE :- Extra bed will cost Rs.500 per bed ");
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
       printf("\n NOTE :- Extra bed will cost Rs.300 per bed ");
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
       printf("\n NOTE :- Extra bed will cost Rs.50 per bed ");
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
       printf("\n NOTE :- Extra bed will cost Rs.300 per bed ");
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
       break;
       default:
   
     menu();
		} } 
 void menu()
 {
 
 	int ch1,ch2;
	char name;
	printf (" \xDB\xDB\xDB\xDB\xDB   WELCOME TO HOTEL NITZECH INN  \xDB\xDB\xDB\xDB\xDB\xDB\n");
	printf ("\xDB\xDB\xDB\xDB\xD 1.CHECK IN \n\n\xDB\xDB\xDB\xDB\xD2.FEATURES OF ROOMS \n\n\xDB\xDB\xDB\xDB\xD 3.CANCEL A RESERVERTAION \n\n");
	scanf ("%d",&ch1);
	switch(ch1)
	{
		case 1:
			roombook();
			break;
		case 2:
		     feature();
		     break;			
			 case 3:
				printf ("");
				break;
				deafult:
					printf ("wrong input enter your choice between 1 and 3");
				}}

