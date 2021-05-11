/*
Rayinshi and Neechea play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Rayinshi moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Rayinshi and Neechea are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Rayinshi and Neechea. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Input Format

The first line contains, integer n, the number of cards on the table.
The second line contains space-separated numbers on the cards from left to right.

Constraints

1 <= n <= 1000.
The numbers on the cards are all guaranteed to be distinct.

Output Format

On a single line, print two integers. The first number is the number of Rayinshi's points at the end of the game, the second number is the number of Neechea's points at the end of the game.

Sample Input 0

4
4 1 2 10
Sample Output 0

12 5
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


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
    ll r=0,a=0;
    int j=n-1;
    int p=0,i=0;
    int s;
    while(i<=j){
        if(p==0){
            int k;
            if(arr[i]>arr[j]){
                k=arr[i];
                s=i;
            }
            else{
                k=arr[j];
                s=j;
            }
            a+=k;
            p=1;
            if(s==i){
                i++;
            }
            else{
                j--;
            }
        }
        else if(p==1){
            int k;
            if(arr[i]>arr[j]){
                k=arr[i];
                s=i;
            }
            else{
                k=arr[j];
                s=j;
            }
            r+=k;
            p=0;
            if(s==i){
                i++;
            }
            else{
                j--;
            }
        }
    }
    cout<<a<<" "<<r;
    return 0;
}
