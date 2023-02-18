#include<iostream>
using namespace std;
int var=1;
enum sex {male,female};
int main()
{
	int i(1),&y=var;
	cout<<"&y = "<<&y<<"&var = "<<&var;
	int *ip1=&i,**pp;
	sex gender = male;
	pp=&ip1;
	cout<<"*pp = "<<**pp<<endl;
	cout<<"*ip1 = "<<*ip1<<endl;
	if(gender)
	   cout<<"your gender is fit to the job"<<endl;
	else
	   cout<<"your gender is not fit to the job"<<endl;
	y=(i=2,i+2);
	cout<<(i++ + ++i)<<endl;
	cout<<"i = "<<i<<endl;
	cout<<"var = "<<var<<endl;
    {
		char var='v';
		cout<<"var = "<<var<<endl;
		::var=2;
		cout<<"var = "<<var<<endl;
    }
	cout<<"var = "<<var<<endl;
	return 0;
}
