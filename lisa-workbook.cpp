#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n,k,count=0;
    int pno=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        int f=0;
        int qno=1;
        for(int j=0,l=1;j<t;j++,l++)
        {
            if(qno==pno)
            {
                count++;
            }
            pqno++;
            if(l==k)
            {
                l=0;
                pno++;
                if(j==t-1)
                    f=1;
            }
        }
        if(f==0)
            pno++;
    }
    cout<<count;
    return 0;
}