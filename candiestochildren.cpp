/*
There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:
- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

What is the minimum candies you must give?

Input Format

First line contains an integer N.
Next line contains N space separated integers.

Constraints

1 <= N <= 106
1 <= Ai <= 103

Output Format

Output the minimum number of candies you can give out.

Sample Input 0

2
1 2
Sample Output 0

3
Explanation 0

The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. So rating 2 candidate gets 2 candies. In total, 2+1 = 3 candies need to be given out.
*/
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
    int candy(vector<int>& ratings) {
        
        vector <int> res(ratings.size(),1);
        long long tcandies = 0;
        
        if(ratings.size()==1)
            return 1;
        
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]> ratings[i-1])
                res[i]=res[i-1] + 1;
        }
        tcandies = res[res.size()-1];
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]> ratings[i+1])
                res[i]= max(res[i],res[i+1] + 1);
            
            tcandies+=res[i];
        }
        
        return tcandies;
        
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr.push_back(k);
    }
    cout<<candy(arr);
    return 0;
}