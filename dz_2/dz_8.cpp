//#include <iostream>
//using namespace std;
//int main() {

	/*int x = 10;
	int y = 5;
	int* px;
	int* py;
	px = &x
		;
	cout << px << " " << &x << endl;
	cout << *px << " " << x << endl;

	*px = 99;

	cout << *px << " " << x << endl << endl;

	py = &y;

	cout << py << " " << &y << endl;
	cout << *py << " " << y << endl;
	
	py = px;

	cout << *px << " " << *py << " " << x << endl << endl;
	*/
	
	/*const int size = 5;
	int arr[size] = { 33, 44, 7, 8, 9 };
	int* ptr = &arr[0];

	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;

	ptr = ptr + 1;

	cout << *ptr << endl;*/


	
	/*void ShowArray(int arr[], int size) {
		for (int i = 0; i < size; i++) {
			cout << *(arr + i) << " ";
		}
	}
	int GetAmount(int* ptr, int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += *(ptr + i);
		}
		return sum;
	}
	int main()
	{
		const int size = 5;
		int arr[size] = { 33, 44, 7, 8, 9 };
		ShowArray(arr, size);
		cout << endl << endl;
		cout << "Amount of array elements: " <<
			GetAmount(arr, size) << endl << endl;
		ShowArray(&arr[0], size);
	*/
	
	
//	return 0;
//
//}

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a = 2, b = 3, c = 4;
	float d = 8.5;

	int* ptr1 = &a, *ptr2 = &b; //prt2 не был указателем
	float* x, y = 3.5;
	void* ptr;

	cout << " Enter b = " << endl;
	cin >> *ptr2;//нужно обратиться именно к значению через указатель
	cout << "ptr1 = " << ptr1 << "\t*ptr1 = " << *ptr1 << "\tptr2 =  " << ptr1 << "\*tptr2 =  " << *ptr2 << endl;

	*(ptr2 + 1) = 15;
	cout << "a = " << a << "\tb = " << b << "\tc = " << c << endl;

	x = &y;
	cout << "x = " << x << "\t*x = " << *x << "\ty = " << y << endl;

	ptr = x;
	*(int*)ptr = 45;//нужно указать тип данных потому что войд 
	cout << "ptr = " << ptr << "\t*ptr =  " << *(int*)ptr << "\tx =  " << x << "\t*x = " << *x << "\ty =  " << y << endl;//нужно указать тип данных потому что войд 


	cout << "++++++++++++++++++++++++++++++++++++++++" << endl;

	int spis[5] = { 45,-84,1,5,90 };
	for (int i = 0; i < 5; i++)
	{
		cout << spis[i] << " ";
	}
	cout << endl;
	int* pA = &spis[4];
	int buf = spis[0];
	spis[0] = *pA;
	*pA = buf;

	for (int i = 0; i < 5; i++)
	{
		cout << spis[i] << " ";
	}







	return 0;

}
