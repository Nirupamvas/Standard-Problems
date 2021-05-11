/*
Given n non-negative integers a1, a2, ..., an,
where each represents a point at coordinate (i, ai).
'n' vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).

Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Your program should return an integer which corresponds to the maximum area of water that can be contained ( Yes, we know maximum area instead of maximum volume sounds weird. But this is 2D plane we are working with for simplicity ).

Note :
You may not slant the container (like this font)

Input Format

First line contains size of array N.
Second line contains N integers, the elements of array a.

Constraints

1 <= N,ai <= 10^5

Output Format

Output the area of the maximum container.

Sample Input 0

4
1 5 4 3
Sample Output 0

6
Explanation 0

5 and 3 are distance 2 apart. So size of the base = 2. Height of container = min(5, 3) = 3. So total area = 3 * 2 = 6

Contest ends in 4 days 1 hour 1 minute 36 seconds
Submissions: 31
Max Score: 50
Rate This Challenge:

    
More

*/