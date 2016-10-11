#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int  hh,mm,ss;
    char time[2];
    cin >>hh>>mm>>ss;
    cin>>time;
   if((strcmp(time,"PM")==0)&&(hh==12))
       cout<<"12:"<<mm<<":"<<ss;
     if((strcmp(time,"AM")==0)&&(hh==12))
         cout<<"00:"<<mm<<":"<<ss;
        if(strcmp(time,"PM")==0)
            {
            hh+=12;
            cout<<hh<<":"<<mm<<":"<<ss;
        }
    else
      cout<<hh<<":"<<mm<<":"<<ss;  
       
    return 0;
}
