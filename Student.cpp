#include<iostream>
#include<String.h>
using namespace std;

class Student
{
    public:
        String fullName;
        int rollNum;
        double semPerentage;
        string collegeName;
        int collegeCode;
        Student()
        {
            cout<<"Student class initialized!!\n";
        }
        ~Student(){}
};

int main()
{
    Student rohith;
    cout<<"Enter your name : ";
    getline(cin, rohith.fullName);
    cout<<"Enter your roll number : ";
    cin>>rohith.rollNum;
    cout<<"Enter your sem percentage : ";
    cin>>rohith.semPerentage;
    cout<<"Enter your college name : ";
    cin>>rohith.collegeName;
    cout<<"Enter your college code : ";
    cin>>rohith.collegeCode;
    cout<<"Name : "<<rohith.fullName<<endl;
    cout<<"RollNum : "<<rohith.rollNum<<endl;
    cout<<"SemPercentage : "<<rohith.semPerentage<<endl;
    cout<<"CollegeName : "<<rohith.collegeName<<endl;
    cout<<"CollegeCode : "<<rohith.collegeCode<<endl;
    return 0;
}
