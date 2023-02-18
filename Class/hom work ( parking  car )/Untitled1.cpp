#include <fstream>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std ; 
ofstream outfile("record.txt");
class Time 
{
  int hours;
  int minutes;
  public:
  Time (int h = 0, int m = 0) :hours(h), minutes(m) { }
   int getHours( ) const { return hours; }  
   int getMinutes( ) const { return minutes; }  
   bool operator>(const Time& t) const  
   {
    return ((hours > t.hours) || (hours == t.hours && minutes > t.minutes));
   }
  Time operator-(const Time & t) const
  {
     int h, m;
     if (*this > t)  
	 {
	   h = hours - t.hours:
	   m = minutes - t.minutes; 
	   if (m < 0)   
	    {
		     --h;
	         m += 60;
	    }
     } 
  else
  {
      cerr << "Cannot subtract.\n"; 
  }
     return Time(h, m);  
   }
}; 
ostream& operator<< (ostream& out, const Time& t) 
{
     out << t.getHours( ) << ":";
     if (t.getMinutes( ) < 10)
	 {
	    out << "0"; 
	 }
     out << t.getMinutes( );
     return out;
}  
class ParkingLot;
class Car
{
    string   plateNumber;  
	Time     enteringTime;  
	ParkingLot * parkingAt; 
	public:   
	Car (string   s) : plateNumber(s), parkingAt(NULL)   {   }  
	bool entering(ParkingLot& aLot, Time t)  
	{
		bool yes = false;
	    return yes;
    }
    Time getEnteringTime( )
	{
		/////////////////////////////////////////////////////////////////
	}
	void leaving( )
	{
		////////////////////////////////////////////////////////////////
	}  
	~Car( ) {}  
	 friend ostream& operator<<(ostream& out, const Car& aCar); 
};  
ostream& operator<<(ostream& out, const Car& aCar)
{
   out << "Car " << aCar.plateNumber;   
   return out;  
} 
class ParkingLot
{  
    int lotNumber;  
	double hourlyRate; 
    double maximum;  
	double dailyRevenue;  
	int capacity;  
	Car ** cars;  
	int numberOfCars;  
	int search(const Car& aCar); 
	public:
	bool isFull( ) 
	{
	   //////////////////////////////////////////////////////////////// 
    }
	ParkingLot(int n, double rate, double max, int cap);
    void carEntering(Car & aCar, const Time & t);  
    void carLeaving(Car & aCar, const Time & t);  
	void showInformation(ostream& out);  
	double getDailyRevenue( ) 
	{
	    /////////////////////////////////////////////////////////////  
	}
	void showCars(ostream& out);  
	~ParkingLot( ) { delete [ ] cars; }   
	friend ostream& operator<< (ostream& out, const ParkingLot & aLot); 
};   
ostream& operator<< (ostream& out, const ParkingLot & aLot) 
{
     out << "Lot " << aLot.lotNumber;   
	 return out; 
}
 ParkingLot::ParkingLot(int n, double rate, double max, int cap) :   
 lotNumber(n), hourlyRate(rate), maximum(max),
 dailyRevenue(0), capacity(cap),   numberOfCars(0), cars(new Car*[cap]) { }    
  int ParkingLot::search(const Car& aCar) 
  {  
     int i;
	 ////////////////////////////////////////////////   
	return i; 
}
void ParkingLot::carEntering(Car & aCar, const Time & t) 
{
     /////////////////////////////////////////////////
}
void ParkingLot::carLeaving(Car & aCar, const Time & t) 
{   
         int index = search(aCar);  
		 //////////////////////////////////////
}  
void ParkingLot::showInformation(ostream& out) 
{  
      out << "Parking lot " << lotNumber << "\n";  
	  out << "Hourly rate:  " << hourlyRate << " D  " << ",\n";  
	  out << "Maximum charge: " << maximum << " D  " << ",\n"; 
      out << "Capacity: " << capacity << ".\n"; 
}
void ParkingLot::showCars(ostream& out) 
{
       out << "Cars in " << * this << " are :\n";  
	   for (int i = 0; i < numberOfCars; ++i)  
	   {
	         out << * cars[i] << "   "; 
	   }  
	   out << endl; 
}
 int main( ) 
 {  
     Car car1("ABC 101"),car2("ABC 102"),car3("ABC 103"), car4("ABC 104"),car5("ABC 105"),car6("ABC 106"),car7("ABC 107"),car8("ABC 108"),car9("ABC 109"),car10("ABC 110");
	 ParkingLot  p1(1, 3.0, 10.0, 5), p2(2, 4.0, 15.0, 3), p3(3, 3.5, 12.0, 10);
	   outfile << setiosflags(ios::fixed|ios::showpoint)<< setprecision(2);
	   p1.showInformation(outfile);  
	   p2.showInformation(outfile);  
	   p3.showInformation(outfile);
	   
       p1.carEntering(car1, Time(5,50));   
	   p2.carEntering(car2, Time(6,15));   
       p1.carEntering(car3, Time(6,30)):
		
	   p3.carEntering(car1, Time(6,50));   
	   p3.carEntering(car4, Time(6,50));   
	   p2.carEntering(car5, Time(6,50));   
	   p2.carEntering(car6, Time(7,15));   
	   p3.carEntering(car7, Time(7,20));  
	   
	   p2.carEntering(car8, Time(7,25));   
	   p3.carEntering(car8, Time(7,30));   
	   p1.carEntering(car9, Time(8,0));   
	   p3.carEntering(car10, Time(8,15));   
	   
	   p1.carLeaving(car3, Time(9, 0));  
	   p2.carLeaving(car5, Time(10, 15));  
	   p3.carLeaving(car4, Time(11, 50));  
	   p1.carLeaving(car9, Time(12, 0)); 
	   
	   p1.carLeaving(car7, Time(12, 10));    
	   p3.carEntering(car3, Time(12, 45));  
       p3.carLeaving(car7, Time (13, 50));  
	   p3.carLeaving(car10, Time(15, 30));
	   
	    p3.carLeaving(car3, Time(4, 55));   
		p3.carLeaving(car3, Time(14, 55));  
		p2.carLeaving(car2, Time(16, 0));  
		p1.carLeaving(car1, Time(17, 10));  
		p2.carLeaving(car6, Time(18, 5));  
		p3.carLeaving(car8, Time(19, 40));
		   
		outfile << "The total daily revenue of the parking lots:\n";  
		outfile << p1 << ":  " << p1.getDailyRevenue( ) << " D  " << endl;  
		outfile << p2 << ":  " << p2.getDailyRevenue( ) << " D  " << endl;  
		outfile << p3 << ":  " << p3.getDailyRevenue( )<< " D  "  << endl;   
		return 0; 
} 
