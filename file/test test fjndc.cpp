#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
struct bank
{
	int number;
	char first_name [20],last_name [20];
	float blanca;
};
void account(bank b[],int n)
{
	system("cls");
	ifstream file_bank;
	file_bank.open("bank",ios::in);
	if(!file_bank)
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"     Acct        Last name          First name          Blanca"<<endl;
	char c;
	while(file_bank.get(c))
	{
		cout<<c;
	}
	cout<<endl;
	file_bank.close();
	
}
void update_account(bank b[],int n)
{
	system("cls");
	int num;
	float chraget;
	cout<<"Enter number account to update ( 1 - 100 ) : ";
	cin>>num;
	fstream file_bank;
	file_bank.open("bank",ios::in | ios::out);
	if(!file_bank)
	{
		cerr<<"ERROR FILE";
		exit(1);
	}
	for(int i=0;i<n;i++)
	{
		file_bank>>b[i].number>>b[i].last_name>>b[i].first_name>>b[i].blanca;
		if(b[i].number==num)
		{
			cout<<b[i].number<<"     "<<b[i].last_name<<"     "<<b[i].first_name<<"     "<<b[i].blanca<<endl;
			cout<<"Enter charget (+) or pyment (-) :  "<<endl;
			cin>>chraget;
			if(chraget<=b[i].blanca)
			{
				b[i].blanca+=chraget;
				file_bank<<b[0].number<<"   "<<b[0].last_name<<"   "<<b[0].first_name<<"   "<<b[0].blanca<<endl;
				cout<<b[i].number<<"     "<<b[i].last_name<<"     "<<b[i].first_name<<"     "<<b[i].blanca<<endl;
			}
			else
		    {
					cout<<"transaction "<<chraget<<" > blanca "<<b[i].blanca<<endl;
					cout<<"**ERROR*** NO FUND TO RECOUER REANSCATION ***"<<endl;
				
			}
		}
	}
	file_bank.close();
	
	getch();
}
int system(void)
{
	int x;
	cout<<"                Nema          : HAMZA HAMRONI "<<endl<<"                Student Number: 213010793  "<<endl;
	cout<<"\n 1 - store aformatted"<<"\n 2 - updte an account"<<"\n 3 - add new account"<<"\n 4 - End Program"<<endl<<endl<<endl;
		cout<<"Enter your choice ?"<<endl;
		cin>>x;
		return x;
		    
}
void add_account(bank b[],int &n)
{
	system("cls");
	ofstream file_bank;
	file_bank.open("bank",ios::app);
	if(!file_bank)
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"\n Number,Last Name name,First Name,Blanca  hbjnb :"<<endl;
	cin>>b[n].number>>b[n].last_name>>b[n].first_name>>b[n].blanca;
	file_bank<<b[n].number<<"   "<<b[n].last_name<<"   "<<b[n].first_name<<"   "<<b[n].blanca<<endl;
	b[n=n+1];
	file_bank.close();
	
}
int main()
{
	int n=1,choice;
	bank b[n];

	while((choice=system())!=4)
	{
		switch (choice)
		{
			case 1:
				account(b,n);
				break;
			case 2:
				update_account(b,n);
				break;
			case 3:
				add_account(b,n);
				break;
		}
	}
	cout<<"**************END****************"<<endl;
   return 0;
}
