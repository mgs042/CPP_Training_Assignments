#include<cstdio>

int main()
{
	char a = 'A',x;
	int b = 10;
	float c = 15.5;
	double d = 101.24354;
	char s[20];
	printf("\n%c\n%d\n%f\n%lf\n%s\n", a, b, c, d, "GouriSankar");
	scanf("%c%3d%f%lf%s", &a, &b, &c, &d, s);
	//fflush(stdin);
	scanf(" "); //clears input buffer
	scanf("%c", &x);
	printf("\n%c\n%d\n%f\n%lf\n%s\n%c\n", a, b, c, d, s, x);


}