#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person
{
protected:
    string name;
    int age;
public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person
{
    int publications;
    int cur_id;
public:
    void getdata()
    {
        static int id = 1;
        cin >> name;
        cin >> age;
        cin >> publications;
        cur_id = id++;
    }

    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

class Student : public Person
{
    int marks[6];
    int cur_id;
public:
    void getdata()
    {
        static int id = 1;
        cin >> name;
        cin >> age;
        for (int i = 0; i < 6; ++i)
            cin >> marks[i];

        cur_id = id++;
    }

    void putdata()
    {
        int sum = 0;
        for (int i = 0; i < 6; ++i)
            sum += marks[i];
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};



int main() {

    int n, val;
    Person* per[5];

    for (int i = 0;i < 5;i++) {

        cin >> val;
        if (val == 1) {
            per[i] = new Professor;

        }
        else per[i] = new Student;

        per[i]->getdata(); 

    }

    for (int i = 0;i < n;i++)
        per[i]->putdata();

    return 0;

}
