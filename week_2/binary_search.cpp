#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int n,int x)
{
    int low = 0,high = n-1,mid;
    while(low <= high)
    {
        if(arr[mid] == x)
            return mid;
        mid = (low + high)/2;
        if(arr[mid] < x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    int arr[] = {1,5,10,20,30,60,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<bSearch(arr,n,x);
}