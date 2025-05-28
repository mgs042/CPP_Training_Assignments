#include<Audi.h>
#include<Yamaha.h>

int main()
{
	Audi a(2000000, 5, 4, "petrol", "S-class");
	a.display();
	Yamaha y(50000, 4, 6, 2, "FZ");
	y.display();
}