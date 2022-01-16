#include<bits/stdc++.h>
using namespace std;
int median(int arr[],int n)
{
    if(n%2 == 0)
    {
        return (arr[n/2]+arr[n/2-1])/2;

    }
    else
        return arr[n/2];
}
int medianSorted(int arr[],int brr[], int n)
{
    if (n <= 0)
        return -1;
    if (n == 1)
        return (arr[0] +
                brr[0]) / 2;
    if (n == 2)
        return (max(arr[0], brr[0]) +
                min(arr[1], brr[1])) / 2;
    int m1,m2;
    m1 = median(arr,n);
    m2 = median(brr,n);
    if(m1 == m2)
        return m1;
    else if(m1 < m2)
    {
        if(n%2 == 0)
        {
            return medianSorted(arr + n/2 -1,brr,n-n/2+1);
        }
        return medianSorted(arr+n/2,brr,n-n/2);
    }
    if(n%2 ==0)
        return medianSorted(brr + n/2-1,brr,n-n/2+1);
    else
        return medianSorted(brr+n/2,arr,n-n/2);

}
int main()
{
    int arr[] = {1, 2, 3, 6};
    int brr[] = {4, 6, 8, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<medianSorted(arr,brr,n);
}