#include"bank.cpp"
int main()
{
	bank c;
	int n,num;
	float bla,x,y;
	string nam;
	cout<<"Enter n = ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Enter umber = ";cin>>num;c.setnumber(num);
		cout<<"Enter name : ";cin.ignore();getline(cin,nam);c.setname(nam);
		cout<<"Enter blanca = ";cin>>bla;c.setblanca(bla);
		///////////////////////////////////////////////
		c.print();
		///////////////////////////////////////////////
		cout<<endl<<"Enter + = ";cin>>x;c.update1(x);
		///////////////////////////////////////////////
		cout<<" Enter - = ";cin>>y;c.update2(y);
		c.print();
	}
	bank a,b;
	cout<<"Enter umber = ";cin>>num;a.setnumber(num);
	cout<<"Enter name : ";cin.ignore();getline(cin,nam);a.setname(nam);
	cout<<"Enter blanca = ";cin>>bla;a.setblanca(bla);
	/////////////////////////////////////////////////////////
	cout<<"Enter umber = ";cin>>num;b.setnumber(num);
	cout<<"Enter name : ";cin.ignore();getline(cin,nam);b.setname(nam);
	cout<<"Enter blanca = ";cin>>bla;b.setblanca(bla);
	/////////////////////////////////////////////////////////
	cout<<" max balnca is account : ";
	a.account(b).print();
}
