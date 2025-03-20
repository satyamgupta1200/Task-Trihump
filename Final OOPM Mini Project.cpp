#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<unistd.h>
#include<ctime>
using namespace std;

time_t now = time(0);
tm *ltm = localtime(&now);

class baseclass
{
	
	public:
		
	string order,amount,day,time, pay;
	string nm[100],am[100],dy[100],tm[100];
	int top,total,fin,tt[100];
	
	string mainmenu();
	string scheduling();
	string paymentMethod();
	string billing();
	string prepaid();
	string creditCard();
	
};

class subclass:public baseclass
{
	
	public:
		
		subclass();	
		string login();
		
};

subclass::subclass()
{
	
	top=-1;
	total=0;
	fin=0;
	system("cls");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"*                 TASK TRIUMPH                *";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t press any key to continue...";
	
	getch();
	login();

}

string subclass::login()
{

	int attempts=4;
	
	login:
	system("cls");
	cout<<"\n\t\t\t\t\t   HINT:- ";
	cout<<"\n\t\t\t\t\t ID      : Group III-C";
	cout<<"\n\t\t\t\t\t Password: G-C5";
	cout<<"\n\n\n\n\n\n\n\n\n\n";

	cout<<"\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"*                    LOGIN                    *";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";

	cout<<"\n\n\t\t\t\t\t\t\t               ";
	cout<<" Enter ID       : ";
	string id;
	getline(cin,id);

	cout<<"\n\t\t\t\t\t\t\t               ";
	cout<<" Enter Password : ";
	string password;
	getline(cin,password);
	
	if(id=="Group III-C" && password=="G-C5")
	{
		cout<<"\n\n\t\t\t\t\t\t\t               ";
		cout<<" Login Successful !!!";
		getch();
		mainmenu();
	}
	else
	{
		attempts--;
		
		if(attempts==0)
		{
			cout<<"\n\n\t\t\t\t\t\t\t        ";
			cout<<"Too many invalid attempts. Exiting program.";
			cout<<"\t\t\t\t\t\t\t         ";
			system("pause");
		}
		else
		{
			cout<<"\n\n\t\t\t\t\t\t\t       ";
			cout<<" Invalid ID/Password!!! "<<attempts<<" attempts left...";
			getch();
			goto login;
		}
	}
}

string baseclass::mainmenu()
{
	
	int choice;
	
    	f1:
		system("cls"); 
        cout << "\n\n\n\n\n\n\n\n\n"; 
        cout << "\t\t\t\t\t\t\t      "; 
        cout << "******************************************\n";
        cout << "\t\t\t\t\t\t\t      "; 
        cout << "*              MAIN MENU                 *\n";
        cout << "\t\t\t\t\t\t\t      "; 
        cout << "******************************************\n\n";
    
        cout << "\t\t\t\t\t\t\t\t\t1. HOME SERVICES\n";
        cout << "\t\t\t\t\t\t\t\t\t2. REPAIR SERVICES\n";
        cout << "\t\t\t\t\t\t\t\t\t3. BEAUTY SERVICES\n";
        cout << "\t\t\t\t\t\t\t\t\t4. EVENT SERVICES\n";
        cout << "\t\t\t\t\t\t\t\t\t5. WELLNESS SERVICES\n";
        cout << "\t\t\t\t\t\t\t\t\t6. EXIT\n\n\n";

        cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
        cin >> choice;

		switch(choice)
		{
			case 1:
				f2:
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n"; 
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "*                  HOME                  *\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n\n";
		    	
		    	cout << "\t\t\t\t\t\t\t\t\t1. CLEANING\n";
		        cout << "\t\t\t\t\t\t\t\t\t2. PEST CONTROL\n";
		        cout << "\t\t\t\t\t\t\t\t\t3. BACK\n\n\n";
		
		        cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
		        int choice1;
		        cin >> choice1;
		        
		        switch (choice1)
		        {
		        	case 1:
		        		
		        		f3:
		        		system("cls");
		        		cout << "\n\n\n\n\n\n\n\n\n"; 
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "*              CLEANING                  *\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n\n";
				    
				        cout << "\t\t\t\t\t\t\t       1. DUSTING                           149\n";
				        cout << "\t\t\t\t\t\t\t       2. BROOMING                          249\n";
				        cout << "\t\t\t\t\t\t\t       3. ONE-TIME                         1999\n";
				        cout << "\t\t\t\t\t\t\t       4. BACK\n\n\n";
				
				        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
				        int choice11 ;
				        cin >> choice11;
				        
				        switch (choice11)
				        {
				        	case 1:
				        		order="Dusting";
								amount="Rs. 149";
								total=149;
								scheduling();								
				        		break;
				        		
				        	case 2:
				        		order="Brooming";
								amount="Rs. 249";
								total=249;
								scheduling();
				        		break;
				        		
				        	case 3:
				        		order="One-Time";
								amount="Rs.1999";
								total=1999;
								scheduling();							
				        		break;
				        		
				        	case 4:
				        		goto f2;
				        		
				        	default:
				        		cout<<"\n Invalid Choice, try again...";
								getch();
								goto f3;
								
						}
						        		
		        		break;
		        		

		        	case 2:
		        		
		        		f4:
						system("cls"); 

				        cout << "\n\n\n\n\n\n\n\n\n"; 
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "*             PEST CONTROL               *\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n\n";
				    
				        cout << "\t\t\t\t\t\t\t       1. RESIDENTIAL                       4999\n";
				        cout << "\t\t\t\t\t\t\t       2. COMMERCIAL                        7999\n";
				        cout << "\t\t\t\t\t\t\t       3. BACK\n\n\n";
				
				        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
				        int choice12;
				        cin >> choice12;
				        
				        switch (choice12)
				        {
				        	
				        	case 1:
				        		order="Residential\n\t\t\t\t\t   \t Pest Control";
								amount="Rs.4999";
								total=4999;
								scheduling();								
				        		
				        	case 2:
				        		order="Commercial\n\t\t\t\t\t   \t Pest Control";
								amount="Rs.7999";
								total=7999;
								scheduling();								
				        		
				        	case 3:
				        		goto f2;
				        		
				        	default:
				        		cout<<"\n Invalid Choice, try again...";
								getch();
								goto f4;

						}
							
		        		break;
		        	
					
					case 3:
						goto f1;
						
					default:
						cout<<"\n Invalid Choice, try again...";
						getch();
						goto f2;
							
				}
							
				break;
				
			case 2:
				
				f5:
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n"; 
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "*           REPAIR SERVICES              *\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n\n";
		    	
		    	cout << "\t\t\t\t\t\t\t       1. ELECTRICAL                          149\n";
		        cout << "\t\t\t\t\t\t\t       2. PLUMBING                            149\n";
		        cout << "\t\t\t\t\t\t\t       3. CARPENTRY                           299\n";
		        cout << "\t\t\t\t\t\t\t       4. BACK\n\n\n";
		
		        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
		        int choice2;
		        cin >> choice2;
		        
		        switch (choice2)
		        {
		        	case 1:
		        		
		        		order="Electrical\n\t\t\t\t\t   \t Repair";
						amount="Rs. 149";
						total=149;
						scheduling();										        		        		
		        		break;

		        	case 2:
		        		
		        		order="Plumbing\n\t\t\t\t\t   \t Repair";
						amount="Rs. 149";
						total=149;
						scheduling();									
		        		break;
		        	
		        	case 3:
		        		
		        		order="Carpentry\n\t\t\t\t\t   \t Repair";
						amount="Rs. 299";
						total=299;
						scheduling();						
						break;
					
					case 4:
						goto f1;
						
					default:
						cout<<"\n Invalid Choice, try again...";
						getch();
						goto f5;
							
				}
							
				break;
                
            case 3:
            	
            	f10:
            	system("cls");
            	cout << "\n\n\n\n\n\n\n\n\n"; 
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "*            BEAUTY SERVICES             *\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n\n";
		    
		        cout << "\t\t\t\t\t\t\t\t\t1. HAIR CARE\n";
		        cout << "\t\t\t\t\t\t\t\t\t2. SKIN CARE\n";
		        cout << "\t\t\t\t\t\t\t\t\t3. MAKEUP\n";
		        cout << "\t\t\t\t\t\t\t\t\t4. BACK\n\n\n";
		
		        cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
		        int choice3;
				cin >> choice3;
		
		        switch (choice3)
		        {
		        	case 1:
		        		
		        		f11:
		        		system("cls");
		        		cout << "\n\n\n\n\n\n\n\n\n"; 
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "*              HAIR CARE                 *\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n\n";
				    
				        cout << "\t\t\t\t\t\t\t       1. HAIR CUT\n";
				        cout << "\t\t\t\t\t\t\t       2. HAIR COLOR                         1999\n";
				        cout << "\t\t\t\t\t\t\t       3. HAIR SPA                            599\n";
				        cout << "\t\t\t\t\t\t\t       4. BACK\n\n\n";
				
				        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
				        cin >> choice;
				
				        switch (choice)
				        {
				        	case 1:
				        		
				        		f12:
				        		system("cls");
				        		cout << "\n\n\n\n\n\n\n\n\n";
			                    cout << "\t\t\t\t\t\t\t      "; 
			                    cout << "******************************************\n";
			                    cout << "\t\t\t\t\t\t\t      "; 
			                    cout << "*              HAIR CUT                  *\n";
			                    cout << "\t\t\t\t\t\t\t      "; 
			                    cout << "******************************************\n\n";
			                    
			                    cout << "\t\t\t\t\t\t\t\t\t1. GIRL\n";
			                    cout << "\t\t\t\t\t\t\t\t\t2. BOY\n";
			                    cout << "\t\t\t\t\t\t\t\t\t3. BACK\n\n\n";
			
			                    cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
			                    int hairCutChoice;
								cin >> hairCutChoice;
			
			                    switch (hairCutChoice)
			                    {
			                    	case 1:
			                    		
			                    		f13:
			                    		system("cls");
			                    		cout << "\n\n\n\n\n\n\n\n\n"; 
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "******************************************\n";
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "*              GIRL'S HAIR CUTS          *\n";
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "******************************************\n\n";
								    
								        cout << "\t\t\t\t\t\t\t       1. WOLF                               299\n";
								        cout << "\t\t\t\t\t\t\t       2. BOB                                149\n";
								        cout << "\t\t\t\t\t\t\t       3. LAYER                              199\n";
								        cout << "\t\t\t\t\t\t\t       4. STRAIGHT                            99\n";
								        cout << "\t\t\t\t\t\t\t       5. PIXIE CUT                          199\n";
								        cout << "\t\t\t\t\t\t\t       6. BUTTERFLY                          299\n";
								        cout << "\t\t\t\t\t\t\t       7. BACK\n\n\n";
								
								        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
								        int choice99;
										cin >> choice99;
								
								        switch (choice99)
								        {
								        	case 1:
								        		order="Wolf\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs. 299";
												total=299;
												scheduling();
								        		break;
								        		
								        	case 2:
								        		order="Bob\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs. 149";
												total=149;
												scheduling();
								        		break;
								        		
								        	case 3:
								        		order="Layer\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs. 199";
												total=199;
												scheduling();
								        		break;
								        		
								        	case 4:
								        		order="Straight\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs.  99";
												total=99;
												scheduling();
								        		break;
								        		
								        	case 5:
								        		order="Pixie-cut\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs. 199";
												total=199;
												scheduling();
								        		break;
								        		
								        	case 6:
								        		order="Butterfly\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (girl)";
												amount="Rs. 299";
												total=299;
												scheduling();
								        		break;
								        		
								        	case 7:
								        		goto f12;
								        		break;
								        		
								        	default:
								        		cout<<"\n Invalid Choice, try again...";
												getch();
												goto f13;
								        		break;
										}
			                    					                    		
			                    		break;
			                    		
			                    	case 2:
			                    		
			                    		f14:
			                    		system("cls");
			                    		cout << "\n\n\n\n\n\n\n\n\n"; 
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "******************************************\n";
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "*              BOY'S HAIR CUTS           *\n";
								        cout << "\t\t\t\t\t\t\t      "; 
								        cout << "******************************************\n\n";
								    
								        cout << "\t\t\t\t\t\t\t       1. CREW CUT                            99\n";
								        cout << "\t\t\t\t\t\t\t       2. FADE                                99\n";
								        cout << "\t\t\t\t\t\t\t       3. SHORT MULLET                       199\n";
								        cout << "\t\t\t\t\t\t\t       4. BUZZ                                99\n";
								        cout << "\t\t\t\t\t\t\t       5. SIDE FRINGE                        199\n";
								        cout << "\t\t\t\t\t\t\t       6. FRINGE UP                          199\n";
								        cout << "\t\t\t\t\t\t\t       7. BACK\n\n\n";
								
								        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
								        int choice98;
										cin >> choice98;
								
								        switch (choice98)
								        {
								        	case 1:
								        		order="Crew-cut\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)";
												amount="Rs.  99";
												total=99;
												scheduling();
								        		break;
								        		
								        	case 2:
								        		order="Fade\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)";
												amount="Rs.  99";
												total=99;
												scheduling();
								        		break;
								        		
								        	case 3:
								        		order="Short-mullet\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)\t";
												amount="Rs. 199";
												total=199;
												scheduling();
								        		break;
								        		
								        	case 4:
								        		order="Buzz\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)";
												amount="Rs.  99";
												total=99;
												scheduling();
								        		break;
								        		
								        	case 5:
								        		order="Side-fringe\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)";
												amount="Rs. 199";
												total=199;
												scheduling();
								        		break;
								        		
								        	case 6:
								        		order="Fringe-up\n\t\t\t\t\t   \t Haircut\n\t\t\t\t\t   \t (boy)";
												amount="Rs. 199";
												total=199;
												scheduling();
								        		break;
								        		
								        	case 7:
								        		goto f12;
								        		break;
								        		
								        	default:
								        		cout<<"\n Invalid Choice, try again...";
												getch();
												goto f14;
								        		break;
										}
			                    		
			                    		break;
			                    		
			                    	case 3:
			                    		goto f11;
			                    		break;
			                    		
			                    	default:
			                    		cout<<"\n Invalid Choice, try again...";
										getch();
										goto f12;
			                    		break;
								
								}
				        						        		
				        		break;
				        		
				        	case 2:
				        		order="Hair Color";
								amount="Rs.1999";
								total=1999;
								scheduling();
				        		break;
				        		
				        	case 3:
				        		order="Hair Spa";
								amount="Rs. 599";
								total=599;
								scheduling();
				        		break;
				        		
				        	case 4:
				        		goto f10;
				        		break;
				        		
				        	default:
				        		cout<<"\n Invalid Choice, try again...";
								getch();
								goto f11;
				        		break;
						}
		        		
		        		break;
		        		
		        	case 2:
		        		
		        		f15:
		        		system("cls");
		        		cout << "\n\n\n\n\n\n\n\n\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "******************************************\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "*                SKIN CARE               *\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "******************************************\n\n"; 
						cout << "\t\t\t\t\t\t\t       1. FACIAL                             299\n"; 
						cout << "\t\t\t\t\t\t\t       2. CLEAN UP                           499\n"; 
						cout << "\t\t\t\t\t\t\t       3. BACK\n\n\n"; 
						cout << "\t\t\t\t\t\t\t      [Enter your choice] : "; 
						int choice97;
						cin >> choice97; 
						switch (choice97)
						{
							case 1:
								order="Facial\n\t\t\t\t\t   \t Skin-Care";
								amount="Rs. 299";
								total=299;
								scheduling();
								break;
								
							case 2:
								order="Clean-up\n\t\t\t\t\t   \t Skin-Care";
								amount="Rs. 499";
								total=499;
								scheduling();
								break;
								
							case 3:
								goto f10;
								break;
								
							default:
								cout<<"\n Invalid Choice, try again...";
								getch();
								goto f15;
								break;
						}
							
		        		break;
		        		
		        	case 3:
		        		
		        		f16:
		        		system("cls");
		        		cout << "\n\n\n\n\n\n\n\n\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "******************************************\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "*                  MAKEUP                *\n"; 
						cout << "\t\t\t\t\t\t\t      "; 
						cout << "******************************************\n\n"; 
						cout << "\t\t\t\t\t\t\t       1. NORMAL                            8999\n"; 
						cout << "\t\t\t\t\t\t\t       2. BRIDAL                           15999\n"; 
						cout << "\t\t\t\t\t\t\t       3. BACK\n\n\n"; 
						cout << "\t\t\t\t\t\t\t      [Enter your choice] : "; 
						int choice96;
						cin >> choice96; 
						switch (choice96)
						{
							case 1:
								order="Normal\n\t\t\t\t\t   \t Makeup";
								amount="Rs.8999";
								total=8999;
								scheduling();
								break;
								
							case 2:
								order="Bridal\n\t\t\t\t\t   \t Makeup";
								amount="Rs.15999";
								total=15999;
								scheduling();
								break;
								
							case 3:
								goto f10;
								break;
								
							default:
								cout<<"\n Invalid Choice, try again...";
								getch();
								goto f16;
								break;
						}
		
		        		break;
		        		
		        	case 4:
		        		goto f1;
		        		break;
		        		
		        	default:
		        		cout<<"\n Invalid Choice, try again...";
						getch();
						goto f10;
		        		break;
				}
            	    	
                break;
                
            case 4:
        
            	f6:
				system("cls");
				cout << "\n\n\n\n\n\n\n\n\n"; 
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "*           EVENT SERVICES               *\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n\n";
		    	
		    	cout << "\t\t\t\t\t\t\t       1. PARTY DECOR\n";
		        cout << "\t\t\t\t\t\t\t       2. PLANNING\n";
		        cout << "\t\t\t\t\t\t\t       3. PHOTOGRAPHY                        1999\n";
		        cout << "\t\t\t\t\t\t\t       4. BACK\n\n\n";

		        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
		        int choice4;
		        cin >> choice4;
		        
		        switch (choice4)
		        {
		        	case 1:
		        		
		        		f7:
		        		system("cls");
		        		cout << "\n\n\n\n\n\n\n\n\n"; 
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "*             PARTY DECOR                *\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n\n";
				    
				        cout << "\t\t\t\t\t\t\t       1. STANDARD                          1999\n";
	                    cout << "\t\t\t\t\t\t\t       2. BDAY                              3999\n";
	                    cout << "\t\t\t\t\t\t\t       3. BACK\n\n\n";

				        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
				        int partDecorChoice ;
				        cin >> partDecorChoice;
				        
				        switch (partDecorChoice)
				        {
				        	case 1:
				        		
				        		order="Standard\n\t\t\t\t\t   \t Decoration";
								amount="Rs.1999";
								total=1999;
								scheduling();			
				        		break;
				        		
				        	case 2:
				        		order="Birthday\n\t\t\t\t\t   \t Decoration";
								amount="Rs.3999";
								total=3999;
								scheduling();
				        		break;
				        		
				        	case 3:
				        		goto f6;
				        		
				        	default:
				        		cout<<"\n Invalid Choice, try again...";
								getch();
								goto f7;
				        	
						}
						        		
		        		break;
		        	
		        	case 2:
		        		
		        		f8:
						system("cls"); 

				        cout << "\n\n\n\n\n\n\n\n\n"; 
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "*              PLANNING                  *\n";
				        cout << "\t\t\t\t\t\t\t      "; 
				        cout << "******************************************\n\n";
				    
				        cout << "\t\t\t\t\t\t\t       1. CATERING                           499\n";
	                    cout << "\t\t\t\t\t\t\t       2. TENT SUPPLY                       1999\n";
	                    cout << "\t\t\t\t\t\t\t       3. BACK\n\n\n";

				        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
				        int planningChoice;
				        cin >> planningChoice;
				        
				        switch (planningChoice)
				        {
				        	case 1:
				        		order="Catering\n\t\t\t\t\t   \t Planning";
								amount="Rs. 499";
								total=499;
								scheduling();
				        		
				        	case 2:
				        		order="Tent Supply\n\t\t\t\t\t   \t Planning";
								amount="Rs.1999";
								total=1999;
								scheduling();
						
				        	case 3:
				        		goto f6;
				        		
				        	default:
				        		cout<<"\n Invalid Choice, try again...";
								getch();
								goto f8;
				        
						}
							
		        		break;
		        	
					case 3:
						
						order="Photography";
						amount="Rs.1999";
						total=1999;
						scheduling();
						break;
					
					
					case 4:
						goto f1;
						
					default:
						cout<<"\n Invalid Choice, try again...";
						getch();
						goto f6;
							
				}
            	
            	break;
            	
            case 5:
            	
            	f9:
            	system("cls");
            	cout << "\n\n\n\n\n\n\n\n\n"; 
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "*           WELLNESS SERVICES            *\n";
		        cout << "\t\t\t\t\t\t\t      "; 
		        cout << "******************************************\n\n";
		    
		        cout << "\t\t\t\t\t\t\t       1. YOGA                                149\n";
		        cout << "\t\t\t\t\t\t\t       2. MASSAGE                              99\n";
		        cout << "\t\t\t\t\t\t\t       3. NUTRITION CONSULTANCY               499\n";
		        cout << "\t\t\t\t\t\t\t       4. BACK\n\n\n";
		
		        cout << "\t\t\t\t\t\t\t      [Enter your choice] : ";
        		int choice5;
				cin >> choice5;

        		switch (choice5)
				{
					case 1:
						order="Yoga Service";
						amount="Rs. 149";
						total=149;
						scheduling();
						break;
						
					case 2:
						order="Massage\n\t\t\t\t\t   \t Service";
						amount="Rs.  99";
						total=99;
						scheduling();
						break;
						
					case 3:
						order="Nutrition\n\t\t\t\t\t   \t Consultancy";
						amount="Rs. 499";
						total=499;
						scheduling();
						break;
						
					case 4:
						goto f1;
						break;
						
					default:
						cout<<"\n Invalid Choice, try again...";
						getch();
						goto f9;
						break;
				} 
            	
            	break;
            	
            case 6:
            	cout<<"\n\n\t\t\t\t\t\t\t\t    Exiting....";
            	sleep(2);
            	cout<<"\n\t\t\t\t\t\t\t\t    ";
				system("pause");
            	break;
            	
            default:
            	cout<<"\n\n\t\t\t\t\t\t\t\t    Invalid Choice, try again...";
				getch();
				goto f1;
            	break;
            	
		}
}



string baseclass::scheduling()
{
    int dayChoice, hourChoice;

	flag1:
	system("cls");
	cout << "\n\n\n";
	cout << "\t\t\t\t\t\t\t      "; 
    cout << "******************************************\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "*              SCHEDULING                *\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "******************************************\n\n";

    cout << "\t\t\t\t\t\t\t         Choose a day of the week to schedule :\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  1. Monday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  2. Tuesday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  3. Wednesday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  4. Thursday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  5. Friday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  6. Saturday\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  7. Sunday\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
    cin >> dayChoice;

    switch (dayChoice) {
        case 1: day = "Monday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Monday.\n"; break;
        case 2: day = "Tuesday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Tuesday.\n"; break;
        case 3: day = "Wednesday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Wednesday.\n"; break;
        case 4: day = "Thursday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Thursday.\n"; break;
        case 5: day = "Friday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Friday.\n"; break;
        case 6: day = "Saturday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Saturday.\n"; break;
        case 7: day = "Sunday"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You chose Sunday.\n"; break;
        default: cout << "\n\n\n\t\t\t\t\t\t\t\t    Invalid choice... Try Again\n"; getch(); goto flag1;
    }
	getch();
	
	flag2:
	system("cls");
	cout << "\n\n\n";
	cout << "\t\t\t\t\t\t\t      "; 
    cout << "******************************************\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "*              SCHEDULING                *\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "******************************************\n\n";
	
    cout << "\t\t\t\t\t\t\t        Choose an hour of the day to schedule :\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  1. 8:00 am\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  2. 9:00 am\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  3. 10:00 am\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  4. 11:00 am\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  5. 12:00 pm\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  6. 1:00 pm\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  7. 2:00 pm\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  8. 3:00 pm\n\n";
    cout << "\t\t\t\t\t\t\t\t\t  9. 4:00 pm\n\n";
    cout << "\t\t\t\t\t\t\t\t\t 10. 5:00 pm\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t    [Enter your choice] : ";
    cin >> hourChoice;

    switch (hourChoice) {
        case 1: time = " 8:00 am"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 8:00 am.\n"; break;
        case 2: time = " 9:00 am"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 9:00 am.\n"; break;
        case 3: time = "10:00 am"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 10:00 am.\n"; break;
        case 4: time = "11:00 am"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 11:00 am.\n"; break;
        case 5: time = "12:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 12:00 pm.\n"; break;
        case 6: time = " 1:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 1:00 pm.\n"; break;
        case 7: time = " 2:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 2:00 pm.\n"; break;
        case 8: time = " 3:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 3:00 pm.\n"; break;
        case 9: time = " 4:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 4:00 pm.\n"; break;
	    case 10: time = " 5:00 pm"; cout << "\n\n\n\t\t\t\t\t\t\t\t    You scheduled for 5:00 pm.\n"; break;
        default: cout << "\n\n\n\t\t\t\t\t\t\t\t    Invalid choice... Try again\n"; getch(); goto flag2;
    }
    string ignr2;
    getline(cin,ignr2);
	getch();

	flag3:
	system("cls");
	
	cout << "\n\n\n";
	cout << "\t\t\t\t\t\t\t      "; 
    cout << "------------------------------------------\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "       Your Scheduled Day  : " << day <<"\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "------------------------------------------\n\n";
	
	cout << "\t\t\t\t\t\t\t      "; 
    cout << "------------------------------------------\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "       Your Scheduled Time : " << time <<"\n";
    cout << "\t\t\t\t\t\t\t      "; 
    cout << "------------------------------------------\n\n";
	
    cout << "\n\n\t\t\t\t\t\t\t             [CONFIRM] (y/n)     : ";
	string ch1;
	getline(cin,ch1);
	if(ch1=="n")
	{
		goto flag1;
	}
	else if(ch1=="y")
	{
		
		cout << "\n\n\t\t\t\t\t\t\t      "; 
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	    cout << "\t\t\t\t\t\t\t      "; 
	    cout << "           Your schedule is set!          \n";
	    cout << "\t\t\t\t\t\t\t      "; 
	    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
		
		cout<<"\n\n\t\t\t\t\t\t\t            [ADD MORE] (y/n)     : ";
		string ch2;
		getline(cin,ch2);
		if(ch2=="n")
		{
			cout<<"\n\n\t\t\t\t\t\t\t      [PROCEED TO PAY] (y/n)     : ";
			string ch3;
			getline(cin,ch3);
			if(ch3=="n")
			{
				mainmenu();
			}
			else if(ch3=="y")
			{
				paymentMethod();
			}
			else
			{
				cout<<"\n\n\t\t\t\t\t\t\t     Invalid Choice....Try again..";
				getch();
				goto flag3;
			}
		}
		else if(ch2=="y")
		{
			top++;
				
				nm[top]=order;
				am[top]=amount;
				dy[top]=day;
				tm[top]=time;
				tt[top]=total;
				fin=fin+tt[top];
			
			mainmenu();
			
		}
		else
		{
			cout<<"\n\n\t\t\t\t\t\t\t           Invalid choice....try again";
			getch();
			goto flag3;
		}
	}
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t            Invalid choice, try again...";
		getch();
		goto flag3;
	}
	
}

string baseclass::paymentMethod()
{
	flag2:
	system("cls");
	
	cout << "\n\n\n\n\n\n\n\n\n"; 
	cout << "\t\t\t\t\t\t\t      "; 
	cout << "******************************************\n";
	cout << "\t\t\t\t\t\t\t      "; 
	cout << "*             PAYMENT METHOD             *\n";
	cout << "\t\t\t\t\t\t\t      "; 
	cout << "******************************************\n\n";
		        
	cout<<"\n\n\t\t\t\t\t\t\t\t\t1. Pay Now";
	cout<<"\n\t\t\t\t\t\t\t\t\t2. After Satisfaction";
	cout<<"\n\t\t\t\t\t\t\t\t\t3. Credit Card\n\n";
	cout<<"\t\t\t\t\t\t\t\t    [Enter your choice] : ";
	int it101;
	cin>>it101;
	string ignore;
	switch(it101)
	{
		case 1:
			
			pay="  (Paid) ";
			getline(cin, ignore);
			prepaid();
			break;

		case 2:
			pay="  (Yet to Pay) ";
			billing();
    		break;
			
		case 3:
			pay="CC";
			getline(cin, ignore);
			creditCard();
			break;
			
		default :
			cout<<"\n Wrong selection, Try again......";
			goto flag2;
			break;
    }
}

string baseclass::billing()
{
	system("cls");
	int t1=top+1;
	for(int l=1; l<=6-t1; l++)
	{
		cout<<"\n\n";
	}
	
	cout <<"\n\n\t\t\t\t\t Billing Time : "<< (ltm->tm_hour) << ":"<< (ltm->tm_min) << ":"<< (ltm->tm_sec) << endl;
	cout<<"\t\t\t\t\t ------------------------------------- Bill --------------------------------------";
	cout<<"\n\t\t\t\t\t Customer Name : Developer";
	cout<<"\n\t\t\t\t\t ---------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t S.No. \t Service \t\t\t Price \t\t Day \t\t Time";
	cout<<"\n\t\t\t\t\t ---------------------------------------------------------------------------------";
	int sno=0;
	int tot=fin+total;
	float tax=0.08*tot;
	float CF=(tot)*0.02;
	cout<<"\n";
	for(int i=0;i<=top;i++)
	{
		sno++;
		cout<<"\n\t\t\t\t\t "<<sno<<". \t "<<nm[i]<<" \t\t\t "<<am[i]<<" \t "<<dy[i]<<" \t "<<tm[i]<<endl;
	}
	sno++;
	cout<<"\n\t\t\t\t\t "<<sno<<". \t "<<order<<" \t\t\t "<<amount<<" \t "<<day<<" \t "<<time<<endl;
	cout<<"\n\t\t\t\t\t ---------------------------------------------------------------------------------";
	cout<<"\n\t\t\t\t\t\t Subtotal  \t\t:\t "<<tot;
	cout<<"\n\t\t\t\t\t\t Tax (8%)  \t\t:\t "<<tax;
	
	if(pay=="CC")
	{
		cout<<"\n\t\t\t\t\t\t Convenience fee  \t:\t "<<CF<<" (2%) ";
		cout<<"\n\t\t\t\t\t\t Total     \t\t:\t "<<tot+tax+CF<<" (Paid) ";
		cout<<"\n\t\t\t\t\t ---------------------------------------------------------------------------------\n";
	}
	else
	{
		cout<<"\n\t\t\t\t\t\t Total     \t\t:\t "<<tot+tax<<pay;
		cout<<"\n\t\t\t\t\t ---------------------------------------------------------------------------------\n";
	}
	
	cout<<"\n\n\n\n\n\n";
	
}

string baseclass::prepaid()
{
	
	system("cls");
	cout << "\n\t\t\t\t\t\t\t       HINT:- ";
    cout << "\n\t\t\t\t\t\t\t      Bank Account NO.: 0832CS2311";
    cout << "\n\t\t\t\t\t\t\t      Password        : 987654321";
    cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"*                ENTER DETAILS                *";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout << "\n\n\t\t\t\t\t\t\t           ";
    cout << " Enter Bank Account No : ";
    string accountNumber;
    getline(cin, accountNumber);
    cout << "\n\t\t\t\t\t\t\t           ";
    cout << " Enter Password        : ";
    string password;
    getline(cin, password);

    if (accountNumber == "0832CS2311" && password == "987654321")
	{
        cout << "\n\n\n\n\t\t\t\t\t\t\t           ";
		cout << "..... Credential Successful .....";
        getch();
        billing();
    } 
	else 
	{
    	cout << "\n\n\n\n\t\t\t\t\t\t\t        ";
        cout << "..... Invalid credentials, Try again .....";
        cin.get();
		prepaid();
    }    
}


string baseclass::creditCard()
{
	
	system("cls");
    string cardNumber, expiryDate, cvv;
        
	cout << "\n\t\t\t\t\t\t\t       HINT:- ";
	cout << "\n\t\t\t\t\t\t\t     Credit Card N0. : 1111 2222 3333 4444";
    cout << "\n\t\t\t\t\t\t\t     Expiry Date     : 11/28 ";
    cout << "\n\t\t\t\t\t\t\t     CVV             : 222 \n\n";
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"*                  CREDIT CARD                *";
	cout<<"\n\t\t\t\t\t\t\t     ";
	cout<<"-----------------------------------------------";
	cout<<"\n\n\t\t\t\t\t\t\t    ";

    cout << " Enter Credit Card Number  : ";
    getline(cin, cardNumber);
    cout<<"\n\t\t\t\t\t\t\t    ";
    cout << " Enter Expiry Date (MM/YY) : ";
    getline(cin, expiryDate);
    cout<<"\n\t\t\t\t\t\t\t    ";
    cout << " Enter CVV                 : ";
    getline(cin, cvv);

	if(cardNumber == "1111 2222 3333 4444" && expiryDate == "11/28" && cvv == "222")
	{ 
		cout<<"\n\n\n\n\n\t\t\t\t\t\t\t    ";
	    cout << " Processing Credit Card Payment...\n";
	    sleep(3);
	    	    
	    system("cls");
	
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout<<"\t\t\t\t\t\t\t     ";
		cout<<"-----------------------------------------------";
		cout<<"\n\t\t\t\t\t\t\t     ";	
		cout<<"*            TRANSACTION SUCCESSFUL           *";
		cout<<"\n\t\t\t\t\t\t\t     ";
		cout<<"-----------------------------------------------";
		cout<<"\n\n\n\n\n\n\n\n\n";
		
		sleep(1);
		
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t press any key to continue...";
	    
	    cin.get();
	    billing();
	}
	else
	{
		cout<<"\n\n\t\t\t\t\t\t\t     Invalid Card Entry....\n Try Again....";
		cin.get();
		creditCard();
	}
}

int main()
{
	subclass obj1;
}


