#include<iostream>
using namespace std;


template <typename T>
void Swap(T* a, T* b)
{
	T temp = *a;

	*a = *b;
	*b = temp;
}

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;

	a = b;
	b = temp;
}


int main()
{
	int var1 = 0, var2 = 1;

	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;

	cout << "Swap" << endl;
	Swap(var1, var2);

	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;

	cout << "Swap" << endl;
	Swap(&var1, &var2);

	cout << "var1 = " << var1 << endl;
	cout << "var2 = " << var2 << endl;
}