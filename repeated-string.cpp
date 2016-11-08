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
#include <vector>#
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
    string s;
    cin >> s;
    long n;
    cin >> n;
   
long f = 0;
for (int i = 0; i < s.length(); ++i) 
{
    if (s[i] == 'a') {
        ++f;
    }
}
long r = n / s.length();
int left = n % s.length();
f *= r;
for (int i = 0; i < left; ++i)
{
    if (s[i] == 'a') 
    {
        ++f;
    }
}
cout <<f<<"\n";
return 0;

}



