#include<conio.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
	ofstream data_file;
	long num;
	char name[50];
	float hours;
	data_file.open("hamza",ios::out);
	if(! data_file)
	{
		cerr<<"eror dont have file ";
		exit(1);
	}
	for(int i=0;i<2;i++)
	{
		data_file>>num>>hours>>name;
		cout<<num<<"\t"<<hours<<"\t"<<name<<endl;
		
	}
	data_file.seekg(0,ios::end);
	int size_file=data_file.tellg();
	cout<<"size file = "<<size_file<<endl;
	data_file.close();
	system("pause");
}
