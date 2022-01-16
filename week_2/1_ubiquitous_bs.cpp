#include<bits/stdc++.h>
using namespace std;
// Problem Statement: Given an array of N distinct integers, find floor value of input ‘key’. 
// Say, A = {-1, 2, 3, 5, 6, 8, 9, 10} and key = 7, we should return 6 as outcome.
int Floor(int A[], int l, int r, int key)
{
    int m;
  
    while( r - l > 1 )
    {
        m = l + (r - l)/2;
        if( A[m] <= key )
            l = m;
        else
            r = m;
    }
  
    return A[l];
}
  
int Floor(int A[], int size, int key)
{

    if( key < A[0] )
        return -1;
    return Floor(A, 0, size, key);
}
// Problem Statement: Given a sorted array with possible duplicate elements. 
// Find number of occurrences of input ‘key’ in log N time.
int GetRightPosition(int A[], int l, int r, int key)
{
	int m;

	while( r - l > 1 )
	{
		m = l + (r - l)/2;

		if( A[m] <= key )
			l = m;
		else
			r = m;
	}

	return l;
}
int GetLeftPosition(int A[], int l, int r, int key)
{
	int m;

	while( r - l > 1 )
	{
		m = l + (r - l)/2;

		if( A[m] >= key )
			r = m;
		else
			l = m;
	}

	return r;
}

int CountOccurances(int A[], int size, int key)
{
	int left = GetLeftPosition(A, -1, size-1, key);
	int right = GetRightPosition(A, 0, size, key);
	return (A[left] == key && key == A[right])?
		(right - left + 1) : 0;
}

int main()
{
    int arr[] = {1,5,10,20,20,20,30,60,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<Floor(arr,n,x)<<" ";
    cout<<CountOccurances(arr,n,x);
}