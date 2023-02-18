#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<String.h>
using namespace std;
struct shop
{
	int id;
	char name [20],type[20];
	float blanca;
};
struct classes_shop
{
	int id;
	char name_class[20],type_class[20];
	float price;
	string colors[2];
};
int main()
{
	int n=1,choice;
	shop a[n];
	classes_shop b[n];
	//________________________________________________________________________________
	//									إضافة محل	
	fstream file_shop;
	file_shop.open("shop",ios::out);
	if(!file_shop.is_open())
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"Eenter ID__TYPE___Name___Blanca : "<<endl;
	cin>>a[0].id>>a[0].type>>a[0].name>>a[0].blanca;
	file_shop<<a[0].id<<"   "<<a[0].type<<"   "<<a[0].name<<"   "<<a[0].blanca<<endl;
	file_shop.close();
	//___________________________________________________________________________________
	//									إضافة اصناف للمحل	
	fstream shop_items;
	shop_items.open("shop_items",ios::out);
	if(!shop_items.is_open())
	{
		cerr<<"ERROR FILE ";
		exit(1);
	}
	cout<<"Eenter Shop Items TYPE_Items PRICE COLOR1 COLOR2 : "<<endl;
	b[0].id=a[0].id;
	cin>>b[0].name_class>>b[0].type_class>>b[0].price>>b[0].colors[0]>>b[0].colors[1];
	shop_items<<b[0].id<<"   "<<b[0].name_class<<"   "<<b[0].type_class<<"   "<<b[0].price<<"   "<<b[0].colors[0]<<"   "<<b[0].colors[1]<<endl;
	shop_items.close();
}