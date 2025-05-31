#include<iostream>
using namespace std;

int main()
{
	string error = "Gouri";
	string divByZero = "Divided By Zero Error occured";
	int n1 = 10, n2 = 2;
	char* ptr = nullptr;
	try {
		/*if (n2 == 0)
			throw divByZero;
		else
		{
			cout << "Quotient: " << n1 / n2;
		}*/
		/*if (ptr == nullptr)
		{
			throw "Memory Allocation failed";
		}*/
		
	}
	catch (int e) {
		cout << "Caught an exception " << e << endl;
	}
	catch (const char * e) {
		cout << "Caught: " << e << endl;
	}
	catch (exception& e)
	{
		cout << "Caught an exception: " << e.what() << endl;
	}
	cout << "Done" << endl;
	cout << ptr;
}