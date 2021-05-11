/*
Given an array of integers, replace every element with the greatest element on the right side in the array. Replace last element with 0 as there no element on the right side of it.

Input Format

First line contains N , the number of Numbers. Next line contains N integers a[1]..a[n] the numbers

Constraints

1<= N <= 10^5
1<= ai <= 10^5

Output Format

Print the array required

Sample Input 0

6
6 7 4 3 5 2
Sample Output 0

7 5 5 5 2 0 
*/
#include<bits/stdc++.h>
using namespace std;
void find(int arr[], int size)
{
    int max_from_right = arr[size-1];
    arr[size-1] = 0;
    for(int i = size-2; i >= 0; i--)
    {
        int temp = arr[i];
        arr[i] = max_from_right;
        if(max_from_right < temp)
        max_from_right = temp;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    find(arr,n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
