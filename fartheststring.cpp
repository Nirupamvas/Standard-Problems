/*
We define the Palindromic Distance of a String as the minimum number of characters that need to be modified in order to turn the String into a palindrome.

For example :

"cook" -> "cooc" (Palindrome),
Hence Distance("cook") = 1.

"fluffy" -> "flufff" -> "ffufff" -> "ffffff" (Palindrome),
Hence Distance("fluffy") = 3.

Now, you are given N number of strings, and your task is to find out which string has the farthest Distance from being a palindrome and print it.

INPUT
First line contains number of strings N.
Next N lines each contain one string.

OUTPUT
Print one string that is the farthest out of all strings from being a palindrome.

CONSTRAINTS
1 ≤ N ≤ 103
Each string has length of atmost 1000
Strings consists of lowercase english characters only

Sample Input 0

7
philosopher
chamber
prisoner
goblet
phoenix
halfbloodprince
deathlyhallows
Sample Output 0

halfbloodprince
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,max=0;
    cin>>n;
    char ch[n][1001],*p;
    for(int i=0;i<n;i++){
        int d=0;
        cin>>ch[i];
        int j=0,k=strlen(ch[i])-1;
        while(j<k){
            if(ch[i][j]!=ch[i][k]){
                d++;
            }
            j++;
            k--;
        }
        if(max<d){
            max=d;p=ch[i];
        }
    }
    cout<<p;
    return 0;
}