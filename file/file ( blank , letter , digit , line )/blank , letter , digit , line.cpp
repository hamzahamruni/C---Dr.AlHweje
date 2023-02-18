#include<ctype.h>
#include<conio.h>
#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
main()
{
	char ch;
	char in_data[20];
	char out_data[20];
	fstream data_file;
	fstream out_file;
	int blank=0,letter=0,digit=0,line=0;
	cout<<"Enter name in file : ";
	cin>>in_data;
	cout<<"Enter name out file : ";
	cin>>out_data;
	data_file.open(in_data,ios::in);
	if(!data_file)
	{
		cerr<<"dont have file . "<<endl;
		exit(1);
	}
	while(data_file.get(ch),!data_file.eof())
	{
		if(ch=='\n')line+=1;
		if(ch==' ')blank+=1;
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))letter+=1;
		if(ch>='0' && ch<='9')digit+=1;
	}
	data_file.close();
	out_file.open(in_data,ios::out);
	out_file<<"\n Here is file [ "<<out_file<<" ] \n"<<"\n Number of blanks ==> : "<<blank<<"\n Number of letters ==> : "<<letter<<"\n Number of digits ==> : "<<digit<<"\n Number of lines ==> : "<<line;
	out_file.close();
}
