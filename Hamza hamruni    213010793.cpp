#include<iostream>
using namespace std;
class time
{
	int hour ;//0-23
	int minute;//0-59
	int second;//0-59
	public:
		time():hour(0),minute(0),second(0){}
		time(const time& t)
		{
			second=t.second;
			minute=t.minute;
			hour=t.hour;
		}
		time(int h,int m,int s):hour(h),minute(m),second(s)
		{
			
			setsecond(s);
			setminute(m);
			sethour(h);
		}
		void sethour(int h)
		{
		     hour=h;
		     if(h<0)
		     {
		        hour=0;
		     }
		    if(h>24)
		    {
		     	hour=h%24;
		     	
		    }
		    
		     
	    }
		void setminute(int m)
		{
		    minute=m;
		    if(m<0)
		       minute=0;
		    if(m>59)
		    {
		    	int hours=m/59,rem=m%59;
		    	minute=rem;
		    	hours+=hour;
		    	sethour(hours);
		    }
		    
		    
		}
		void setsecond(int s)
		{
			
		     second=s;
		     if(s>59)
		     {
		       int min=s/59,rem=s%59;
		       second=rem;
		       min+=minute;
		       setminute(min);
		    }
		}
		
		int gethour()const{return hour;}
		int getminute()const{return minute;}
		int getsecond()const{return second;}
		
		void printtime()
		{
			cout<<"HH:MM:SS "<<hour<<" : "<<minute<<" : "<<second<<endl;
		}
		void nextsecond(){setsecond(second+1);}
		void nextminute(){setminute(minute+1);}	
		void nexthour(){sethour(hour+1);}
		
		void previoussecond(){setsecond(second-1);}
		void previousminute(){setminute(minute-1);}
		void previoushuor(){sethour(hour-1);}
		
		const int difference(time t1,time t2)
		{
			int h,m,s;
			if(t2.hour>t1.hour)
			{
			  s=t1.second-t2.second;
			   m=t1.minute-t2.minute;
			   h=t1.hour-t2.hour;
			   
		    }
		    else
		    {
		   	   
			   
			   s=t2.second-t1.second;
			   m=t2.minute-t1.minute;
			   h=t2.hour-t1.hour;
		    }
			return (h,m,s);
		}
		
		
};
int main()
{
	cout<<"hamza hamruni     213010793"<<endl;
	time t1(10,70,10);
	t1.printtime();
	t1.setsecond(10);
	t1.printtime();
	t1.setminute(50);
	t1.printtime();
	t1.sethour(20);
	t1.printtime();
	
	
}
