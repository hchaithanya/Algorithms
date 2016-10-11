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
    int x1;
    int v1;
    int x2;
    int v2;
    int common=0;
    cin >> x1 >> v1 >> x2 >> v2;
    
    if((x2>x1)&&(v2>v1))
        {        cout<<"NO";
         common++;
        }
    if(common==0)
        {
    do{
        x1+=v1;
        x2+=v2;
        common++;
        }while(x1!=x2);

    if(x1==x2)
   cout<<"YES";
   else 
       cout<<"NO";
    }
    
    return 0;
}
