//Program to find the panagram of a given string//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char s[100];
    //int res[40];
    int f=0;
    for(int i=0;i<=40;i++)
        {
        cin>>s[i];
        if((s[i]>=65 && s[i]<=90)||(s[i]>=97&&s[i]<=122))
            {
            s[i]=0;
            f+=s[i];
        }
        else
            s[i++];
        
    }
    
        if(f==0)
            cout<<"pangram";
        else
            cout<<"not a pangram";
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

