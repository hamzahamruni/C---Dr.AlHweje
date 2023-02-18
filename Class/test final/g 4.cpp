#include<iostream>
using namespace std;
class A
{
	int n;
	public:
		A(){cout<<"A defaull constructor"<<endl;}
		A(int i):n(i){cout<<"A initialization constructor"<<endl;}
		A(const A& a):n(a.n){cout<<"A copy constructor"<<endl;}
		~A(){cout<<"A destructor"<<endl;}
		const A & operator=(const A & a){n=a.n;cout<<"A assingnment"<<endl;}

};
class B
{
	A a;
	public:
		B() {cout<<"B defaull constructor";}
		B(int i){a=i;cout<<"B initialization constructor"<<endl;}
		B(const B& b):a(b.a){cout<<"B copy constructor"<<endl;}
		~B(){cout<<"B destructor"<<endl;}
		const B & operator=(const B & b){a=b.a;cout<<"B assingnment"<<endl;}
};
int main()
{
	B x(2),y,z(y);
	y=x;
	return 0;
	
}
