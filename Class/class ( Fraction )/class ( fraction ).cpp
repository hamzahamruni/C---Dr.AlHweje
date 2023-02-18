#include<iostream>
using namespace std;
class fraction
{
	int den;
	int num;
	public:
		fraction(int x=0,int y=0):den(x),num(y){}
	    fraction& operator++()
	    {
	    	num+=den;
	    	return *this;
	    }
	    fraction& operator++(int)
		{
			fraction old(*this);
			++(*this);
			return old;
	    }
	    void print()
	    {
	    	cout<<num<<"/"<<den<<endl;
	    }
	    
};
int main()
{
	fraction x(1,2),y(1,2);
	cout<<"x = ";
	x.print();
	x=++x;
	cout<<"x = ";
	x.print();
	cout<<"y = ";
	y.print();
	y=y++;
	cout<<"y = ";
	y.print();
}
