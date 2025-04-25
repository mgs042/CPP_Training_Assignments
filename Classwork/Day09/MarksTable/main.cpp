#include<cstdio>

int main()
{
	float a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4, e1, e2, e3, e4;
	char name1[20], name2[20], name3[20], name4[20], name5[20];
	float avg;
	int count = 0;
	printf("\nEnter the name of first student: ");
	scanf("%s", name1);
	printf("\nEnter the m1 of first student: ");
	scanf("%f", &a1);
	printf("\nEnter the m2 of first student: ");
	scanf("%f", &a2);
	printf("\nEnter the m3 of first student: ");
	scanf("%f", &a3);
	printf("\nEnter the m4 of first student: ");
	scanf("%f", &a4);

	printf("\n\nEnter the name of second student: ");
	scanf("%s", name2);
	printf("\nEnter the m1 of second student: ");
	scanf("%f", &b1);
	printf("\nEnter the m2 of second student: ");
	scanf("%f", &b2);
	printf("\nEnter the m3 of second student: ");
	scanf("%f", &b3);
	printf("\nEnter the m4 of second student: ");
	scanf("%f", &b4);

	printf("\n\nEnter the name of third student: ");
	scanf("%s", name3);
	printf("\nEnter the m1 of third student: ");
	scanf("%f", &c1);
	printf("\nEnter the m2 of third student: ");
	scanf("%f", &c2);
	printf("\nEnter the m3 of third student: ");
	scanf("%f", &c3);
	printf("\nEnter the m4 of third student: ");
	scanf("%f", &c4);

	printf("\n\nEnter the name of fourth student: ");
	scanf("%s", name4);
	printf("\nEnter the m1 of fourth student: ");
	scanf("%f", &d1);
	printf("\nEnter the m2 of fourth student: ");
	scanf("%f", &d2);
	printf("\nEnter the m3 of fourth student: ");
	scanf("%f", &d3);
	printf("\nEnter the m4 of fourth student: ");
	scanf("%f", &d4);

	printf("\n\nEnter the name of fifth student: ");
	scanf("%s", name5);
	printf("\nEnter the m1 of fifth student: ");
	scanf("%f", &e1);
	printf("\nEnter the m2 of fifth student: ");
	scanf("%f", &e2);
	printf("\nEnter the m3 of fifth student: ");
	scanf("%f", &e3);
	printf("\nEnter the m4 of fifth student: ");
	scanf("%f", &e4);

	printf("\n======================================================================================================");
	printf("\nslno\t|id\t|name\t|m1\t|m2\t|m3\t|m4\t|avg\t|");
	printf("\n======================================================================================================");
	count++;
	avg = (a1 + a2 + a3 + a4) / 4;
	printf("\n%d\t|%d\t|%s\t|%f\t|%f\t|%f\t|%f\t|%f%\t|", count, count, name1, a1, a2, a3, a4, avg);
	
	printf("\n======================================================================================================");
	count++;
	avg = (b1 + b2 + b3 + b4) / 4;
	printf("\n%d\t|%d\t|%s\t|%f\t|%f\t|%f\t|%f\t|%f%\t|", count, count, name1, b1, b2, b3, b4, avg);
	
	printf("\n======================================================================================================");
	count++;
	avg = (c1 + c2 + c3 + c4) / 4;
	printf("\n%d\t|%d\t|%s\t|%f\t|%f\t|%f\t|%f\t|%f%\t|", count, count, name1, c1, c2, c3, c4, avg);
	
	printf("\n======================================================================================================");
	count++;
	avg = (d1 + d2 + d3 + d4) / 4;
	printf("\n%d\t|%d\t|%s\t|%f\t|%f\t|%f\t|%f\t|%f%\t|", count, count, name1, d1, d2, d3, d4, avg);
	
	printf("\n======================================================================================================");
	count++;
	avg = (e1 + e2 + e3 + e4) / 4;
	printf("\n%d\t|%d\t|%s\t|%f\t|%f\t|%f\t|%f\t|%f%\t|", count, count, name1, e1, e2, e3, e4, avg);

	return 0;
}