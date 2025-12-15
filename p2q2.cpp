#include<iostream>
using namespace std;
class Student
{
private:
int roll;
string name,major;
public:

void getData()
{
cout<<"Enter Roll Number\n";
cin>>roll;
cout<<"Enter Name";
cin>>name;
cout<<"Enter Major";
cin>>major;
}
void displayData()
{
cout<<"Roll Number:- "<<roll<<"\n";
cout<<"Name:- "<<name<<"\n";
cout<<"Major:-"<<major<<"\n";
}
};

void main()
{
Student s;
s.getData();
s.displayData();
}