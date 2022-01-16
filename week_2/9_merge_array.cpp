#include<bits/stdc++.h>
using namespace std;
#define NA -1
void moveToEnd(int arr[], int size)
{
   int j = size - 1;
   for (int i = size - 1; i >= 0; i--)
     if (arr[i] != NA)
     {
        arr[j] = arr[i];
        j--;
     }
}
void merge(int arr[] ,int brr[],int m,int n)
{
    int i = n;
   int j = 0;
   int k = 0; 
   while (k < (m + n))
   {
        if ((j == n)||(i < (m + n) && arr[i] <= brr[j]))
        {
            arr[k] = arr[i];
            k++;
            i++;
        }
        else 
        {
            arr[k] = brr[j];
            k++;
            j++;
        }
   }
    // int ctr=0;
    // for(int i=0;i<na+nb;i++)
    // {
    //     if(arr[i] == NA)
    //     {
    //         arr[i] = brr[ctr];
    //         ctr++;
    //     }
    // }
}
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}
int main()
{
   int arr[] = {2, 8, NA, NA, NA, 13, NA, 15, 20};
   int N[] = {5, 7, 9, 25};
    
   int n = sizeof(N) / sizeof(N[0]);
   int m = sizeof(arr) / sizeof(arr[0]) - n;
 
 
   moveToEnd(arr, m + n);
 

   merge(arr, N, m, n);
 

   printArray(arr, m+n);
 
   return 0;
    
}