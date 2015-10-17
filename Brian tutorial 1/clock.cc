#include<iostream>
#include<string>
using namespace std;

class Time
{
	public:

		void setTime(int sethours, int setmins, int setsecs)
		{

					if(setsecs>59)
				{
					secs=setsecs-60;
					mins=setmins+1;
				}
			else
				{
					secs=setsecs;
					
			}	
				if(setmins>59)
			{
				mins = setmins-60;
				hours = sethours+1;
			}
		else
			{
				mins = setmins;
			}				
			

		}
				


		void displayTime(void)
		{
			cout<<"12 hour clock system : ";
			cout<<hours<<":"<<mins<<":"<<secs<<ampm<<"\n";
		}

	protected:	      	int hours;
			 	int mins;
				int secs;
				char ampm[3];
};

class Clock: public Time{
	public:
		void setAMPM(void) //function that determines  AM or PM
{
			if(hours>=12)
{
				if(hours>12)
					hours=hours-12;
				string str (" PM"); //function displays time in PM
				str.copy(ampm,3,0);
			}else
{
				string str (" AM"); //function displays time in AM
				str.copy(ampm,3,0);
			}
		}
};
class clocks
 {

public:
	void settime(int sethour,int setmin,int setsecs)
{

			 if(setsecs>59)
	{
		secs=setsecs-60;
		min=setmin+1;
	}
		else
	{
		secs=setsecs;
	}

			if(setmin>59)
		{
			min=setmin-60;
	    		hour=sethour+1;
		}
	else
		{
			min=setmin;
		}
	
	
 				if(sethour>23)
			{
				hour=sethour-24;
			}
		else
			{

			hour=sethour;
		}
}
 	void displaytime(void)
{
	cout<<"24 hour clock system : ";
	cout<<hour<<":"<<min<<":"<<secs<<endl;
}
private:
	int hour;
	int min;
	int secs;

};


int main(){
	Clock clk;
	clocks clks;
	clks.settime(24,79,70);
	clks.displaytime();
	clk.setTime(13,70,70);
	clk.setAMPM();
	clk.displayTime();
	return 0;
}
