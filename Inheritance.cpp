#include<iostream>
using namespace std;
class Product
{
		int p_id;
		char p_nm[15];
	public:
	Product()
	{
		p_id=0;
		p_nm[0]='\0';
	}
	void setData()
	{
		cout<<"\n Enter Id:";
		cin>>p_id;
		cout<<"\n Enter Name:";
		cin>>p_nm;
	}
	void display()
	{
		cout<<"\n Entered Id:"<<p_id;
		cout<<"\n Entered name:"<<p_nm;		
	}
};
class Coustomer:public Product
{
		int price1,price2;
	public:
		Coustomer():Product()
		{
			price1=price2=0;
		}
		void setPrice()
		{
			setData();
			cout<<"\nPrice1:";
			cin>>price1;
			cout<<"\nPrice2:";
			cin>>price2;
		}
		void displayPrice()
		{
			display();
			cout<<"\n entered price1:"<<price1<<"\n entered price 2:"<<price2;
			tot();
		}
		int tot()
		{
			int price=price1+price2;
			cout<<"\n Total Price:"<<price;
		}
};
int main()
{
	Coustomer c;
	c.setPrice();
	c.displayPrice();
}
