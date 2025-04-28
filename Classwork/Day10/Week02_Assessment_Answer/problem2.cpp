#include<iostream>
using namespace std;

int count0 = 0;
int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;
int count6 = 0;
int count7 = 0;
int count8 = 0;
int count9 = 0;

void getDigit(long long int);
void countDigit(int);
void displayFreq();

int main()
{
	long long int num;
	cout << "Enter the input: ";
	cin >> num;
	cout << endl;
	getDigit(num);
	displayFreq();
}

void getDigit(long long int temp)
{
	int rem;
	for (;temp > 0;temp /= 10)
	{
		rem = temp % 10;
		countDigit(rem);
	}
}

void countDigit(int d)
{
	switch (d)
	{
		default:
			cout << "Not a number";
			exit(0);
			break;
		case 0:
			count0++;
			break;
		case 1:
			count1++;
			break;
		case 2:
			count2++;
			break;
		case 3:
			count3++;
			break;
		case 4:
			count4++;
			break;
		case 5:
			count5++;
			break;
		case 6:
			count6++;
			break;
		case 7:
			count7++;
			break;
		case 8:
			count8++;
			break;
		case 9:
			count9++;
			break;
	}
	return;
}

void displayFreq()
{
	cout << "Digit Frequencies"<<endl<<endl;
	cout << "0: " << count0 << endl;
	cout << "1: " << count1 << endl;
	cout << "2: " << count2 << endl;
	cout << "3: " << count3 << endl;
	cout << "4: " << count4 << endl;
	cout << "5: " << count5 << endl;
	cout << "6: " << count6 << endl;
	cout << "7: " << count7 << endl;
	cout << "8: " << count8 << endl;
	cout << "9: " << count9 << endl;

	cout << endl;

}