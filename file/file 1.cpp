#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream data_file;
	long num;
	char name[50];
	float hours;
	data_file.open("hamza",ios::out);
	for(int i=0;i<2;i++)
	{
		cout<<"enter number = ";
		cin>>num;
		cout<<"enter hours = ";
		cin>>hours;
		cout<<"enter name : ";
		cin>>name;
		data_file<<num<<"   "<<hours<<"   "<<name<<endl;
	}
	data_file.close();
	return 0;
	
}

