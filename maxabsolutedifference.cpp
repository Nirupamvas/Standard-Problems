/*
You are given an array of N integers A1, A2, A3... AN.

Your task is to write a program to print the maximum value f(i, j) for all 1 <= i,j <= N.

f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes the absolute value of x.

Input Format

First line contains N, the size of the array.

Second line contains N space separated integers, the elements of the array.

Constraints

1 <= N <= 106
1 <= Ai <= 106

Output Format

Output one integer, the maximum possible value of function f(i, j).

Sample Input 0

3
1 3 -1
Sample Output 0

5
Explanation 0

f(1, 1) = f(2, 2) = f(3, 3) = 0
f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

So, we return 5.
*/
#include<bits/stdc++.h>
#include<climits>
typedef long long ll;
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max_a=INT_MIN,min_a=INT_MAX,max_b=INT_MIN,min_b=INT_MAX;
    for(int i=0;i<n;i++){
        max_a=max(max_a,a[i]+i);
        min_a=min(min_a,a[i]+i);
        max_b=max(max_b,a[i]-i);
        min_b=min(min_b,a[i]-i);
    }
    int res=max(max_a-min_a,max_b-min_b);
    cout<<res;
    return 0;
}
