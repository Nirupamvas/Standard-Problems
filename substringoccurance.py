'''
Bug has a string S and a smaller string T. Bug needs to find how many times T occurs in S as a substring. Help him with the task.

Input Format

First line contains the string S. Second line contains the string T.

Constraints

1 <= |S| <= 100 1 <= |T| <= |S|

Output Format

Output the number of times T occurs in S.

Sample Input 0

bugsbunnywritesbuggycodes
bug
Sample Output 0

2
Explanation 0

bugs comes twice in the string S
'''
n=input()
s=input()
t=""
k=""
if(len(n)>len(s)):
    t=s
    k=n
else:
    t=n
    k=s
d=[]
for i in range(0,len(k)):
    o=k[i:len(t)+i]
    d.append(o.count(t))
print(sum(d))