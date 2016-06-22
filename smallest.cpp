#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int smallest(int n)
{
  int a[20];
int small=0;
  for(int i=0;i<n,a[i]!=0;i++)
  {
    //if()
  
 // {
    a[0]=small;
     if(a[i]<small)
            small=a[i];
 // }
}
  return small;
}
int main(){
    int n;
    int small=0;
    int  count=0;
    cin >> n;
     
    vector<int> a(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> a[arr_i];
       }
       for(int i=0;i<n,a[i]>0;i++)
     
       //if(a[arr_i]!=0)
           {
            small=smallest(n);
           // a[arr_i]-=small;
           }
        //else 
        //  a[arr_i]=a[arr_i+1];
            for(int i=0;i<n,a[i]>0;i++)
            {
              a[i]-=small;
                count++;
            }
        
        cout<<count;
        
    
    return 0;
}