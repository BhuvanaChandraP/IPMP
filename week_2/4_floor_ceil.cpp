#include<bits/stdc++.h>
using namespace std;
int floor(int arr[],int n,int x)
{
   
    int low = 0,high = n-1,mid,res;
    while(low <= high)
    {
       mid = (low+high)/2;
        if(arr[mid] == x)
            return arr[mid];
        else if(arr[mid] < x)
        {
            low = mid+1;
            res = mid;
        }
        else{
            high = mid-1;
        }
    }
    return arr[res];
}
int ceil(int arr[],int n,int x)
{
   
    int low = 0,high = n-1,mid,res;
    while(low <= high)
    {
       mid = (low+high)/2;
        if(arr[mid] == x)
            return arr[mid];
        else if(arr[mid] > x)
        {
            low = mid+1;
            res = mid;
        }
        else{
            high = mid-1;
        }
    }
    return arr[res];
}
int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    cout<<"Floor :"<<floor(arr,n,x)<<"\n";
    x = 10;
    cout<<"Ceil :"<<ceil(arr,n,x);
}