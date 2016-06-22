/*program to find the fraction of positive, negative and zeros from an array of numbers*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    float pos,neg,zero;
    pos=neg=zero=0.0;
    float ps,ng,zr;
    ps=ng=zr=0.0;
    
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        if(arr[arr_i]>0)
            ps++;
        else if (arr[arr_i]<0)
            ng++;
          else 
            zr++;
    }
    pos=ps/n;
    neg=ng/n;
    zero=zr/n;
    cout<<pos<<'\n'<<neg<<'\n'<<zero<<'\n';
   
    return 0;
}