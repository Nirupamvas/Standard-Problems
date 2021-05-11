/*You are given an array A of size N.

The ith element of A is denoted by A[i] and the array is indexed from 1 to N.

Your task is to answer Q queries of the form [L,R] where each query asks the sum of elements from A[L] to A[R].

Input
First line consists of two integers N and Q
Second line consists of N space separated integers denoting the array A
Third line onwards, there are Q lines each describing a query
Each query has two integers L and R

Output
Print the sum of elements from index L to index R for each query on a new line

Notes
1 ≤ N, Q, A[i] ≤ 100,000
1 ≤ L ≤ R ≤ N
Sample Input 0

5 4
1 3 5 2 5
1 5
2 4
5 5
1 3
Sample Output 0

16
10
5
9
*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,q;
int main() {  
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    vector<ll> arr;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        arr.push_back(k);
    }
    vector<ll> dum;
    dum.push_back(0);
    dum.push_back(arr[0]);
    //cout<<dum[0];
    for(ll j=2,p=1;j<=n;j++,p++){
        dum.push_back(dum[j-1]+arr[p]);
    }
    for(ll i=0;i<q;i++){
        ll l,r;
        cin>>l>>r;
        l=l-1;
        r=r;
        ll sum=abs(dum[l]-dum[r]);
        //ll sum=0;
        cout<<sum<<"\n";
    }
    return 0;
}
