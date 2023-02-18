#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
struct Std
{
   long id;
   float grid;
   char name[50];
};
int main()
{
	fstream file("students");
	file.open("students",ios::in | ios::out);
	long d;
	Std s;
	cout<<"enter id = ";
	cin>>d;
	if(!file)
	{
		cerr<<"not open file";
		exit(1);
	}
	file.seekg(d-1 * sizeof(s));
	file.read((char *)&s,sizeof(s));
	if(s.id==0)
		cerr<<"sorry student not found ";
	else
	{
		cin>>s.grid;
		file.seekp(d-1 * sizeof(s));
		file.write((char *)&s,sizeof(s));
	}
	file.close();
}
