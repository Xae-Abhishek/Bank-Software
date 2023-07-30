#include<stdio.h>
#include<string.h>

struct account
{
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	
	char father_name[20];
	char mother_name[20];
	
	char adress[20];
	char state[20];
	char country[20];
	char continenet[20];
	
	char gender[20];
	char account_type[20];
	char occupation[20];
	
	int balance;
	
	int birth_year;
	int birth_month;
	int birth_date;
	int age;
	
	int freeze;
	int ban;
};

void main()
{
	
	
	
	struct account s[1000];
	
	int count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
	
	int ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10;
	
	int a,b,c=0,d,e,f,g,h,i,j,k;
	
	char fake[20];
	char search[20];
	
	system("CLS");
	
	for(j=0;;j++)
	{
		system("CLS");
		
		printf(" availabe features : ");
		
		printf("\n\n\t\t    1 to create a  new account\n");
		
		printf("\n\t\t    2 to see account details\n");
		
		printf("\n\t\t    3 deposit money\n");
		
		printf("\n\t\t    4 to withdrwas  money\n");
		
		printf("\n\t\t    5 to delete a account \n");
		
		printf("\n\t\t    6 to freeze transcation of account\n");
		
		printf("\n\t\t    7 to generate a tabel of all existing accounts \n");
		
		printf("\n\t\t    8 to search a account by name \n");
		
		printf("\n\t\t    9 to restore an account which was deleted \n");
		
		printf("\n\t\t    10 to unfreeze transcation of account \n");
		
		printf("\n\t\t    11 to exit thr program \n");
	
		printf("\n\n\n\nENTER YOUR CHOICE : ");
		
		scanf("%d",&ch1);

		if(ch1==1)
		{
				system("CLS");
				printf("\n\n\tYOU HAVE CHOSSEN TO CREATE A NEW ACCOUNT\n");
				
				printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
				printf("\n\n\tCHOICE : ");
				scanf("%d",&a);
				system("CLS");
				if(a==1)
					{
						system("CLS");
						
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your first name : ");
						fflush(stdin);
						gets(s[i].first_name);
						
						printf("\n\n\t enter your middle name : ");
						fflush(stdin);
						gets(s[i].middle_name);
						
						printf("\n\n\t enter your last name : ");
						fflush(stdin);
						gets(s[i].last_name);
						
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your age : ");
						scanf("%d",&s[i].age);
						
						printf("\n\n\t enter your birth year :  ");
						scanf("%d",&s[i].birth_year);
						
						printf("\n\n\t enter your birth month :");
						scanf("%d",&s[i].birth_month);
						
						printf("\n\n\t enter your birth date : ");
						scanf("%d",&s[i].birth_date);
						
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t choose your gender : ");
						printf("\n\n\n\t enter 1 for male \t enter 2 for female");
						printf("\n\n\t enter 3 for others \t enter 4 for preferred not to day ");
						printf("\n\n\n\n\t CHOICE : ");
						scanf("%d",&ch4);
						
						if(ch4==1)
						{
							strcpy(s[i].gender,"male");
						}
						else if(ch4==2)
						{
							strcpy(s[i].gender,"female");
						}
						else if(ch4==3)
						{
							strcpy(s[i].gender,"other");
						}
						else if(ch4==4)
						{
							strcpy(s[i].gender,"prefer not to say");
						}
						else
						{
							system("CLS");
							printf("\n\n\t choose from given options only");
							printf("\n\n\t account creation cancelled");
							
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);
							continue;
						}
						
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your father name : ");
						fflush(stdin);
						gets(s[i].father_name);
						
						
						printf("\n\n\t enter your mother name :  ");
						fflush(stdin);
						gets(s[i].mother_name);
						
						
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your occupation : ");
						fflush(stdin);
						gets(s[i].occupation);
						
						
						printf("\n\n\t enter your home  adress : ");
						fflush(stdin);
						gets(s[i].adress);
						
						  
						printf("\n\n\t enter your state : ");
						fflush(stdin);
						gets(s[i].state);
						
					
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your country : ");
						fflush(stdin);
						gets(s[i].country);
						
						
						printf("\n\n\t enter your continent : ");
						fflush(stdin);
						gets(s[i].continenet);
						
						
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t CHOOSE  TYPE OF ACCOUNT ");
						printf("\n\n\n\t ENTER 1 FOR SAVINGS ACCOUNT \t         ENTER 2 FOR BUSINESS ACCOUNT \n\n\t ENTER 3 FOR FIXED DEPOSIT ACCOUNT \t ENTER 4 FOR CHILDREN ACCOUNT");
						printf("\n\n\n\n\t\t CHOICE : ");
						scanf("%d",&ch4);
						if(ch4==1)
						{
							strcpy(s[i].account_type,"savings account");
						}
						else if(ch4==2)
						{
							strcpy(s[i].account_type,"business account");
						}
						else if(ch4==3)
						{
							strcpy(s[i].account_type,"fixed deposit account");
						}
						else if(ch4==4)
						{
							strcpy(s[i].account_type,"children account");
						}
						else
						{
							system("CLS");
							printf("\n\n\t choose from given options only");
							printf("\n\n\t account creation cancelled");
							
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);
							continue;
						}	
						
					
						system("CLS");
						printf("\n\n\tENTER THE FOLLOWING DETAILS TO CREATE A NEW ACCOUNT : ");
						
						printf("\n\n\t enter your account balance : ");
						scanf("%d",&s[i].balance);
						
						s[i].freeze=0;
						s[i].ban=0;
						
						system("CLS");
					
						printf("\n\n\n\t\t     ACCOUNT CREATED SUCCESFULLY ");
					
						printf("\n\n\t\t     YOUR ACCOUNT NUMBER IS    : %d",i+1+168706);
						printf("\n");
						i++;
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						
					}
					
				else if(a==2)
					{
						system("CLS");
						printf("\n\n\t\taccount creation cancelled");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
					}
					
				else 
					{
						system("CLS");
						printf("enter from given choices only ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
					}
			
				}
				else if(ch1==2)
				{
					system("CLS");
					printf("\n\n\n\t\t enter the account number to see details  :  ");
					scanf("%d",&ch2);
					ch2=ch2-168706;
					if((ch2>=1)&&(ch2<=i))
					{
						system("CLS");
						ch2=ch2-1;
						if(s[ch2].ban==1)
						{
							system("CLS");
							printf("\n\n\t ACCOUNT HAS BEEN DELETED ");
							printf(" \n\n\n SYSTEM NO LONGER HAS THIS ACCOUNT INFORMATION ");
							sleep(2);
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);	
							continue;	
						}
						
						
						printf("\n\n\t CHOOSE DETAIL FORMAT");
						printf("\n\n\t ENTER 1 FOR MAIN DETAILS ONLY \n\n\t ENTER 2 FOR FULL DETAILS ");
						printf("\n\n\t CHOICE : ");
						scanf("%d",&ch4);
						if(ch4==1)
						{
						system("CLS");
						
						printf("\n\n\t\tFETCHING ACCOUNT DETAILS PLEASE WAIT");
						sleep(3);
						system("CLS");
						printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
						if(s[ch2].freeze==1)
						{
							system("CLS");
							printf("\n\n\t IMP NOTE : TRANSCATIONS ARE FREEZED IN THIS ACCOUNT ");
						}
						printf("\n ACCOUNT HOLDERS NAME        : ");
						printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
						printf("\n ACCOUNT HOLDERS AGE         : ");
						printf("%d",s[ch2].age);
						printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
						puts(s[ch2].occupation);
						printf("\n ACCOUNT TYPE                : ");
						puts(s[ch2].account_type);
						printf("\n ACCOUNT CURRENT BALANCE     : ");
						printf("%d",s[ch2].balance);
				
						printf("\n");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);	
						continue;
						}
						else if(ch4==2)
						{
						system("CLS");
						
						printf("\n\n\t\tFETCHING ACCOUNT DETAILS PLEASE WAIT");
						sleep(3);
						system("CLS");
						printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
						if(s[ch2].freeze==1)
						{
							system("CLS");
							printf("\n\n\t IMP NTE : TRANSCATIONS ARE FREEZED IN THIS ACCOUNT ");
						}
						printf("\n ACCOUNT HOLDERS NAME        : ");
						printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
						printf("\n ACCOUNT  HOLDERS GENDER     : ");
						puts(s[ch2].gender);
						printf("\n ACCOUNT HOLDERS AGE         : ");
						printf("%d",s[ch2].age);
						printf("\n ACCOUNT HOLDER BIRTH DATE   : %02d/%02d/%04d",s[ch2].birth_date,s[ch2].birth_month,s[ch2].birth_year);
						printf("\n ACCOUNT HOLDER FATHER NAME  : ");
						puts(s[ch2].father_name);
						printf("\n ACCOUNT HOLDER MOTHER NAME  : ");
						puts(s[ch2].mother_name);
						printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
						puts(s[ch2].occupation);
						printf("\n ACCOUNT HOLDERS ADRESS      : ");
						puts(s[ch2].adress);
						printf("\n ACCOUNT HOLDERS HOME STATE  : ");
						puts(s[ch2].state);
						printf("\n ACCOUNT  HOLDERS COUNTRY    : ");
						puts(s[ch2].country);
						printf("\n ACCOUNT HOLDER HOME CONTINENT");
						puts(s[ch2].continenet);
						printf("\n ACCOUNT TYPE                : ");
						puts(s[ch2].account_type);
						printf("\n ACCOUNT CURRENT BALANCE     : ");
						printf("%d",s[ch2].balance);
				
						printf("\n");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						}
						else
						{
							system("CLS");
							printf("\n\n\t choose from given options only");
							sleep(2);
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);
							continue;
						}				
					}
					else
						{
							system("CLS");
							printf("\n\n\t\taccount do not exist in the system");
							printf("\n");
							sleep(2);
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);
							continue;
						}
				}
				
				else if(ch1==3)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO  DEPOSIT   MONEY");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==1)
					{
							system("CLS");
							printf("\n\n\t\tENTER YOUR ACCOUNT NUMBER : ");
							scanf("%d",&ch2);
							ch2=ch2-168706;
							if((ch2>=1)&&(ch2<=i))
							{
								ch2=ch2-1;
								if(s[ch2].ban==1)
								{
								system("CLS");
								printf("\n\n\t ACCOUNT HAS BEEN DELETED ");
								printf(" \n\n\n SYSTEM NO LONGER HAS THIS ACCOUNT INFORMATION ");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);	
								continue;	
								}
								if(s[ch2].freeze==1)
								{
								system("CLS");
								printf("\n\n\t TRANSCATION ARE FREEZED IN THIS ACCOUNT");
								printf("\n\n\t YOU CANNOT DEPOSIT MONEY IN THIS ACCOUNT");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);	
								continue;	
								}
								system("CLS");
								printf("\n\n\t\tACCOUNT NAME HOLDER IS     : ");
								printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
								printf("\n\n\t\tCURRENT ACCOUNT BALANCE IS : %d",s[ch2].balance);
								printf("\n\n\tenter the anount of money you want to deposit : ");
								scanf("%d",&b);
								s[ch2].balance=s[ch2].balance+b;
								system("CLS");
								printf("\n\n\t\tACCOUNT NAME HOLDER IS     : ");
								printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
								printf("\n\n\t\tACCOUNT NUMBER IS          : %d",ch2+1+168706);
				
								printf("\n\n\t\tCURRENT ACCOUNT BALANCE IS : %d",s[ch2].balance);
					
				
								printf("\n");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);
								continue;
							}
							else
							{
								system("CLS");
								printf("\n\n\t\taccount do not exist in the system");
								printf("\n");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);
								continue;
							}
							
						}
						else if(ch3==2)
					{
						system("CLS");
						printf("\n\n\n\t TRANSCATION ABBORTED ");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf("\n\n\t choose from given options only");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
					
				else if(ch1==4)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO  WITHDRAW  MONEY");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==1)
					{
							system("CLS");
							printf("\n\n\t\tENTER YOUR ACCOUNT NUMBER : ");
							scanf("%d",&ch2);
							ch2=ch2-168706;
							if((ch2>=1)&&(ch2<=i))
							{
								
								ch2=ch2-1;
								if(s[ch2].ban==1)
								{
								system("CLS");
								printf("\n\n\t ACCOUNT HAS BEEN DELETED ");
								printf(" \n\n\n SYSTEM NO LONGER HAS THIS ACCOUNT INFORMATION ");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);	
								continue;	
								}
								if(s[ch2].freeze==1)
								{
								system("CLS");
								printf("\n\n\t TRANSCATION ARE FREEZED IN THIS ACCOUNT");
								printf("\n\n\t YOU CANNOT WITHDRAW MONEY FROM THIS ACCOUNT");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);	
								continue;	
								}
							
								system("CLS");
								printf("\n\n\t\tACCOUNT NAME HOLDER IS     : ");
								printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
								printf("\n\n\t\tCURRENT ACCOUNT BALANCE IS : %d",s[ch2].balance);
								printf("\n\n\tenter the anount of money you want to withdraw : ");
								scanf("%d",&b);
								s[ch2].balance=s[ch2].balance-b;
								system("CLS");
								printf("\n\n\t\tACCOUNT NAME HOLDER IS     : ");
								printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
								printf("\n\n\t\tACCOUNT NUMBER IS          : %d",ch2+1+168706);
				
								printf("\n\n\t\tCURRENT ACCOUNT BALANCE IS : %d",s[ch2].balance);
				
				
								printf("\n");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);
								continue;
							}
							else
							{
								system("CLS");
								printf("\n\n\t\taccount do not exist in the system");
								printf("\n");
								sleep(2);
								printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
								fflush(stdin);
								gets(fake);
								continue;	
							}
							
						}
						else if(ch3==2)
					{
						system("CLS");
						printf("\n\n\n\t TRANSCATION ABBORTED ");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf("\n\n\t choose from given options only");
						sleep(2);
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
				
				else if(ch1==5)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO  DELETE A ACCOUNT");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==2)
					{
						system("CLS");
						printf(" ACCOUNT DELETION CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					system("CLS");
					printf("ENTER THE ACCOUNT NUMBER YOU WANT TO DELETE : ");
					scanf("%d",&ch2);
					ch2=ch2-168706;
					
					if((ch2>=1)&&(ch2<=i))
					{
						
					printf("\n\n\t PLEASE WAIT ");
					sleep(3);
					ch2=ch2-1;
					system("CLS");
					printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
					printf("\n ACCOUNT HOLDERS NAME        : ");
					printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
					printf("\n ACCOUNT HOLDERS AGE         : ");
					printf("%d",s[ch2].age);
					printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
					puts(s[ch2].occupation);
					printf("\n ACCOUNT TYPE                : ");
					puts(s[ch2].account_type);
					printf("\n ACCOUNT CURRENT BALANCE     : ");
					printf("%d",s[ch2].balance);
					sleep(4);
					printf("\n\n\t ARE YOU SURE YOU WANT TO DELETE THIS ACCOUNT ");
					printf("\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch5);
					if(ch5==1)
					{
						s[ch2].ban=1;
						system("CLS");
						printf(" \n\n\t ACCOUNT DELETED ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf(" ACCOUNT DELETION CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
				else
				{
					system("CLS");
					printf("\n\n\t\taccount do not exist in the system");
					printf("\n");
					sleep(2);
					printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
					fflush(stdin);
					gets(fake);
					continue;
					}
				}
				
				
				else if(ch1==6)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO  FREEZE A ACCOUNT");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==2)
					{
						system("CLS");
						printf(" ACCOUNT FREEZE CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					system("CLS");
					printf("ENTER THE ACCOUNT NUMBER YOU WANT TO FREEZE : ");
					scanf("%d",&ch2);
					ch2=ch2-168706;
					
					if((ch2>=1)&&(ch2<=i))
					{
						
					printf("\n\n\t PLEASE WAIT ");
					sleep(3);
					ch2=ch2-1;
					system("CLS");
					printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
					printf("\n ACCOUNT HOLDERS NAME        : ");
					printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
					printf("\n ACCOUNT HOLDERS AGE         : ");
					printf("%d",s[ch2].age);
					printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
					puts(s[ch2].occupation);
					printf("\n ACCOUNT TYPE                : ");
					puts(s[ch2].account_type);
					printf("\n ACCOUNT CURRENT BALANCE     : ");
					printf("%d",s[ch2].balance);
					sleep(4);
					printf("\n\n\t ARE YOU SURE YOU WANT TO FREEZE THIS ACCOUNT ");
					printf("\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch5);
					if(ch5==1)
					{
						s[ch2].freeze=1;
						system("CLS");
						printf(" \n\n\t ACCOUNT FREEZEED ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf(" ACCOUNT FREEZE CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
				else
				{
					system("CLS");
					printf("\n\n\t\taccount do not exist in the system");
					printf("\n");
					sleep(2);
					printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
					fflush(stdin);
					gets(fake);
					continue;
					}
				}
				
				
				else if(ch1==7)
				{
					system("CLS");
					printf("\n\n\t NO\t     NAME         \t BALANCE \t\t ACCOUNT TYPE\n");
					
					for(a=0;a<i;a++)
					{
						printf("\n\t#%d %16s \t        %7d \t         %s\n",a+1,s[a].first_name,s[a].balance,s[a].account_type);
					}
					sleep(1);
					printf("\n\n\n\n\n\t\t PRESS ENTER TO CONTINUE");
					fflush(stdin);
					gets(fake);
				}
				else if(ch1==8)
				{
					system("CLS");
					printf("\n\n\t\t ENTER ACCOUNT HOLDER FIRST NAME TO SEARCH : ");
					fflush(stdin);
					gets(search);
					count2=0;
					for(g=0;g<i;g++)
					{
						if(strcmpi(s[g].first_name,search)==0)
						{
							system("CLS");
							count2++;
							printf("\n ACCOUNT HOLDERS NAME        : ");
							printf("%s %s %s",s[g].first_name,s[g].middle_name,s[g].last_name);
							printf("\n ACCOUNT HOLDERS AGE         : ");
							printf("%d",s[g].age);
							printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
							puts(s[g].occupation);
							printf("\n ACCOUNT TYPE                : ");
							puts(s[g].account_type);
							printf("\n ACCOUNT CURRENT BALANCE     : ");
							printf("%d",s[g].balance);
						}
						
					}
					if(count2==0)
						{
							printf("\n\n\t ACCOUNT DO NOT EXIST ");
							
						}
							printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
							fflush(stdin);
							gets(fake);
							continue;
				}
				else if(ch1==9)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO RESTORE AN ACCOUNT WHICH WAS DELETED ");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==2)
					{
						system("CLS");
						printf(" ACCOUNT RESTORATION CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					system("CLS");
					printf("ENTER THE ACCOUNT NUMBER YOU WANT TO RESTORE : ");
					scanf("%d",&ch2);
					ch2=ch2-168706;
					
					if((ch2>=1)&&(ch2<=i))
					{
						
					printf("\n\n\t PLEASE WAIT ");
					sleep(3);
					ch2=ch2-1;
					system("CLS");
					printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
					printf("\n ACCOUNT HOLDERS NAME        : ");
					printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
					printf("\n ACCOUNT HOLDERS AGE         : ");
					printf("%d",s[ch2].age);
					printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
					puts(s[ch2].occupation);
					printf("\n ACCOUNT TYPE                : ");
					puts(s[ch2].account_type);
					printf("\n ACCOUNT CURRENT BALANCE     : ");
					printf("%d",s[ch2].balance);
					sleep(4);
					printf("\n\n\t ARE YOU SURE YOU WANT TO RESTORE THIS ACCOUNT ");
					printf("\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch5);
					if(ch5==1)
					{
						s[ch2].ban=0;
						system("CLS");
						printf(" \n\n\t ACCOUNT RESTORED ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf(" ACCOUNT RESTORATION CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
				else
				{
					system("CLS");
					printf("\n\n\t\taccount never existed in the system");
					printf("\n");
					sleep(2);
					printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
					fflush(stdin);
					gets(fake);
					continue;
					}
				}
				
				
				else if(ch1==10)
				{
					system("CLS");
					printf("\n\n\t\t YOU HAVE CHOOSEN TO  UNFREEZE A ACCONT");
					printf("\n\n\tARE YOU SURE ?\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch3);
					system("CLS");
					if(ch3==2)
					{
						system("CLS");
						printf(" ACCOUNT UNFREEZE CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					system("CLS");
					printf("ENTER THE ACCOUNT NUMBER YOU WANT TO UNFREEZE : ");
					scanf("%d",&ch2);
					ch2=ch2-168706;
					
					if((ch2>=1)&&(ch2<=i))
					{
						
					printf("\n\n\t PLEASE WAIT ");
					sleep(3);
					ch2=ch2-1;
					system("CLS");
					printf("\n\n\t\tACCOUNT DETAILS ARE AS FOLLOWS");
					printf("\n ACCOUNT HOLDERS NAME        : ");
					printf("%s %s %s",s[ch2].first_name,s[ch2].middle_name,s[ch2].last_name);
					printf("\n ACCOUNT HOLDERS AGE         : ");
					printf("%d",s[ch2].age);
					printf("\n ACCOUNT  HOLDERS OCCUPATION : ");
					puts(s[ch2].occupation);
					printf("\n ACCOUNT TYPE                : ");
					puts(s[ch2].account_type);
					printf("\n ACCOUNT CURRENT BALANCE     : ");
					printf("%d",s[ch2].balance);
					sleep(4);
					printf("\n\n\t ARE YOU SURE YOU WANT TO UNFREEZE THIS ACCOUNT ");
					printf("\n\n\t ENTER 1 for YES\n\n\t ENTER  2 FOR NO\n");
					printf("\n\n\tCHOICE : ");
					scanf("%d",&ch5);
					if(ch5==1)
					{
						s[ch2].freeze=0;
						system("CLS");
						printf(" \n\n\t ACCOUNT UNFREEZEED ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
					else
					{
						system("CLS");
						printf(" ACCOUNT UNFREEZE CANCELLED");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
					}
				}
				
				else
				{
					
					system("CLS");
					printf("\n\n\t\taccount do not exist in the system");
					printf("\n");
					sleep(2);
					printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
					fflush(stdin);
					gets(fake);
					continue;
					}
					
				}
				
				/* TO EXIT */
				
				else if(ch1==11)
				{
					system("CLS");
					printf("\n\n\tTHANKYOU FOR USING THE PROGRAM");
					printf("\n\n\t HAVE A GOOD DAY BYE - BYE");
					break;
				}
				
						/* LAST CHOICE FINISHED */
				else
				{
						system("CLS");
						printf("enter from given choices only ");
						printf("\n\n\n\n\t\t     PRESS   ENTER   TO   CONTINUE");
						fflush(stdin);
						gets(fake);
						continue;
				}	
		}	
	}
