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
    int t;
    cin >> t;

    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
            int a[n + 1];
        
        if(k != 0 && n % k) 
            cout << -1;
        
        else
        {
            
            int f = 0;
            for(int i = 1; i <= n; i++){
                f++;
               
                if(f> k)
                    a[i] = i - k;
                else a[i] = i + k;
                if(f== 2 * k) 
                    f = 0;
            }
            for(int i = 1; i <= n; i++)
                cout << a[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}