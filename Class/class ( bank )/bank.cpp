#include"bank.h"
bank::bank():number(0),name("not name"),blanca(0){}
bank::bank(int new_number,string new_name,float new_blanca):number(new_number),name(new_name),blanca(new_blanca){}
int bank::getnumber(){return number;}
string bank::getname(){return name;}
float bank::getblanca(){return blanca;}
void bank::setname(string new_name){name=new_name;}
void bank::setnumber(int new_number){number=new_number;}
void bank::setblanca(float new_blanca){blanca=new_blanca;}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void bank::print(){cout<<"number = "<<number<<" name : "<<name<<" blanca = "<<blanca;}
void bank::update1(float x){blanca+=x;}
void bank::update2(float y){blanca-=y;}
bank bank::account(bank b)
{
    if(blanca > b.blanca)
    	return *this;
    else
        return b;
}


