/*

Given an integer, n, traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide n(i.e.: count the number of times n divided by each digit d1 has a remainder of 0). Print the number of evenly divisible digits. */
int main(){
    int t;
    int rem;
    int n;
    int a[100];
    int no=1;
    int count=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        cin >> a[a0];
        
        no=a[a0];
        n=no;
        while(no>0)
            {
            rem=no%10;
            no=no/10;
                if(n%rem==0)
                    {
                    count++;
                }
            
        }
       cout<<count<<"\n"; 
    }
    return 0;
}