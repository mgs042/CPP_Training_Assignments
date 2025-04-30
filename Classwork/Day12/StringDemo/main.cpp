#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	/*char nameEmp[20];
	cout << "Enter the name of the employee: ";
	cin >> nameEmp;
	cout << nameEmp << endl;
	cout << strlen(nameEmp);*/

	/*char name[20];
	cout << "enter the name: ";
	scanf("%[^\n]s", name);
	gets_s(name);
	printf("%s", name);*/

	/*char str[20];
	strcat(strcat(strcpy(str, "M"), " Gouri"), " Sankar");
	printf("%s", str);*/

	char str1[20]="M Gouri Sankar";
	strcpy(str1, "Hello");
	printf("%s\n", str1);
	for (int i = 0; i < 20; ++i)
	{
		cout << str1[i] << endl;
	}


	return 0;
}