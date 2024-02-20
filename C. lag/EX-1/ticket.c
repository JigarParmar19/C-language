#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int n,x,y,c=0;
	clrscr();
	
	printf("!! Welcome to RAJHANS !!\n");
	printf("\n\n1. for Hollywood\n");
	printf("2. for Bollywood\n");
	printf("3. for Tollywood\n\n");
	
	Printf("Enter your choiice :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			
			printf("\n\n1. for Horror Movie\n");
			printf("2. for Comedy Movie\n");
			printf("3. for Thriller Movie\n\n");
			printf("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("\n\n1. for annabelle\n");
					printf("2. for The Conjuring\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: annabelle \n");
							printf("Prize\t\t: 300 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: The Conjuring\n");
							printf("Prize\t\t: 400 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
									
				case 2:
					printf("\n\n1. for GET HARD\n");
					printf("2. for BAD\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: GET HARD\n");
							printf("Prize\t\t: 450 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");		
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: BAD\n");
							printf("Prize\t\t: 450 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
				    }
				break;
				
				case 3:
					printf("\n\n1. for PARASITE\n");
					printf("2. for THE NEXT THREE DAYS\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: PARASITE\n");
							printf("Prize\t\t: 550 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
						printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: THE NEXT THREE DAYS\n");
							printf("Prize\t\t: 400 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
				
				default :
					printf("\n\nInvalid choice");
			}
			
		break;
		
		case 2:
			
			printf("\n\n1. for Horror Movie\n");
			printf("2. for Comedy Movie\n");
			printf("3. for Thriller Movie\n\n");
			printf("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("\n\n1. for LAXMII\n");
					printf("2. for ROOHI\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: LAXMII\n");
							printf("Prize\t\t: 200 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: ROOHI\n");
							printf("Prize\t\t: 400 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
									
				case 2:
					printf("\n\n1. for HUNGAMA 2\n");
					printf("2. for 3 Idiots\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t:HUNMAMA 2\n");
							printf("Prize\t\t: 600 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: 3 Idiots\n");
							printf("Prize\t\t: 550 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
				    }
				break;
				
				case 3:
					printf("\n\n1. for MOM\n");
					printf("2. for SHREE\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: MOM \n");
							printf("Prize\t\t: 500 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: SHREE\n");
							printf("Prize\t\t: 300 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
				
				default :
					printf("\n\nInvalid choice");
			}
			
		break;
		
		case 3:
			
			printf("\n\n1. for Horror Movie\n");
			printf("2. for Comedy Movie\n");
			printf("3. for Thriller Movie\n\n");
			printf("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("\n\n1. for ANTI CHRIST\n");
					printf("2. for IT\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: ANTIN CHRIST\n");
							printf("Prize\t\t: 450 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
						 	printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: IT\n");
							printf("Prize\t\t: 450 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
									
				case 2:
					printf("\n\n1. THE OTHER GUYS\n");
					printf("2. for BAD TEACHER\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: THE OTHER GUYS\n");
							printf("Prize\t\t: 350 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: BAD TEACHER\n");
							printf("Prize\t\t: 300 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
				    }
				break;
				
				case 3:
					printf("\n\n1. THE PRESTIGE\n");
					printf("2. for NIGHT CRAWLER\n\n");
					printf("Enter your choice : ");
					scanf("%d",&n);
					
					switch(n)
					{
						case 1:
							printf("\n\nMovie\t\t: THE PRESTIGE\n");
							printf("Prize\t\t: 300 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						case 2:
							printf("\n\nMovie\t\t: NIGHT CRAWLER\n");
							printf("Prize\t\t: 450 Rupees\n");
							printf("Snacks/Drinks\t: Pop-corns,Pepsi");
							printf("\nTicket quantity\t: ");
							scanf("%d",&x);
							printf("Prize\t\t: ");
							scanf("%d",&y);
							c = (x*y)*0.18;
							printf("GST\t\t: %d",c);
							printf("\nTotal\t\t: %d Rupees\n\n",x*y+c);
							printf("==========================");	
							printf("\n\n!! THANK YOU  !!");
						break;
						
						default:
							printf("Invalid input");
					}
				break;
				
				default :
					printf("\n\nInvalid choice");
			}
			
		break;
		
		default:
			printf("\n\n!! Invalid Input,Please Try Again !!");
	}
    
	getch();
}