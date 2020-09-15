#include<iostream>
using namespace std;
int main()
{
	int arr[] = {123,43,67,88,9};
	int sum=0;
	int n = sizeof(arr)/sizeof(arr[0]);
		for (int i = 0; i < n; i++) {
	    int num;
	    num = arr[i];
        while (num != 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }
	}
	cout << sum;
}
