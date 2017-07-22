#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k=0; 
    int i,j,temp;
    int f=0;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
         
       // printf("%d",temp);
   while(i<k)
    {
        
        temp=a[0];
        for (j=0;j < n;j++)
        {
           
            a[j]=a[j+1];
            f++;
            //printf("%d\n",a[j]);
            
        }
      //  printf("%d\n",f);
        a[j-1]=temp;
       i++;
    }
        for(i=0;i < n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}