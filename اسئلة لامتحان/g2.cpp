#include<iostream>
#include<string.h>
using namespace std;
int somefunction(char v[],int i,int j)
{
	int temp;
	if(j==1)
	  return 1 ;
	temp=v[i];
	v[i]=v[j];
	v[j]=temp;
	somefunction(v,++i,--j);
}
int main()
{
	char test[]="libya";
	somefunction(test,0,strlen(test)-1);
	cout<<"test = "<<test<<endl;
	return 0;
}
