/*

Given an integer, n, traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide n(i.e.: count the number of times n divided by each digit d1 has a remainder of 0). Print the number of evenly divisible digits. */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,number=0;
    cin >> t;
   
    int n;
    int num;
   // vector<int>n;
    
    for(int i = 0; i < t; i++)
    {
        cin>>n;
         int f=0;
        number=n;
       do{
            
               // cout<<"Number is"<<number<<endl;
            num=number%10;
            if((num!=0)&&(n%num==0))
              {  f++;
              }
               
           number/=10;
            }while(number!=0);
        cout<<f<<endl;
    
    }
}
