#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class time{
public:
    int hh;
    int mm;
    int ss;
}t;
int main(){

    cin >>t.hh>>t.mm>>t.ss;
    //if(hh<7)
        t.hh+=12;
   // t.mm=t.mm;
    cout<<t.hh<<":"<<t.mm<<":"<<t.ss;
    return 0;
}