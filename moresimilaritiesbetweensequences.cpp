/*
You are given two sequences of integers A(1,2...N) and B(1,2...M).

A newer function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain set :
{a1, a2, ... ak} with a1 ≤ a2 ≤ ... ≤ ak
and another set
{b1, b2, ... bk} with b1 ≤ b2 ≤ ... ≤ bk
such that
for every i from 1 to k, we have Aai = Bbi.

Input

First line contains the value of integer N.
Second line contains the elements of sequence. A.
Third line contains the value of integer M.
Fourth line contains the elements of the sequence B.

Output

Print one number, the value of F(A, B)

Notes

N and M do not exceed 1000.
The elements in the sequence fit in a 32-bit integer.

Sample Input 0

6
1 2 3 4 5 6
6
2 1 4 3 6 5
Sample Output 0

3
Explanation 0

One possible set a and b with size 3 is : a = {1, 3, 5} and b = {2, 4, 6}, then , {A[a1], A[a2], A[a3]} = {B[b1], B[b2], B[b3]}
*/
#include<bits/stdc++.h>
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
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++){
            if(i==0 || j==0)
                    dp[i][j]=0;
            else if(a[i-1]==b[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m];
    
    return 0;
}
