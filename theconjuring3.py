'''
Little Leya is scared because she has seen a ghost in her house. She lives in a strange house where there are no crosses so she cannot scare the ghosts off. Luckily she also knows that ghosts are scared of numbers that are some non negative power of 2. She has a number in her hand and wants to find out if she can use this number to scare off ghosts. Help her find out if the number can be used by Leya.

Input Format

Input Contains one number N.

Constraints

1 <= N <= 1e100

Output Format

Output "yes" if N is a direct power of 2 and "no" otherwise.

Sample Input 0

128
Sample Output 0

yes
'''

def powerof2(n):
    if n == 1:
        return True
    elif n%2 != 0 or n == 0:
        return False
    return powerof2(n/2)
n=int(input())
if(powerof2(n)):
   print("yes")
else:
   print("no")
