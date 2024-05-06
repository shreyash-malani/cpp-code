#include<iostream>
using namespace std;
class student
{
	int rno;
	char nm[15];
	public:
		void setData();
		void display();
		int getNo()
		{
			return rno;
		}
		char *getNm()
		{
			return nm;
		}
};
void student::setData()
{
	cout<<"\n Roll no:";
	cin>>rno;
	cout<<"\n Name:";
	cin>>nm;
}
void student::display()
{
	cout<<"\n Roll no:"<<rno;
	cout<<"\n Name:"<<nm;
}
int main()
{
	student K;
	K.setData();
	K.display();
	student t;
	t.setData();
	cout<<"\n Roll no:"<<t.getNo();
	cout<<"\n Name:"<<t.getNm();
	return 0;
}
