/*
Given an array A = {a1, a2, a3..} of N elements, find the maximum possible sum of a

Contiguous subarray
Non-contiguous (not necessarily contiguous) subarray.
Empty subarrays/subsequences should not be considered.

Input Format

First line of the input has an integer T. T cases follow.
Each test case begins with an integer N. In the next line, N integers follow representing the elements of array A.

Constraints

1 <= T <= 10
1 <= N <= 10^5
-10^4 <= ai <= 10^4

The subarray and subsequences you consider should have at least one element

Output Format

Two, space separated, integers denoting the maximum contiguous and non-contiguous subarray. At least one integer should be selected and put into the subarrays (this may be required in cases where all elements are negative).

Sample Input 0

2
4
1 2 3 4
6
2 -1 2 3 4 -5
Sample Output 0

10 10
10 11
*/
#include<bits/stdc++.h>
#include<climits>
typedef long long ll;
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
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
    cout<<max1<<" ";
    sort(a,a+n);
    int i = n-1;
    int sum = 0;
    do {
        sum += a[i];
            i--;
        } while (i >= 0 && sum + a[i] >= sum);
    cout<<sum<<"\n";
    }
    return 0;
}
