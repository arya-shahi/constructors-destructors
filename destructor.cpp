#include <iostream>
using namespace std;
int count=0;

class student
{
    public:

    student()
    {
        count++;
        cout<<"No of objects created:"<<count<<endl;

    }
    ~ student(){
        count--;
        cout<<"No of objects destroyed:"<<count<<endl;
    }
};
int main()
{
    student aa,bb,cc;
    {student dd;
    }
    return 0;
}

