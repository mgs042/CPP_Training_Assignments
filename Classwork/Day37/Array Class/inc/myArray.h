#pragma once

template<typename T, int S>
class myArray
{
	T* ptr;
public:
	myArray()
	{
		
	}
	T front();
	T back();
	int size();
	bool empty();
	void fill();
};