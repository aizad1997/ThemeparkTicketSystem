#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <string>

int mycard_themepark (int,int,int,int);
int mycard_waterpark (int,int,int,int);
int mycard_combo (int,int,int,int);
int oneday_themepark (int,int,int,int);
int oneday_waterpark (int,int,int,int);
int oneday_combo (int,int,int,int);


struct tm *local;
int no_siri1 = 10000000 , no_siri2 = 20000000;

int main ()
{
	char name[30];
	int total_loop=0,answer,n,mycard,oneday,package, adult=0, child=0, senior=0, total_adult=0, total_child=0, 
	themepark_adult=0,themepark_child=0,waterpark_adult=0,waterpark_child=0,combo_adult=0,combo_child=0;
	float price_adult=0, price_child=0, price_senior=0, total_price=0, sale_combo=0,sale_themepark=0,sale_waterpark=0,total_sale=0;

	time_t t;
	t = time(NULL);
	local = localtime (&t);

	answer ==1;
	
	printf ("Hai there! Please enter your name: ");			//enter cashier's name
	fflush(stdin);
	gets(name);
	system ("cls");
	
	do{
		printf ("\t\tTable of Package Available\n\n");
		printf ("\t _____________________________________________________________________\n");
		printf ("\t|                                                                     |\n");
		printf ("\t|          1 DAY TICKET (THEME PARK, WATER PARK, & COMBO)             |\n");
		printf ("\t|_____________________________________________________________________|\n");
		printf ("\t|                                                                     |\n");
		printf ("\t|                                                            PRICE    |\n");	
		printf ("\t|                                                                     |\n");
		printf ("\t| Combo Adult        (Theme Park & Water Park)               RM 225   |\n");
		printf ("\t| Combo Child/Senior (Theme Park & Water Park)               RM 180   |\n");
		printf ("\t|_____________________________________________________________________|\n");
		printf ("\t|                                                                     |\n");
		printf ("\t| Theme Park - Adult                                         RM 180   |\n");
		printf ("\t| Theme Park - Child/Senior                                  RM 145   |\n");
		printf ("\t|_____________________________________________________________________|\n");
		printf ("\t|                                                                     |\n");
		printf ("\t| Water Park - Adult                                         RM 122   |\n");
		printf ("\t| Water Park - Child/Senior                                  RM 101   |\n");
		printf ("\t|_____________________________________________________________________|\n\n");
	
		do	{
			printf ("\n\n\tDo you have mycard ? (Enter 1 for YES or 2 for NO) : ");
			scanf ("%d",&package);
			system ("cls");
	
			if (package==1)
			{
				printf ("\t\tTable of Package Available (MYCARD PROMOTION)\n\n");
				printf ("\t _____________________________________________________________________\n");
				printf ("\t|                                                                     |\n");
				printf ("\t|          1 DAY TICKET (THEME PARK, WATER PARK, & COMBO)             |\n");
				printf ("\t|         (MYCARD PROMOTION) - Include RM 10 food voucher             |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t|                                                            PRICE    |\n");	
				printf ("\t|                                                                     |\n");
				printf ("\t| Combo Adult        (Theme Park & Water Park)               RM 180   |\n");
				printf ("\t| Combo Child/Senior (Theme Park & Water Park)               RM 144   |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t| Theme Park - Adult                                         RM 144   |\n");
				printf ("\t| Theme Park - Child/Senior                                  RM 116   |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t| Water Park - Adult                                         RM 100   |\n");
				printf ("\t| Water Park - Child/Senior                                  RM  83   |\n");
				printf ("\t|_____________________________________________________________________|\n\n");
			
				do{
					printf ("\n\n\tChoose 1 for Themepark package, 2  for Waterpark package or 3 for Combo package : ");
					scanf ("%d",&mycard);
				
			
					if (mycard==1)
					{
						do{
							printf  ("\n\tNumber of adult: ");
							scanf ("%d", &adult); 
						}while(adult<0);
			
						total_adult += adult;
						themepark_adult += adult;
				
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while (child<0);
				
						total_child += child;
						themepark_child += child;
 				
						 do{
							printf ("\n\tNumber of senior citizen : ");
							scanf ("%d",&senior); 
						}while (senior<0);
				
						total_adult += senior;
						themepark_adult += senior;
				
						price_adult = adult * 144;
						price_child = child * 116;
						price_senior = senior * 116 ;
						total_price = price_adult + price_child + price_senior;
						sale_themepark += total_price;
						system ("cls");
				
						no_siri1=mycard_themepark (child,adult,senior,no_siri1);
				
						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier's Name : ");
						puts(name);
						printf ("\tPackage: Themepark 1Day Ticket (MYCARD PROMOTION)\n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t116.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t144.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t116.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n");	
					}
			
					else if (mycard==2)
					{
						do{
							printf  ("\n\tNumber of adult: ");
							scanf ("%d", &adult); 
						}while (adult<0);
				
						total_adult += adult;
						waterpark_adult += adult;
				
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while (child<0);
				
						total_child += child;
						waterpark_child += child;
				
 						do{
							printf ("\n\tNumber of senior : " );
							scanf ("%d",&senior); 
						}while (senior<0);
				
						total_adult += senior;
						waterpark_adult += senior;
				
						price_adult = adult * 100;
						price_child = child * 83;
						price_senior = senior * 83 ;
						total_price = price_adult + price_child + price_senior;
 						sale_waterpark += total_price;
 						system ("cls");
 				
 						no_siri1=mycard_waterpark (child,adult,senior,no_siri1);
 				
 						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier's Name :");
						puts (name);
						printf ("\tPackage: Waterpark 1Day Ticket (MYCARD PROMOTION)\n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t83.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t100.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t83.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n"); 
					}
 				
					else if (mycard==3)	
					{
						do{			
							printf  ("\n\tNumber of adult: ");
							scanf ("%d", &adult); 
						}while (adult<0);
			 
						total_adult += adult;
						combo_adult += adult;
			
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while (child<0);
				
						total_child += child;
						combo_child += child;
				
 						do{
							printf ("\n\tNumber of senior : " );
							scanf ("%d",&senior); 
						}while(senior<0);
				
						total_adult += senior;
						combo_adult += senior;
			
						price_adult = adult * 180;
						price_child = child * 144;
						price_senior = senior * 144 ;
						total_price = price_adult + price_child + price_senior;
 						sale_combo += total_price;
 						system ("cls");
 				
 						no_siri1=mycard_combo (child,adult,senior,no_siri1);
 				
 						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier Name :  ");
						puts (name);
						printf ("\tPackage: Combo 1Day Ticket (MYKAD PROMOTION)\n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t144.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t180.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t144.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n\n"); 
					}
 				
 					else
 					{
 						printf ("ERROR. PLEASE ENTER 1(THEMEPARK PACKAGE), 2(WATERPARK PACKAGE), AND 3(COMBO PACKAGE)." );
					}
			 
				}while(mycard != 1 && mycard != 2 && mycard !=3);
			}
				 
			else if (package==2)
			{
				printf ("\t\tTable of Package Available\n\n");
				printf ("\t _____________________________________________________________________\n");
				printf ("\t|                                                                     |\n");
				printf ("\t|          1 DAY TICKET (THEME PARK, WATER PARK, & COMBO              |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t|                                                            PRICE    |\n");	
				printf ("\t|                                                                     |\n");
				printf ("\t| Combo Adult        (Theme Park & Water Park)               RM 225   |\n");
				printf ("\t| Combo Child/Senior (Theme Park & Water Park)               RM 180   |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t| Theme Park - Adult                                         RM 180   |\n");
				printf ("\t| Theme Park - Child/Senior                                  RM 145   |\n");
				printf ("\t|_____________________________________________________________________|\n");
				printf ("\t|                                                                     |\n");
				printf ("\t| Water Park - Adult                                         RM 122   |\n");
				printf ("\t| Water Park - Child/Senior                                  RM 101   |\n");
				printf ("\t|_____________________________________________________________________|\n\n");
			
				do{		
					printf ("\n\nChoose 1 for Themepark package, 2 for Waterpark package and 3 for Combo package.");
					scanf ("%d",&oneday);
			
					if (oneday==1)
					{
						do{
							printf ("\n\tNumber of adult: ");
							scanf ("%d", &adult); 
						}while(adult<0);
				
						total_adult += adult;
						themepark_adult += adult;
						
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while (child<0);
				
						total_child += child;
						themepark_child += child;
						
 						do{
							printf ("\n\tNumber of senior : " );
							scanf ("%d",&senior); 
						}while (senior<0);
				
						total_adult += senior;
						themepark_adult += senior;
				
						price_adult = adult * 180;
						price_child = child * 145;
						price_senior = senior * 145 ;
						total_price = price_adult + price_child + price_senior;
						sale_themepark += total_price;	
						system ("cls");
				
						no_siri2=oneday_themepark (child,adult,senior,no_siri2);
				
						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier Name : ");
						puts (name);
						printf ("\tPackage: Themepark 1Day Ticket \n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t145.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t180.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t145.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n"); 	
					}

					else if (oneday==2)
					{
						do{
							printf  ("Number of adult: ");
							scanf ("%d", &adult); 
						}while (adult<0);
				
						total_adult += adult;
						waterpark_adult += adult;
				
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while(child<0);
				
						total_child += child;
						waterpark_child += child;
 				
						do{
							printf ("\n\tNumber of senior : " );
							scanf ("%d",&senior); 
						}while (senior<0);
				
						total_adult += senior;
						waterpark_adult += senior;
				
						price_adult = adult * 122;
						price_child = child * 101;
						price_senior = senior * 101 ;
						total_price = price_adult + price_child + price_senior;
 						sale_waterpark += total_price;
 						system ("cls");
 				
 						no_siri2=oneday_waterpark (child,adult,senior,no_siri2);
 				
 						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier Name : ");
						puts (name);
						printf ("\tPackage: Waterpark 1Day Ticket \n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t101.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t122.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t101.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n");
 					}
 				
					else if (oneday==3)
 					{
 						do{
							printf  ("\n\tNumber of adult: ");
							scanf ("%d", &adult); 
						}while (adult<0);
				
						total_adult += adult;
						combo_adult += adult;
				
						do{
							printf ("\n\tNumber of child : ");
							scanf ("%d", &child); 
						}while(child<0);
				
						total_child += child;
						combo_child += child;
 				
						do{
							printf ("\n\tNumber of senior : " );
							scanf ("%d",&senior); 
						}while(senior<0);
				
						total_adult += senior;
						combo_adult += senior;
				
						price_adult = adult * 225;
						price_child = child * 180;
						price_senior = senior * 180 ;
						total_price = price_adult + price_child + price_senior;
 						sale_combo += total_price;
 						system ("cls");
 				
 						no_siri2=oneday_combo (child,adult,senior,no_siri2);
 				
 						printf ("\n\n\n\t\t\t\t.\\RECEIPT/.\n");
						printf ("\t ______________________________________________________\n");
						printf ("\t      		LEGOLAND MALAYSIA RESORT\n");
						printf ("\tTime: %02d : %02d : %02d\n", local->tm_hour, local->tm_min, local->tm_sec);
						printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
						printf ("\tCashier Name :  ");
						puts (name);
						printf ("\tPackage: Combo 1Day Ticket \n");
						printf ("\tCategory\tNum\tPrice\t\tTotal\n");
						printf ("\tChild\t\t%d\t180.00\t\t%.2f\n",child, price_child);
						printf ("\tAdult\t\t%d\t225.00\t\t%.2f\n",adult, price_adult);
						printf ("\tSenior\t\t%d\t180.00\t\t%.2f\n",senior, price_senior);
						printf ("\t\t\t\t\tTotal>\t%.2f\n", total_price);
						printf ("\t_______________________________________________________\n\n\n"); 
					}
 					
 					else
 					{
 						printf ("\nERROR. PLEASE ENTER 1 (THEMEPARK) , 2 (WATERPARK) OR 3 (COMBO).");
					}
					
				}while (oneday!=1 && oneday!=2 && oneday!=3);
			}
		 
			else
			{
				printf ("\nERROR. PLEASE ENTER 1 (1DAY TICKET-MYKAD PROMOTION) OR 2 (1DAY TICKETS).");
			}
		
		}while(package !=1 && package!=2);
	
		printf ("\n\nAnymore data to enter ? (1 for YES and 2 for NO) :");
		fflush (stdin);
		scanf ("%d",&answer);
		total_loop++;
		system ("cls");	
				
	}while (answer==1);
	
	system ("cls");
	total_sale = sale_themepark + sale_waterpark + sale_combo;
	
	printf ("Total number of Adult : %d\n\n", total_adult);
	printf ("Total number of Child : %d\n\n", total_child);
	printf ("Number of tickets sold for Themepark (Adult): %d\n", themepark_adult);
	printf ("Number of tickets sold for Themepark (Child): %d\n\n", themepark_child);
	printf ("Number of tickets sold for Waterpark (Adult): %d\n", waterpark_adult);
	printf ("Number of tickets sold for Waterpaark (Child): %d\n\n", waterpark_child);
	printf ("Number of tickets sold for Combo (Adult): %d\n", combo_adult);
	printf ("Number of tickets sold for Combo (Child): %d\n\n", combo_child);
	printf ("Total sales for Themepark : RM %.2f \n\n",sale_themepark);
	printf ("Total sales for Waterpark : RM %.2f \n\n",sale_waterpark);
	printf ("Total sales for Combo : RM %.2f\n\n",sale_combo);
	printf ("Total sales : RM %.2f \n\n",total_sale);
	
	{
		if (sale_themepark > sale_waterpark && sale_themepark > sale_combo)
			printf("\nPopular Package : Themepark ");	
		
		else if (sale_waterpark > sale_themepark && sale_waterpark > sale_combo)
			printf ("\nPopular Package : Waterpark ");
			
		else
			printf ("\nPopular Package : Combo ");
	}
	
	{
		if (sale_themepark < sale_waterpark && sale_themepark < sale_combo)
			printf ("\nUnpopular Package : Themepark ");
		
		else if (sale_waterpark < sale_themepark && sale_waterpark < sale_combo)
			printf ("\nUnpopular Package : Waterpark ");
		else
			printf ("\nUnpopular Package : Combo ");
	}

	return 0;
}

int mycard_themepark (int child,int adult,int senior,int no_siri1)		//terima parameter, tak return value
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket (MYCARD PROMOTION)\n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior Citizen\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri1;
}


int mycard_waterpark (int child,int adult,int senior,int no_siri1)
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior Citizen\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri1;
}


int mycard_combo (int child,int adult,int senior,int no_siri1)
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket (MYCARD PROMOTION)\n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket (MYCARD PROMOTION) \n");         
			no_siri1++;
			printf ("\tNo series :  %d\n",no_siri1);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior Citizen\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri1;
}


int oneday_themepark (int child,int adult,int senior,int no_siri2)		//1 day themepark 
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Themepark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri2;
}


int oneday_waterpark (int child,int adult,int senior,int no_siri2)		//1 day waterpark f
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Waterpark 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri2;
}


int oneday_combo (int child,int adult,int senior,int no_siri2)		//1 day combo f
{
	if (adult >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=adult ; n++ )
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Adult\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (child >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=child; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Child\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
	
	if (senior >0)
	{	int n;
		time_t t;
		t = time(NULL);
		local = localtime (&t);
		
		for (n=1 ; n<=senior; n++)
		{
			printf ( "\t________________________________________________\n") ;
			printf ("\t\t\tLEGOLAND MALAYSIA RESORT \n\n") ;
			printf ("\tPackage: Combo 1 Day Ticket \n");         
			no_siri2++;
			printf ("\tNo series :  %d\n",no_siri2);
			printf ("\tDate: %d / %d / %d\n",local->tm_mday,local->tm_mon+1,local->tm_year+1900);
			printf ("\tCategory : Senior\n");
			printf ("\t________________________________________________\n\n\n\n");
		}
	}
return no_siri2;
}
