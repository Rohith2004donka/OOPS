#include<iostream>
using namespace std;
class accessspe{
    private: 
        int privar;
    protected:
        int provar;
    public:
        int pubvar;
        void setVar(int priValue,int proValue, int pubValue)
        {
            privar = priValue;
            provar = proValue;
            pubvar = pubValue; 
            cout<<"values are seted successfully"<<endl;
        }
        void getVar()
        {
            cout<<"privar:"<<privar<<endl;
            cout<<"provar:"<<provar<<endl;
            cout<<"pubvar:"<<pubvar<<endl;
        }
};
int main()
{
    int a,b,c;
    accessspe obj;
    cout<<"Enter the private variable:";
    cin>>a;
    cout<<"Enter the protected variable:";
    cin>>b;
    cout<<"Enter the public variable:";
    cin>>c;
    obj.setVar(a,b,c);
    obj.getVar();
    return 0;
}
