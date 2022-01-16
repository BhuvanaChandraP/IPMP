#include <iostream>
using namespace std;

int maxInBitonic(int arr[], int n)
{
    int low =0,high = n-1,mid;
    while (low <= high)
    {
        mid = (low+high)/2;
        if(low == high-1 && arr[low] >= arr[high])
            return arr[low];
        if(low == high-1 && arr[low] < arr[high])
            return arr[high];
        if(arr[mid] > arr[mid-1] && arr[mid]> arr[mid+1])
            return arr[mid];
        else if(arr[mid] < arr[mid+1])
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
    

   
}
int main()
{
    int arr[] = { 1, 3, 50,100, 10, 9, 7, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum element is "
         << maxInBitonic(arr, n);
    return 0;
}