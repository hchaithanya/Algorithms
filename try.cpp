#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    int count=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
                if(n%2==0)
            count= ((pow(2,(n/2)+1))-1);
        else
            {
           count= ((pow(2,((n+1/2)+1)))-2) ;
        }
        cout<<count<<"\n";
        
    }
    return 0;
}
