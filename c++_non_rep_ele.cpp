#include <iostream>
using namespace std;
int non_rep_ele(int INTarr[], int n)
{
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            //array index is not same & array element is same
            if (i != j && INTarr[i] == INTarr[j])
                break;
        if (j == n)
            return INTarr[i];
    }
    return -1;
}
int main()
{
    int INTarr[] = { 1,2,3,3,2,1,5,4,4 };
    // n is size of array
    int n = sizeof(INTarr) / sizeof(INTarr[0]);
    cout << non_rep_ele(INTarr, n);
    return 0;
}
