#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
class Emp
{
public:
    //Emp(int id, std::string name, string d) : id(id), name(name), dept(d) {}
    void disp() const {
        cout << "ID: " << id << "\tName: " << name << "\tDept: " << dept << endl;
    }
    void setValues() {
        cout << "Enter Details, " << endl;
        cout << "ID: ";cin >> this->id;
        cout << "Name: ";cin >> this->name;
        cout << "Dept: ";cin >> this->dept;
    }
    string getName() const { return this->name; }
    int getId() const { return this->id; }
    string getDept() { return this->dept; }

private:
    int id;
    string name;
    string dept;

};


int main()
{
    multimap<string, Emp> deptMap;
    Emp e;
    for (int i = 0; i < 5; ++i)
    {
        e.setValues();
        deptMap.insert({ e.getDept(),e });
    }
    for (auto i : deptMap)
    {
        cout << i.first << "---";
        i.second.disp();
    }

    return 0;
}