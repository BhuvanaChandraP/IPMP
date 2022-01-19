#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int n,int x)
{
    int low = 0,high = n-1,mid;
    while(low <= high)
    {
         mid = (low + high)/2;
        if(arr[mid] == x)
            return mid;
       
        if(arr[mid] > x)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}
int main()
{
    //int arr[] = {1,5,10,20,30,60,90};
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
          18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<bSearch(arr,n,x);
}