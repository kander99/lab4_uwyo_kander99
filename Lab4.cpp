// Lab4.cpp : Defines the entry point for the console application.
//
/*
#include "stdafx.h"


int main()
{
    return 0;
}
*/
#include "VectorDriver.h"
#include <algorithm>
//#include "Lab4.h"

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
	vector<short> sample_vector(5);

	cout << "new vector: ";
	print(sample_vector);
	cout << endl;

	fill_vector(sample_vector);

	cout << "filled vector: ";
	print(sample_vector);
	cout << endl;

	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");

	vector<short> myvector;

	add_numbers(myvector);
	cout << "testing the add numbers function" << endl;
	for (unsigned i = 0; i = myvector.size(); i++)
	{
		cout << myvector[i] << endl;
	}
	cout << "---------------------------";

	cout << "print function" << endl;
	print_even(myvector);
	cout << endl;
	cout << "---------------------------------";
	
	cout << "is present function" << endl;
	cout << is_present(myvector, 26646) << endl;
	cout << "----------------------------";

	cout << "sort function" << endl;
	vector<int> toSortVec = { 1, 2, 3, 4, 5, 6, 7 };
	for (int i = 0; i < toSortVec.size(); i++)
	{
		cout << toSortVec[i] << endl;
	}


	 std::sort(toSortVec.begin(), toSortVec.end());


	return 0;
}
