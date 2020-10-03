#include <iostream>
#include "UnorderedArray.h"

using namespace std;

int main()
{
	// Bubble Sort
	/*cout << "Bubble Sort Algorithm" << endl;

	UnorderedArray<int> array(5);
	array.push(80);
	array.push(64);
	array.push(99);
	array.push(76);
	array.push(5);

	cout << "Before Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl;

	array.BubbleSort();

	cout << "After Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl << endl;*/

	// Selection Sort
	/*cout << "Selection Sort Algorithm" << endl;

	UnorderedArray<int> array(5);
	array.push(80);
	array.push(64);
	array.push(99);
	array.push(76);
	array.push(5);

	cout << "Before Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl;

	array.SelectionSort();

	cout << "After Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl << endl;*/

	// Insertion Sort
	/*cout << "Insertion Sort Algorithm" << endl;

	UnorderedArray<int> array(5);
	array.push(80);
	array.push(64);
	array.push(99);
	array.push(76);
	array.push(5);
	array.push(69);
	array.push(5);
	array.push(1);
	array.push(420);

	cout << "Before Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl;

	array.InsertionSort();

	cout << "After Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl << endl;*/

	// Merge Sort
	cout << "Merge Sort Algorithm" << endl;

	UnorderedArray<int> array(5);
	array.push(80);
	array.push(64);
	array.push(99);
	array.push(76);
	array.push(5);
	array.push(69);
	array.push(5);
	array.push(1);
	array.push(420);
	
	cout << "Before Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl;

	array.MergeSort();

	cout << "After Sort: ";
	for (int i = 0; i < array.GetSize(); i++)
	{
		cout << " " << array[i];
	}

	cout << endl << endl;

	return 1;
}