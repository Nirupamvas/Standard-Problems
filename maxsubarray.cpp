/*
FIND THE SUM OF THE MAXIMUM SUBARRAY.

Input Format

First line contains N value denoting number of integers

Next line contains N integers seperated by a space.

Constraints

1<=N<1000000

-10000<=a[i]<=10000

Output Format

A single integer denoting sum of the maximum sub array

Sample Input 0

8
-1 2 4 -3 5 2 -5 2
Sample Output 0

10
*/
#include<bits/stdc++.h>
#include<climits>
typedef long long ll;
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max1 = INT_MIN, max2 = 0;
    for (int i=0; i<n; i++ )
    {
        max2 += a[i];
        if (max1 < max2)
        {
            max1 = max2;
        }
        if (max2 < 0)
        {
            max2 = 0;
        }
    }
    cout<<max1;
    
    return 0;
}