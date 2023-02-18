#include<iostream>
using namespace std;
class vector
{
	int *rep;
	int size;
	public:
		vector(int s,int an_array[]):size(s),rep(new int[size])
		{
			for(int i=0;i<size;i++)
			   rep[i]=an_array[i];
		}
		~vector(){delete [] rep;}
		
	int get_size()const{ return size;}
	const int operator[](const int index)const{return rep[index];}
	int& operator[](int index){return rep[index];}
	const vector& operator=(const vector& x)
	{
		size=x.size;
		if(rep != x.rep)
		{
			delete [] rep;
			rep=new int[size];
			for(int i=0;i<size;i++)
			{
				rep[i]=x.rep[i];
			}
		}
		return *this;
				
	}
};
	ostream& operator<<(ostream& out,const vector& x)
	{
		for(int i=0;i<x.get_size();i++)
		{
			out<<x[i];
		}
		return out;
	}
int main()
{
	int somearrya1[]={1,2,3,5};
	int somearrya2[]={10,12,13,15};
	vector x(4,somearrya1),y(4,somearrya2);
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	y=x;
	x[0]=10;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	return 0;
}
	
	

