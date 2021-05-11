/*
Level order traversal of a tree is obtained by doing a breadth first search on it.

You are given a tree with N nodes and N-1 edges. Each edge is bidirectional and connects two nodes.

The nodes of the tree are indexed from 1 to N and you can consider 1 to be the root of the tree.

You are given an integer d. Your task is to print the number of nodes that are present at the dth level of the tree.

It is guaranteed that atleast one node will be present at the dth level.

Input

First line contains n the number of nodes
Next n - 1 lines each contain two integers u and v such that there is an edge between u and v
Last line contains the integer d

Output

Print one number, the count of nodes at dth level of the tree

Sample Input 0

20
11 1
1 2
13 3
15 4
17 5
11 6
2 7
1 8
15 9
4 10
15 12
5 13
2 14
17 15
15 16
11 17
15 18
9 19
16 20
2
Sample Output 0

3
Contest ends in 4 days 0 hours 59 minutes 59 seconds
Submissions: 29
Max Score: 50
Rate This Challenge:

    
More

*/

#include<bits/stdc++.h>
using namespace std;
int adj[1005][1005],vis[1005],dis[1005],q[1005],f=0,r=-1,n;
void bfs(int s){
    q[++r]=s;
    vis[s]=1;
    dis[s]=1;
    while(f<=r){
        int x=q[f++];
        for(int i=1;i<=n;i++){
            if(adj[x][i]==1 && vis[i]==0){
                q[++r]=i;
                vis[i]=1;
                dis[i]=dis[x]+1;
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;        
    }
    bfs(1);
    int d,c=0;
    cin>>d;
    for(int i=1;i<=n;i++){
        if(dis[i]==d)c++;
    }
    cout<<c;
    return 0; 
}
