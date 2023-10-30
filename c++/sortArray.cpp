#include<iostream>
using namespace std;
#include<algorithm>
// void ascDesFun(int arr[], int n)
// {
//     int temp;
//     for(int i=0; i<n-1; i++)
//     {
//         for(int j=0; j<n/2; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int j=n/2; j < n-1; j++)
//     {
//         if(arr[j] < arr[j+1])
//         {
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }

// int main()
// {
//     int arr[] = {3,2,4,1,10,30,40,20};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     ascDesFun(arr,len);
//     return 0;

// second method
void ascDecFun(int a[], int n)
{
            sort(a,a+n);
            //priting first half in ascending order
            for(int i=0;i<n/2;i++)
            cout<<a[i]<<" ";
            //printing second half in descending order
            for(int j = n-1; j>=n/2; j--)
            cout<<a[j]<<" ";
}
int main()
{
    int arr[] = {1,3,4,2,20,40,10,30};
    int len = sizeof(arr) / sizeof(arr[0]);
    ascDecFun(arr,len);
    return 0;


}