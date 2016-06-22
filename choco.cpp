/* You have N dollars and with that you buy chocolates for C dollars.
For every M wrapper, you get an extra chocolate.
Test case:
t=3
10 2 5
12 4 4
6 2 2*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        int rem,count,num;
        cin >> n >> c >> m;
      
        num=n/c;
        count=num;
            while(num>=m)
            {
                rem=num%m;
            ++count;
                num--;
        }
        
        cout<<count+rem<<"\n";
    }
    return 0;
}
