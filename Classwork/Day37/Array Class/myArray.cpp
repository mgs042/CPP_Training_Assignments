#include<iostream>
using namespace std;

template<typename T, size_t S>
class myArray
{
	T* ptr;
	int index;
public:
	myArray()
	{
		ptr = new T[S];
		index = -1;
	}
	T operator[](int i)
	{
		return *(ptr + i);
	}
	void push_back(T val)
	{
		if (index == S - 1)
			return;
		index++;
		*(ptr + index) = val; //ptr[index]=val
	}
	T front()
	{
		return *ptr;
	}
	T back()
	{
		return *(ptr + index); //ptr[index]
	}
	int size()
	{
		return index+1;
	}
	bool empty()
	{
		return index == -1;
	}
	void fill(T val)
	{
		for (index = 0; index < S; ++index)
		{
			*(ptr + index) = val;
		}
		--index;
	}
	void display()
	{
		if (index == -1)
			return;
		for (int i = 0; i <= index; ++i)
			cout << *(ptr + i) << " ";
		cout << endl;
	}
};

int main()
{
	myArray<float, 5> arr;
	cout << (arr.empty() ? "Yes" : "No") << endl;
	arr.push_back(5.3);
	arr.push_back(12.5);
	arr.push_back(1);
	arr.push_back(32);
	arr.push_back(3);
	arr.push_back(2);
	cout << arr.front();
	cout << endl;
	cout << arr[3] << endl;
	cout << arr.back() << endl;
	arr.display();
	arr.fill(7.4234);
	cout << endl;
	arr.display();
	cout << (arr.empty() ? "Yes" : "No") << endl;
}