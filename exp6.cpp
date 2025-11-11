//multilevel inheritance
#include <iostream>
#include <stdio.h>   
using namespace std;

class Student
{

    int roll;
    char name[50];   

public:
    void getdata()
    {
        cout << "\n----------------------------------";
        cout << "\n Enter roll no.: ";
        cin >> roll;
        cin.ignore(); // clear newline

        cout << " Enter student's name: ";
        cin.getline(name, 50); // read full line for name
    }

    void putdata() const
    {
        cout << "\n---------------------------";
        cout << "\n Roll no.: " << roll;
        cout << "\n Student's Name: " << name << endl;
    }
};

class StudentExam : public Student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void accept_data()
    {
        getdata();
        cout << " Enter marks for 6 subjects (separated by spaces): ";
        cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5 >> sub6;
    }

    void display_marks() const
    {
        cout << " Marks of subjects: "
             << sub1 << ", " << sub2 << ", " << sub3
             << ", " << sub4 << ", " << sub5 << ", " << sub6;
    }
};

class StudentResult : public StudentExam
{
public:
    void display_final_result() const
    {
        putdata();
        display_marks();

        float per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0f;
        cout << "\n\n Total Percentage: " << per << " %";
        cout << "\n-----------------------------\n";
    }
};

int main()
{
    int cnt;
    cout << "Enter no. of students you want (max 50): ";
    cin >> cnt;

    if (cnt > 50) cnt = 50;  // prevent overflow

    StudentResult students[50];  // fixed-size array

    for (int i = 0; i < cnt; i++)
    {
        cout << "\n=== Entering details for Student " << (i + 1) << " ===\n";
        students[i].accept_data();
    }

    cout << "\n\n======= Displaying All Student Results =======\n";
    for (int i = 0; i < cnt; i++)
    {
        students[i].display_final_result();
    }

    return 0;
}

