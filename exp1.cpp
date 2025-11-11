#include<iostream>
using namespace std;
class Student
{
private:
char name[50];
int rollNo;
float marks;
public:
void inputDetails()
{
cout<<"Enter student's name:";
cin>>name;
cout<<"Enter roll number:";
cin>>rollNo;
cout<<"Enter marks:";
cin>>marks;
}
void displayDetails()
{
cout<<"Student's name is:"<<name<<endl;
cout<<"Roll number of the student is:"<<rollNo<<endl;
cout<<"Marks are:"<<marks<<endl;
}
};
int main()
{
Student StudentObj;
StudentObj.inputDetails();
cout<<"\n Student details: \n";
StudentObj.displayDetails();
return 0;
}


