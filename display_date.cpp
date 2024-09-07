#include <iostream>
using namespace std;


class date{
    int d;
    int m;
    int y;

    public:
    date()
    {
        cout<<"Constructor called"<<endl;
    }
};
int main(){
    date();
    return 0;
}
 
