#include<iostream>
using namespace std;

typedef struct shape
{
	int length;
	int width;
}SHAPE;


int main()
{
	SHAPE s1, s2;
	s1.length = 10;
	s1.width = 20;
	s2.length = 30;
	s2.width = 40;
	cout << "s1: " << s1.length << "\t" << s1.width << endl;
	cout << "s2: " << s2.length << "\t" << s2.width << endl;
	SHAPE s3;
	s3.length = s1.length + s2.length;
	s3.width = s1.width + s2.width;
	cout << "s3: " << s3.length << "\t" << s3.width << endl;
	SHAPE s4 = s3;	//Not according to Standard ANSI C, may not work for old compilers, better to copy elements manually
	cout << "s4: " << s4.length << "\t" << s4.width << endl;

	return 0;

}