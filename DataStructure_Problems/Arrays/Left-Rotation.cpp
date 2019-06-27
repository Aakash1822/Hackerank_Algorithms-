#include<iostream>
#include<stdio.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
	for (int i = low, j = high; i < j; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
void leftRotate(int arr[], int r, int n)
{
// Reverse the first 'r' elements
	reverse(arr, 0, r-1);

	// Reverse the remaining 'n-r' elements
	reverse(arr, r, n-1);

	// Reverse the whole array
	reverse(arr, 0, n-1);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int r = 2;

	int n = sizeof(arr)/sizeof(arr[0]);

	leftRotate(arr, r, n);

	for (int i = 0; i < n; i++)
		cout<<a[i];

	return 0;
}
