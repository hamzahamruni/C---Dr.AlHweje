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
int main()
{
	int n=1,choice;
	bank b[n];
	ofstream file_bank;
	file_bank.open("bank",ios::out);
	if(!file_bank.is_open())
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"Numbe,Last Name,First Name,Blanca : "<<endl;
	cin>>b[0].number>>b[0].last_name>>b[0].first_name>>b[0].blanca;
	file_bank<<b[0].number<<"   "<<b[0].last_name<<"   "<<b[0].first_name<<"   "<<b[0].blanca<<endl;
	file_bank.close();
}
