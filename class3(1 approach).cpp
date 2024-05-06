#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int rno;
	char nm[15];
	double mrk;
	public:
		void setData(int a,char *b,double c)
		{
			rno=a;
			strcpy(nm,b);
			mrk=c;
		}
		void setData(int a)
		{
			rno=a;
			cout<<"\n Name:";
			cin>>nm;
			cout<<"\n Marks:";
			cin>>mrk;
		}
		void setData()
		{
			cout<<"\n roll No:";
			int a;
			cin>>a;
			setData(a);
		}
		void display()
		{
			cout<<"\n Roll No:"<<rno;
			cout<<"\n Name:"<<nm;
			cout<<"\n Mark:"<<mrk;
		}
		int getNo()
		{
			return rno;
		}
		int getMarks()
		{
			return mrk;
		}
};
int main()
{
	student a[5];
	int i=0;
	while(i<5)
	{
		a[i].setData(i+1);
		i++;
	}
	for(i=0;i<5;i++)
		a[i].display();
	return 0;
}

