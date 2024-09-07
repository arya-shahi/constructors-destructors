#include<iostream>
using namespace std;

class date
{
    int d;
    int m;
    int y;


    public:
    date()
    {
        cout<<"Enter date: ";
        cin>>d;
        cout<<"Enter month: ";
        cin>>m;
        cout<<"Enter  Year: ";
        cin>>y;
        cout<<"Today's Date is: "<<endl;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date today;
}

/*
Enter date: 7
Enter month: 3
Enter  Year: 2024
Today's Date is: 
7/3/2024
    */
