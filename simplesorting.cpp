/*
Your task is simple (lol). Given N numbers, print them in ascending order.

You may use any sorting algorithm.
You are advised to use MergeSort.

Input Format

First line contains the size of array N.

Next N lines contains one number each.

Constraints

1 <= N = 2x10^5
1 <= ar <= 10^(10^6)

The total number of digits across all the elements of the array will not exceed 10^6.

Output Format

Print each element of the sorted array on a new line.

Sample Input 0

6
31415926535897932384626433832795
1
3
10
3
5
Sample Output 0

1
3
3
5
10
31415926535897932384626433832795
*/
#include<bits/stdc++.h>
typedef long long ll;
#define mod 100000007
using namespace std;
int cmp(string a,string b){
    if(a.length()==b.length())return a<b;
    else return a.length()<b.length();
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++)cout<<s[i]<<"\n";
    return 0;
}
