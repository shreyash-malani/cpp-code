#include<iostream>
using namespace std;

class Result
{
	int no;
	double avg;
	public:
		Result()
		{
		 no=0;
		 avg=0.0;
	    }
	    Result(int a,double b)
	    {
	    	no=a;
	    	avg=b;
		}
	    Result(Result & a)
	    {
	    	no=a.no;
	    	avg=a.avg;
		}
		~Result(){}
		void display()
		{
			cout<<"\nRoll No:"<<no<<"\nAvg:"<<avg;
			
		}
};

class Marks{
	int no;
	int p,c,m;
	public:
		Marks(){
			no=p=c=m=0;
		}
		~Marks(){}
		
		void setData()
		{
			cout<<"\nRoll No:";
			cin>>no;
			cout<<"\nMarks:";
			cin>>p>>c>>m;
		}
		void display()
		{
			cout<<"\nRoll No:"<<no;
			cout<<"\nMarks"<<p<<"\t"<<c<<"\t"<<m;
		 } 
		 
		operator int()
		{
			return no;
		}
		operator double()
		{
		 	return double(p+c+m)/3;
		}
		operator Result()
		{
		 	int a=no;
		 	double b=(p+c+m)/3.0;
		 	Result k(a,b);
		 	return k;
		} 
};

int main()
{
	Marks m;
	m.setData();
	m.display();
	Result r;
	r=m;
	r.display();
}