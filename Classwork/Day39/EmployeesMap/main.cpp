#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
class Emp
{
public:
    Emp() {}
    Emp(int id, std::string name, char g, int r) : id(id), name(name), gender(g), regNo(r) {}
    void disp() {
        cout << "{" << id << ", \"" << name <<"\", '"<<gender<<"', " <<regNo<<"}" << endl;
    }
private:
    int id;
    string name;
    char gender;
    int regNo;
};

int main()
{
    Emp e1(101, "abc", 'm', 100001);
    Emp e2(102, "asdc", 'f', 100331);
    Emp e3(103, "xzc", 'm', 12134);
    map<int, Emp> empMap;
    empMap[101] = e1;
    empMap[102] = e2;
    empMap[103] = e3;
    for (auto pair : empMap)
        pair.second.disp();
}