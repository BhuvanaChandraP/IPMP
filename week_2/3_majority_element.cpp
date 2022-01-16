#include<bits/stdc++.h>
using namespace std;
int firstOccuerence(int arr[],int n,int x)
{
    int low =0,high = n-1;
    while(low <=  high)
    {
        int mid = (low+high)/2;
        if(x > arr[mid])
            low = mid+1;
        else if(x < arr[mid])
            high = mid -1;
        else{
            if(mid == 0 || arr[mid-1] != arr[mid])
                return n-mid;    // or n-mid here itself to directly get the answer
            else
                high = mid-1;
        }
    }
    return -1;

}
int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    if(firstOccuerence(arr,n,x) >= n/2)
    {
        cout<<"majority";
    }
    else{
        cout<<"no";
    }
    //cout<<n-firstOccuerence(arr,n,x);
}



