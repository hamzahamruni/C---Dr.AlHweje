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
void update()
{
	fstream file("students");
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
int main()
{
   fstream file;
   int n;
   Std s;
   cout<<"how miny stidents = ";
   cin>>n;
   file.open("students",ios::out);
   for(int i=1;i<=n;i++)
   {
      cout<<"enter id student "<<i<<" = ";
      cin>>s.id;
   	  cout<<"enter name student "<<i<<" : ";
   	  cin>>s.name;
   	  cout<<"enter grid student "<<i<<" = ";
   	  cin>>s.grid;
   	  file<<s.id<<"     "<<s.name<<"     "<<s.grid<<endl;
   }
   file.close();
   cout<<endl<<"___________________________________________________________"<<endl;
   file.open("students",ios::in);
   for(int i=1;i<=n;i++)
   {
   	  file>>s.id>>s.name>>s.grid;
   	  cout<<s.id<<"     "<<s.name<<"     "<<s.grid<<endl;
   }
  file.close();
  void update();
}
