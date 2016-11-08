#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >>n>> k;
    vector<int> c(n);
    for(int i = 0;i < n;i++)
    {
       cin >> c[i];
    }
    int f=100;
    for(int i=0;i<n;i=k+i)
     {
        if(c[(i+k)%n]!=0)
        {
            f=f-3;
        }
        else
        {
            f=f-1;
        }    
    }
    cout<<f<<endl;
    return 0;
}
