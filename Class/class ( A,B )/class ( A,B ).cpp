#include<iostream>
using namespace std;
class Person
{
	public:
		void print_person()
		{
			cout<<"I am person";
		}
		
	
};
class employ : public Person
{
	public:
	void print_employ()
	{
		cout<<"I am employ";
	}
};
int main()
{
	employ object;
	object.print_person();
	object.print_employ();
}

