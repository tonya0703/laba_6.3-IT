#include <iostream> 
#include <iomanip> 
#include <time.h>
using namespace std;
void Print(int* mas, const int n);
void Create(int* mas, const int n);

void Suma(int* mas, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
	{
		if (mas[i] % 2 != 0)
			S += mas[i];
	}
}

template <typename T>
T Suma(T* mas, const int n)
{
	T S = 0;
	for (int i = 0; i < n; i++)
		if (mas[i] % 2 != 0)
			S += mas[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int a = 10;
	int A[a];
	Create(A, a);
	Print(A, a);
	cout << "Suma = " << Suma<int>(A, a) << endl;
	return 0;
}
void Create(int* mas, const int n)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 85 + 5;
	}
}
template <typename A>
void Create(A* mas, const int n)
{
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 85 + 5;
	}
}
void Print(int* mas, const int n)
{
	cout << "A{";
	for (int i = 0; i < n; i++)
		cout << " " << mas[i] << ",";
	cout << "}";
	cout << endl;
}
template <typename B>
void Print(B* mas, const int n)
{
	cout << "A{";
	for (int i = 0; i < n; i++)
		cout << " " << mas[i] << ",";
	cout << "}";
	cout << endl;
}