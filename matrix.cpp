//program to print the absolute value of the sum of primary and secondary dialognal elements//
/*sample, n=3

11 2 4
4 5 6
10 8 -12
Sum across the primary diagonal: 11 + 5 - 12 = 4 
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15*/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;


int main(){
    int n;
    int sumi=0;
    int sumj=0;
    int absum=0;
    int a_i;
    int a_j;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for( a_i = 0;a_i < n;a_i++){
       for( a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
        }
      }
       for( a_i = 0;a_i < n;a_i++){
       for( a_j = 0;a_j < n;a_j++){

           if(a_i==a_j)
               {
               sumi+=a[a_i][a_j];
           }
           if((a_i + a_j)==n-1)
           {
              cout<<"the elements are"<<a[a_i][a_j]<<'\n';
               sumj+=a[a_i][a_j];
             }
       }
    }
    cout<<sumi<<"sum of primary diagonal"<<sumj<<"sum of secondary diagonal";
    absum=sumi-sumj;
    if(absum>0)
    cout<<"sum is"<<absum;
    else
      cout<<"the sum is"<<-(absum);
    
    return 0;
}