/*A Discrete Mathematics professor has a class of n students. Frustrated with their lack of discipline, he decides to cancel class if fewer than k students are present when class starts.

Given the arrival time of each student, determine if the class is canceled.*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int pos=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
            if(a[a_i]=>0)
            pos++;
        }
         if(pos>=k)
            cout<<"NO\n";
        else 
            cout<<"YES\n";
    }
    return 0;
}
