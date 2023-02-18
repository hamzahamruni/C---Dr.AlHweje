#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream data_file;
	data_file.open("hamza",ios::trunc);
	
	data_file.close();
	return 0;
	
}

