
//#include <iostream>
//#include <string>
//#include <time.h>
//using namespace std;
//// відображення масиву
//void ShowArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
///* ініціалізуємо масив усередині функції випадковими
//числами на відміну від звичайних змінних, зміни
//елементів масиву, що відбуваються всередині функції,
//при виході з функції зберігаються
//*/
//void InitArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 100;
//	}
//	cout << endl;
//}
//int main()
//{
//	srand(time(NULL));
//	const int aSize = 10;
//	int iArr[aSize];
//	InitArray(iArr, aSize);
//	ShowArray(iArr, aSize);
//	return 0;
//}


//long max_element(int n, int array[])
//// Функція для масивів з елементами типу int.
//{
//	int value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (int) : "; return long(value);
//}
//long max_element(int n, long array[])
//// Функція для масивів з елементами типу long.
//{
//	long value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (long) :";
//	return value;
//}
//double max_element(int n, float array[])
//// Функція для масивів з елементами типу float.
//{
//	float value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (float) : ";
//	return double(value);
//}
//double max_element(int n, double array[])
//// Функція для масивів з елементами типу double.
//{
//	double value = array[0];
//	for (int i = 1; i < n; i++)
//		value = value > array[i] ? value : array[i];
//	cout << "\nFor (double) : ";
//	return value;
//}
//int main()
//{
//	int x[] = { 10, 20, 30, 40, 50, 60 };
//	long f[] = { 12L, 44L, 5L, 22L, 37L, 30L };
//	float y[] = { 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };
//	double z[] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06 };
//	cout << "max_elem(6,x) = " << max_element(6, x);
//	cout << "max_elem(6,f) = " << max_element(6, f);
//	cout << "max_elem(6,y) = " << max_element(6, y);
//	cout << "max elem(6,z) = " << max_element(6, z);
//	return 0;
//}
//template <typename T>
//T Max(T A, T B)
//{
//	return A > B ? A : B;
//}
//int main(){
//	cout << "Max from 10 and 5 = " << Max(10, 5) << "\n";
//cout << "Max from 'A' and 'B' = " << Max('A', 'B') << "\n";
//cout << "Max from 3.5 and 5.1 = " << Max(3.5, 5.1) << "\n";
//}
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//using namespace std;
//
//template <class T>
//void setMin(T a[], long size) {
//	T min = a[0];
//	for (int i = 1; i < size; i++)
//		if (a[i] < min)
//			min = a[i];
//	a[0] = min;
//}
//
//template <class T>
//void insertSortGuarded(T a[], long size) {
//	T x;
//	long i, j;
//	// зберегти старий перший елемент
//	T backup = a[0];
//	// замінити на мінімальний
//	setMin(a, size);
//	// вісортувати масив
//	for (i = 1; i < size; i++) {
//		x = a[i];
//		for (j = i - 1; j >= 0 && a[j] > x; j--)
//			a[j + 1] = a[j];
//		a[j + 1] = x;
//	}
//	// вставити backup на правильне місце
//	for (j = 1; j < size && a[j] < backup; j++)
//		a[j - 1] = a[j];
//	// вставка елемента
//	a[j - 1] = backup;
//}
//
//int main() {
//	srand(time(NULL));
//	const long SIZE = 10;
//	int ar[SIZE];
//	// до сортування
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = rand() % 100;
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	insertSortGuarded(ar, SIZE);
//	// після сортування
//	for (int i = 0; i < SIZE; i++) {
//		cout << ar[i] << "\t";
//	}
//	cout << "\n\n";
//	return 0;
//}
#include <iostream>
#include <ctime>
#include"ArrayTemplate.h"

using namespace std;
template <typename T>
void smoothArray(T arr[], const int size) {
	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = (arr[i] + arr[i + 1]) / 2;
	}
}

template <typename T>
double averageMoreM(T arr[], const int size, T m) {
	T buf = 0;
	int conter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > m) {
			conter++;
			buf += arr[i];
		}
	}
	return buf / conter;
}
//(a* x + b = 0) і квадратного(a* x2 + b * x + c = 0)


template <typename A, typename B>
double* calculateSquareX(A a, B b) {
	double* result = new double[2];

	if (a == 0) {
		cerr << "The coefficient 'a' must not be zero." << endl;
		result[0] = 0;
		result[1] = 0;
		return result;
	}
	result[0] = -b / a;
	result[1] = -b / a;
	return result;

}

template <typename A, typename B, typename C>
double* calculateSquareX(A a, B b, C c) {
	double discriminant = b * b - 4 * a * c;
	double* result = new double[2];

	if (discriminant < 0) {
		cerr << "No real roots found." << endl;
		result[0] = 0;
		result[1] = 0;
		return result;
	}

	if (discriminant == 0) {
		double root = -b / (2 * a);
		result[0] = root;
		result[1] = root;
		return result;
	}

	double sqrtDiscriminant = sqrt(discriminant);
	result[0] = (-b + sqrtDiscriminant) / (2 * a);
	result[1] = (-b - sqrtDiscriminant) / (2 * a);

	return result;
}





int main() {

	//const int size = 5;
	//int a[size]{ 1,22,44,555,677 };
	//int m = 6;
	//printArray(a, size);

	//for (int i = 0; i < 5; i++)
	//{
	//	smoothArray(a, size);
	//	printArray(a, size);

	//}
	//cout << averageMoreM(a, size, m) << endl;

	calculateSquareX(4.4f, 5.5f);
	double a = 2.0, b = -3.0;
	double* roots1 = calculateSquareX(a, b);
	cout << "Root of the linear equation " << a << "x + " << b << " = 0 is: " << roots1[0] << endl;

	// quadraticEquationRoots
	double A = 1.0, B = -3.0, C = 2.0;
	double* roots = calculateSquareX(A, B, C);
	cout << "Roots of the quadratic equation " << A << "x^2 + " << B << "x + " << C << " = 0 are: " << roots[0] << ", " << roots[1] << endl;

}
