'''
Rohan has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Rohan typed the word s. It is considered that Rohan managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Rohan types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Rohan got misunderstood and he didn't manage to say hello. Determine whether Rohan managed to say hello by the given word s.

Input Format

The first and only line contains the word s, which Rohan typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Constraints

Given

Output Format

If Rohan managed to say hello, print "YES", otherwise print "NO".

Sample Input 0

ahhellllloou
Sample Output 0

YES
Sample Input 1

hlelo
Sample Output 1

NO
'''
s=input()
l=['h','e','l','l','o']
j=0
for i in range(len(s)):
    if(l[j]==s[i]):
        j+=1
    if(j==4):
        break
if(j==4):
    print("YES")
else:
    print("NO")