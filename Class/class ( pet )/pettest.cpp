#include"pet.cpp"
int main()
{
	pet yourpet;
	pet jamalpet("jamal ali");
	pet mypet(4);
	pet naserpet(4.0);
	pet fathipet("ali salem",5,5.5);
	cout<<"yourpet = ";yourpet.printme();
	cout<<"jamalpet = ";jamalpet.printme();
	cout<<"mypet = ";mypet.print,e;
	cout<<"naserpet = ";naserpet.printme();
	cout<<"fathipet = ";fathipet.printme();
	return 0;
}
