#include <bits/stdc++.h>
using namespace std;
void unique_element(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j)
          cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {23,45,78,9,2,-1,-23,23,45,67,78,9,22,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unique_element(arr, n);
    return 0;
}
