#include<string>
#include<iostream>
using namespace std;
class pet
{
	private:
	string name;
	int age;
	double weight;
	public:
	pet();
	pet(string);
	pet(int);
	pet(double);
	pet(string,int,double);
	string getnema();
	int getage();
	double getweight();
	void setname(string);
	void setage(int);
	void setweight(double);
	void printme();
};
