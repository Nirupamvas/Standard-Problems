/*
You are given an array A of size N.

The ith element of A is denoted by A[i] and the array is indexed from 1 to N.

Your task is to answer Q queries where each query can be of two types :
1. 1 P V - add V to A[P] 2. 2 L R - print the sum of all elements from A[L] to A[R]

Input
First line consists of two integers N and Q
Second line consists of N space separated integers denoting the array A
Third line onwards, there are Q lines each describing a query
Each query has three integers as described above.

Output
Print the sum of elements from index L to index R for each query type 2 on a new line

Notes
1 ≤ N, Q, V ≤ 100,000
1 ≤ A[i] ≤ 1,000
1 ≤ L ≤ R ≤ N
1 ≤ P ≤ N
Sample Input 0

5 3
1 2 3 2 1
2 1 5
1 1 2
2 1 3
Sample Output 0

9
8
Contest ends in 4 days 0 hours 53 minutes 0 seconds
Submissions: 25
Max Score: 50
Rate This Challenge:

    
More

*/

//Partial Solution
#include<bits/stdc++.h>
using namespace std;
int n,q;
void insertX(int n, vector<int>& arr,int x, int pos)
{
    int i;
    n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    for(int i=0;i<q;i++){
        int l,r,p;
        cin>>p>>l>>r;
        if(p==2){
            int sum=0;
            for(int j=l-1;j<=r;j++){
                sum+=arr[j];
            }
            cout<<sum<<"\n";
        }
        else if(p==1){
            //insertX(n,arr,r,l);
            arr.insert(arr.begin()+l+1, r);
        }
    }
    return 0;
}
