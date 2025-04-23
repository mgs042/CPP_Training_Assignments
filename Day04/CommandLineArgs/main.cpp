#include <iostream>
#include "stringHandling.h"
using namespace std;

int main(int argc, char *argv[])
{
	//stringHandling();
	//enumHandling();

	cout << "Argument Count: "<< argc << endl;
	cout << "argv[0]: " << argv[0] <<endl;
	cout << "argv[1]: " << argv[1] << endl;
	cout << "argv[2]: " << argv[2] << endl;
	cout << "argv[3]: " << argv[3] << endl;

	cout << "result = " << atoi(argv[1])+atoi(argv[2]);
	return 0;
}