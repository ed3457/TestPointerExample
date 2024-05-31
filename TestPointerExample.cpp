// TestPointerExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	//int x = 5;

	//int y = 10; 


	//int* ptr1 = &x; 

	//cout << x << endl;

	//cout << ptr1 << endl;

	//cout << *ptr1 << endl; // *ptr1 == x 
	//(*ptr1)++;

	//cout << *ptr1 << endl; // *ptr1 == x 


	/*ptr1 = &y; 

	cout << *ptr1 << endl;*/


	

	//int size = 10;
	//cin >> size;
	//int* ar2 = new int[size];


	//for (int i = 0; i < size; i++)
	//	ar2[i] = i * i;

	//for (int i = 0; i < size; i++)
	//	cout << ar2[i] << endl;

	////int ar[size];
 //   delete[] ar2; // dealocate the old memory from the heap

	//ar2 = new int[20];


	int z = 5;

	int* ptr2 = &z;

	cout << ptr2 << endl;

	ptr2++;

	cout << ptr2 << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
