/*
There are people randomly seated in an NxN grid.
In the grid a 0 means an empty seat. A positive integer denotes a person.
A person can be numbered from 1 to 5, 1 meaning he is perfectly healthy whereas 5 meaning he is highly infected with the virus.
Any person who is directly adjacent to an infected person (left-right-up-down-diagonally adjacent) is at a high risk.
If a healthy person numbered 1 is adjacent to an infected person numbered 3, he is at high risk 3, and so on.

Your task is to calculate the number of infected-k people for k = {2,3,4,5} and also the number of high risk-k people for k = {2,3,4,5}

Note that if person is beside multiple infected people, he is at risk for the highest level of infection.

Input
First line contains the size of the grid N.
Next contains the NxN grid.

Output
Print 8 integers in the following format :

infected-2 infected-3 infected-4 infected-5  
highrisk-2 highrisk-3 highrisk-4 highrisk-5
Sample Input 0

5
0 0 0 1 5
1 1 1 1 1
3 1 2 1 0
1 1 1 1 1
4 4 1 3 1
Sample Output 0

1 2 2 1
2 6 4 3
*/

#include<bits/stdc++.h>
using namespace std;
int a[1005][1005],n,b[6][2];
int fun(int i,int j){
int c=0;
if(i>=1 && a[i-1][j]==1) {c++; a[i-1][j]=0; }
if(i>=1 && j<n-1 && a[i-1][j+1]==1) {c++; a[i-1][j+1]=0; }
if(j<n-1 && a[i][j+1]==1) {c++; a[i][j+1]=0; }
if(i<n-1 && j<n-1 && a[i+1][j+1]==1) {c++; a[i+1][j+1]=0; }
if(i<n-1 && a[i+1][j]==1) {c++; a[i+1][j]=0; }
if(i<n-1 && j>=1 && a[i+1][j-1]==1){c++; a [i+1][j-1]=0; }
if(j>=1 && a [i][j-1]==1) {c++; a[i][j-1]=0; }
if(i>=1 && j>=1 && a[i-1][j-1]==1) {c++;a[i-1][j-1]=0; }
return c;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int k=5;k>=2;k--){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==k){
                    b[k][0]++;
                    b[k][1]+=fun(i,j);
                }
            }
        }
    }
    for(int i=2;i<=5;i++){
        cout<<b[i][0]<<" ";
    }
    cout<<"\n";
    for(int i=2;i<=5;i++){
        cout<<b[i][1]<<" ";
    }
    return 0;
}
