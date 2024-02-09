#include<iostream.h>
int main()
{
float num_1,num_2;
int operation;

cout<<"What Arithmetic Operation do you want to perform:\n";
cout<<"Press 1 for Addition \n" ;
cout<<"Press 2 for Subtraction\n";
cout<<"Press 3 for Multiplication\n";
cout<<"Press 4 for Division\n";
cout<<"press 5 for exit\n";
cin>>operation;

cout<<"Now Enter Two Numbers\n";
cin>>num_1>>num_2;

switch (operation)

    {
    case 1:
    cout<<"The Addition result is: "<<num_1+num_2;
    break;

    case 2:
    cout<<"The Subtraction result is: "<<num_1-num_2;
    break;

    case 3:
    cout<<"The Multiplication result is: "<<num_1*num_2;
    break;

    case 4:
    cout<<"The Division result is: "<<num_/num_2;
    break;
    case 5:
    cout<<"exiting......";
    break;
    default:
    cout<<"invalid choice!. please enter 0 to 5";
    }
return 0;
}