#include<bits/stdc++.h>
using namespace std;

int digits(int n)
{
    int count=0;
    
    
    while(n>0)
    {
        n=n/10;
        
        count=count+1;     
    }
    
    
    
    return count;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<digits(n);
    
    return 0;
}