#include <iostream>
#include "Math.h"
#include "ArrayFunc.h"
using namespace std;
int main()
{
	cout << add(4, 4) << endl;
	cout << minuss(4, 5) << endl;

	int arr[5] = { 6,6,753,1,50 };
	//showArr(arr, 5);
	cout << "vivid sortovanoho array" << endl;
	//task hard level
	change(arr, 5);
	//task easy levl
	const int size = 5;
	int arr2[size];
	fillarr(arr2, size);
	average(arr2, size);
	//task midll level 
	mostZust(arr, 5);
	
}


