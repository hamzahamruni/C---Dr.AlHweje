#include<iostream>
using namespace std;
void hanoi(int n,int s,int d,int i)
{
	if(n>=1)
	{
		hanoi(n-1,s,i,d);
		cout<<"move"<<endl;
		hanoi(n-1,s,i,d);
	}
}
int main()
{
	int n(3);
	hanoi(n,1,2,3);
	return 0;
}
