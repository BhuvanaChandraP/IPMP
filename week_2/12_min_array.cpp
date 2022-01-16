#include<bits/stdc++.h>
using namespace std;
int bSearch(int arr[],int n)
{
    int low = 0,high = n-1,mid;
    // while(low <= high)
    // {
    //     mid = (low + high)/2;
    //     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
    //         return arr[mid+1];
        
    //     if(arr[mid] < arr[high])
    //         high = mid;
    //     else
    //         low = mid+1;
    // }
    // return -1;

    while(low < high)
    {
        int mid = low + (high - low)/2;
        if (arr[mid] == arr[high])
            high--;
        else if(arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[high];
}
int main()
{
    int arr[] = {4,5,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int x = 20;
    cout<<bSearch(arr,n);
}