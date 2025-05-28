#include<Vehicle.h>
#include<Car.h>

int main()
{
	Vehicle v;
	Car c("Toyota", "Camry", 4);
	v.start();
	v.stop();
	c.start();
	c.honk();
	c.stop();
	return 0;
}