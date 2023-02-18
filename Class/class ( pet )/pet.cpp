#include"pet.h"
pet::pet():name("not name yet"),age(0),weight(0){}
pet::pet(string initialname):name("initialname"),age(0),weight(0){}
pet::pet(int initialage):name("not name yet"),age(initialage),weight(0){}
pet::pet(double initialweight):name("not name yet),age(0),weight(initialweight){}
pet::pet(string initialname,int initialage,double initialweight):name("initialname"),age(intialage),weight(initialweight){}
string pet::getname(){return name;}
int pet::getage(){return age;}
double pet::getweight(){return weight;}
void pet::setname(string newname){name(newname);}
void pet::setage(int newage){age(newage);}
void pet::setweight(double newweight){weight(newweight);}
void pet::printme(){cout<<"name : "<<name<<"age = "<<age<<"weight = "<<weight<<endl;}

