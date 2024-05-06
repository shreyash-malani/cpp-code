#include<iostream>
using namespace std;
class Result
{
    int rno;
    int mrk[5];
    public:
        void setData();
        void setData(int);
        void setMarks();
        void display();
        int total();
        int avg()
        {
            return total()/5;
        }
};
void Result::setMarks()
{
    cout<<"\n Marks\n:";
    for(int i=0;i<5;i++)
    {
        cin>>mrk[i];
    }
}
int Result::total()
{
    int tot=mrk[0],i=1;
    while(i<5)
        tot+=mrk[i++];
    return tot;
}
void Result::display()
{
    cout<<"\n Roll no"<<rno;
    cout<<"\n Marks"<<mrk;
    for(int i=0;i<5;i++)
        cout<<"  "<<mrk[i];
    cout<<"\n Total:"<<total();
    cout<<"\n Avg:"<<avg();    
}
void Result::setData()
{
    cout<<"\n Roll no:";
    cin>>rno;
    setMarks();
}
void Result::setData(int n)
{
    rno=n;
    setMarks();
}
int main()
{
    Result k;
    k.setData(18);
    k.display();
    Result p;
    p.setData();
    p.display();
    return 0;
}

