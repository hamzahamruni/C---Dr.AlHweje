#include<iostream>
using namespace std;
int somefunction1(int& x,int& y){return (x>y)?x:y;}
int& somefunction2(int& x,int& y){return (x>y)?x:y;}
int main()
{
	int x=10,y=20;
	int& rx=x;
	rx=somefunction1(x,y);
	cout<<"x = "<<x<<" y = "<<y<<endl;
	somefunction2(x,y=10);
	cout<<"x = "<<x<<" y = "<<y<<endl;
	--somefunction2(x,y);
	cout<<"x = "<<x<<" y = "<<y<<endl;
	return 0;
	
}

