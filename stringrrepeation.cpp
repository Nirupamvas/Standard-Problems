/*
Given a string, find the smallest string that can generate the original string by concatenation. See example case for clarity.

Input Format

One string. String is guaranteed to contain lowercase letters only.

Constraints

1 <= length of string <= 5000

Output Format

Print the smallest string that can be repeated to get the original string.

Sample Input 0

abababab
Sample Output 0

ab
*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    int len;
    cin>>str;
    int lent = str.size();
    len = lent;
    for(int i=1; i<=lent; i++)
    {
        string temp = "";
        string ans = "";
        if(lent%i == 0)
        {
            for(int j=0; j<i; j++)
                ans+=str[j];
            for(int j=0; j<(lent/i); j++)
                temp+=ans;
            if(str==temp)
            {
                cout<<ans;
                return 0;
            }
        }
    }
    return 0;
}