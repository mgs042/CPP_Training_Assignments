#include<iostream>
using namespace std;

class Test
{
	int empId;
	string empName;
	string empAddress;
public:
	Test()
	{
		this->empId = 0;
		this->empName = "";
		this->empAddress = "";
	}
	Test(int empId, string empName, string empAddress)
	{
		this->empId = empId;
		this->empName = empName;
		this->empAddress = empAddress;
	}
	void setId(int empId)
	{
		this->empId = empId;
	}
	void setName(string empName)
	{
		this->empName = empName;
	}
	void setAddress(string empAddress)
	{
		this->empAddress = empAddress;
	}
	int getId()
	{
		return this->empId;
	}
	string getName()
	{
		return this->empName;
	}
	string getAddress()
	{
		return this->empAddress;
	}
};

int main()
{
	/*Test t;
	t.setId(101);
	cout << t.getId() << endl;*/
	Test t1(200,"Hello","House");
	cout << t1.getId() << endl;
	cout << t1.getName() << endl;
	cout << t1.getAddress() << endl;
	return 0;
}