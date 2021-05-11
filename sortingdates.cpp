/*
You are given a total of N Dates. Each date has a day, a month and a year.

Your task is to write a program to sort these dates, from the dates occuring earlier to the dates occuring later

Input
First line contains the number of dates N.
Next N lines each contain three integers, day, month and year.

Output
Print one date per line, each date must be in the format : DD/MM/YYYY

Notes
1 ≤ N ≤ 100
Sample Input 0

4
9 8 1996
21 3 1996
12 1 1996
31 12 1997
Sample Output 0

12/01/1996
21/03/1996
09/08/1996
31/12/1997
*/

#include<bits/stdc++.h>
using namespace std;
struct date{
    int day;
    int mon;
    int year;
};
bool compare(const date &d1, const date &d2)
{
    if (d1.year < d2.year)
        return true;
    if (d1.year == d2.year && d1.mon < d2.mon)
        return true;
    if (d1.year == d2.year && d1.mon == d2.mon &&
                              d1.day < d2.day)
        return true;
    return false;
}
void sortDates(date arr[], int n)
{
    sort(arr, arr+n, compare);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    struct date da[n];
    for(int i=0;i<n;i++){
        cin>>da[i].day>>da[i].mon>>da[i].year;
    }
    /*for(int i=1;i<n;i++){
        if(da[i-1].year>=da[i].year && da[i-1].day<=da[i].day && da[i-1].mon>=da[i].mon){
            int temp;
            temp=da[i-1].year;
            da[i-1].year=da[i].year;
            da[i].year=temp;
            
            temp=da[i-1].mon;
            da[i-1].mon=da[i].mon;
            da[i].mon=temp;
            
            temp=da[i-1].day;
            da[i-1].day=da[i].day;
            da[i].day=temp;
        }   
    }*/
    sortDates(da,n);
    for(int i=0;i<n;i++){
        if(da[i].day<=9){
            cout<<'0'<<da[i].day<<"/";
        }
        else{
            cout<<da[i].day<<"/";
        }
        if(da[i].mon<=9){
            cout<<'0'<<da[i].mon<<"/";
        }
        else{
            cout<<da[i].mon<<"/";
        }
        cout<<da[i].year<<"\n";
    }
    return 0;
}
