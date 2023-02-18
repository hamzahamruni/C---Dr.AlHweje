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
void account(bank b)
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
void update_account(bank b)
{
	int number,m;
	fstream file_bank;
	file_bank.open("bank",ios::in | ios::out );
	if(!file_bank)
	{
		cerr<<"not file ";
		exit(1);
	}
	
	cout<<"Enter number account (1 - 100) : "<<endl;
	cin>>number;
	file_bank.seekg(number-1 * sizeof(bank));
	file_bank.read((char *)&b,sizeof(bank));
	if(b.number==0)
	   cout<<"ERORR ";
	else
	{
		cout<<"enter + or - = ";
		cin>>m;
		b.blanca+=m;
		file_bank.seekp(number-1 * sizeof(bank));
		file_bank.write((char *)&b,sizeof(bank));
	}
	file_bank.close();

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
void add_account(bank b)
{
	system("cls");
	ofstream file_bank;
	file_bank.open("bank",ios::app);
	if(!file_bank)
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"\n Number,Last Name name,First Name,Blanca :"<<endl;
	cin>>b.number>>b.last_name>>b.first_name>>b.blanca;
	file_bank<<b.number<<"   "<<b.last_name<<"   "<<b.first_name<<"   "<<b.blanca<<endl;
	file_bank.close();
	
}
int main()
{
	int choice;
	bank b;

	while((choice=system())!=4)
	{
		switch (choice)
		{
			case 1:
				account(b);
				break;
			case 2:
				update_account(b);
				break;
			case 3:
				add_account(b);
				break;
		}
	}
	cout<<"**************END****************"<<endl;
   return 0;
}
