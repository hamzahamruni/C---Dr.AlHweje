#include<iostream>
#include<string>
using namespace std;
class bank
{
	private:
	int number;
	string name;
	float blanca;
	public:
	bank();
	bank(int,string,float);
	int getnumber();
	 string getname();
	float getblanca();
	void setnumber(int);
	void setname(string);
	void setblanca(float);
	void print();
	void update1(float);
	void update2(float);
	bank account(bank);
};
