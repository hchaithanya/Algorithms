//program to print a staircase pattern//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
int n;
cin >> n;
int a=n-1;

for(int i=1; i<=n; i++)
{
for(int j=0; j < a; j++){
cout<<" ";
}

for(int k=0; k < i; k++)
{
cout<<"#";
}
cout<<endl;
//b++;
a--;

}
return 0;
}