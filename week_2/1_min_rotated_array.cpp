#include<bits/stdc++.h>
using namespace std;
int BinarySearchIndexOfMinimumRotatedArray(int A[], int l, int r)
{
	int m;
	if( A[l] <= A[r] )
		return l;

	while( l <= r )
	{
		if( l == r )
			return l;

		m = l + (r-l)/2; 
		if( A[m] < A[r] )
			r = m;
		else
			l = m+1;
	}

	return -1;
}

int BinarySearchIndexOfMinimumRotatedArray(int A[], int size)
{
	return BinarySearchIndexOfMinimumRotatedArray(A, 0, size-1);
}

int main()
{
    int arr[] = {5,6,7,8,9,10,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<BinarySearchIndexOfMinimumRotatedArray(arr,n);
}