#include<iostream>
using namespace std;

//max consecutive 1
int c_one(int arr[], int n)
{
    int c = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c = 0;
        else
        {
            c++;
            ans = max(ans, c);
        }
    }

    return ans;
}
int main()
{
    int arr[] = {0,1,1,1,0,0,0,1,1,1,1,1,0,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"maximum consecutive 1's is "<<c_one(arr, n) << endl;
    return 0;
}
