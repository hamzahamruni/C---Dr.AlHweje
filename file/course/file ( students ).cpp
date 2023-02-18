#include<iostream>
#include<fstream>
using namespace std;
struct Std
{
	long id;
	char name[40];
	float g[3];
};
int main()
{
 	ofstream file;
	file.open("date",ios::out);
	if(!file)
	{
		cerr<<"file not open";
		exit(1);
	}
	Std s;
	cout<<"Enter Id Student     Name Student    graides N1 N2 F :"<<endl;
		cin>>s.id>>s.name>>s.g[0]>>s.g[1]>>s.g[2];
		s.g[3]=s.g[0]+s.g[1]+s.g[2];
		file<<s.id<<"     "<<s.name<<"     "<<s.g[0]<<"  "<<s.g[1]<<"  "<<s.g[2]<<"     "<<s.g[3];

	file.close();
	return 0;
}
