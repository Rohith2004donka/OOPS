#include<iostream>
using namespace std;
class Evenorodd{
    public:
    void check(int number){
        if(number%2==0){
            cout<<"\nentered number "<<number<<" is even.";
        }
        else{
            cout<<"\nentered number "<<number<<" is odd.";
        }
    }
};
int main()
{
    int num;
    Evenorodd obj1;
    cout<<"enter a number to check if it is odd or even:";
    cin>>num;
    obj1.check(num);
}

