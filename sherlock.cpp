/*YOu are given two integers (A and B) and you need to count the number of square 
integers between A and B*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a,b;
    int c,d;
    int res;
    for(int i=0;i<n;i++)
        {
        
    
    cin>>a>>b;
    c=sqrt(a);
    d=sqrt(b);
    res=d-c;
    cout<<res;
        res=0;
    }
    return 0;
}