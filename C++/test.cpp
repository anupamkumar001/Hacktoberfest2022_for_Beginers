#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Student
{
public:
    string name;
    int ID;
    int intake;
    int section;
    string mail;
    float credit;

    void edit_name()
    {
       getline(cin,name);
    }

    void set_ID(int new_ID)
    {
        ID = new_ID;
    }

    void input_value()
    {
        cout << "Enter Name: ";
        getline(cin,name);
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter intake: ";
        cin >> intake;
        cout << "Enter section: ";
        cin >> section;
        cout << "Enter credit: ";
        cin >> credit;
        cout << "Enter mail: ";
        cin >> mail;
    }

    void display()
    {
        cout << endl;
        cout << name << endl;
        cout << ID << endl;
        cout << intake << endl;
        cout << section << endl;
        cout << credit << endl;
        cout << mail << endl;
        cout << endl;
    }
};


int main()
{
    Student stu[41];

    for(int i=0; i<3; i++)
    {
        cout << "Input Student for " << i+1 << endl;
        stu[i].input_value();

    }

    for(int i=0; i<3; i++)
    {

        cout << "display Student for " << i+1 << endl;
        stu[i].display();
    }


}

