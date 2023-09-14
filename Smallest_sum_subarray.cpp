#include <bits/stdc++.h>
using namespace std;
int smallest_sum_subarray(int arr[], int n)
{
    int min_so_far = INT_MAX;
    int min_ending_here = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min_so_far >0)
            min_ending_here =arr[i];
        else
            min_so_far = min_so_far +arr[i] ;
        min_ending_here = min(min_so_far,min_ending_here);
    }
    return min_so_far;
}
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "The minimum sum of a contiguous subarray is " << smallest_sum_subarray(arr, n);
 
    return 0;
}