#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int n)
{
    int low = 0,high = n-1,mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == mid)
            return mid;
        if(arr[mid] > mid)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    int arr[] = {-10, -1, 0, 2, 3,4 , 6, 50, 100 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<bSearch(arr,n);
}