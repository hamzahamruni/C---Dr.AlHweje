#include<iostream>
using namespace std;
template<class t>
class stack
{
	private:
		int size;
		int top;
		t* data;
		public:
			stack(int s=100):size(s),top(-1){data=new t[size];}
			void bush(const t &x){data [++top]=x;}
			t pop(){return data[top--];}
			bool Empty(){return top==-1;}
			bool Full(){return top==size-1;} 
};
int main()
{
	stack<int>intstack(10);
	stack<char>charstack(20);
	intstack.bush(50);
	charstack.bush('H');
	cout<<"int stack = "<<charstack.pop()<<endl;
	if(intstack.Empty())
	{
		cout<<"stack int is empty";
	}
	return 0;
	
}
	

