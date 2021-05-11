/*
You are in a 2D maze of dimensions N x M. Your initial position is (1,1) and your final position is (N,M).

The cell(i,j) has value A[i][j]. The cost of travelling any path in this maze is equal to the sum of values of all cells that you have visited while travelling the path.

From a cell (i,j) you can only go either right, or down, i.e. you can only go to (i + 1, j) or (i, j + 1). Note that at any point you cannot leave the grid.

Your task is to calculate the minimum cost that it would take you to go from the initial position to the final position.

Input
First line contains two integers N and M. Next N lines each contain M integers denoting the values of A[i][j]

Output
Print the minimum cost of travel

Notes
All input values do not exceed 1000

Sample Input 0

3 3
1 1 2
2 3 1
2 2 1
Sample Output 0

6
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int dp[n][m];
    dp[0][0]=arr[0][0];
    for(int i=1;i<n;i++){
        dp[i][0]=dp[i-1][0]+arr[i][0];
    }
    for(int i=1;i<m;i++){
        dp[0][i]=dp[0][i-1]+arr[0][i];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
           dp[i][j]=arr[i][j]+min(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}
