//Input: The input to the program consists of the movie name, adult ticket price, child ticket
//price, number of adult tickets sold, number of child tickets sold, and percentage of the gross
//amount to be donated to the charity.

#include<iostream>
using namespace std;

class Movie{
	
	float aTickets,cTickets,aprice,cprice,total;
	static float AdultT;
	static float ChildT;
	static float TotalEarn;
	
	string MName;
	public:
		void setData()
		{
		 cout<<"\nenter movie name:";
		 cin>>MName;
		 cout<<"\nenter adult tickets rs.150 per:";
    		cin>>aTickets;
    		cout<<"\nenter child tickets rs.100 per:";
    		cin>>cTickets;
    		
			aprice=aTickets*150;
    		cprice=cTickets*100;
    		total=aprice+cprice;
    		
			AdultT=AdultT+aTickets;
    		ChildT=ChildT+cTickets;
    		TotalEarn=TotalEarn+total;
    		display();
		 
    	} 
    	void display()
		{
			cout<<"\nmovie name:"<<MName;
			cout<<"\nyour adult ticket is:"<<aprice;
			cout<<"\nyour child ticket is:"<<cprice;
			cout<<"\nyour total price:"<<total;	
		}
        static void displayAdultT()	
		{
			cout<<"\nAdult Tickets Sold :"<<AdultT<<endl;
		}	
		static void displayChildT()
		{
				cout<<"\nChild Tickets Sold :"<<ChildT<<endl;
		}
		static void displayTotalEarn()	
		{
				cout<<"\nTotal Earned Today :"<<TotalEarn<<endl;
		}
};

float Movie::TotalEarn = 0;
float Movie::AdultT = 0;
float Movie::ChildT = 0;
int main()
{
	Movie m1;
	m1.setData();
	
	
	Movie m2;
	m2.setData();
	
	Movie m3;
	m3.setData();

	Movie::displayAdultT();
	Movie::displayChildT();
	Movie::displayTotalEarn();
	
//	Movie m4;
//	m4.setData();
//	
//	Movie m5;
//	m5.setData();
	

    return 0;
}