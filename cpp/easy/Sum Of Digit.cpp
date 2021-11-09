//FLOW006


#include <iostream>
using namespace std;
int main()
{
    int t; //test case
    cin>>t;
    
   
    
    for(int i=0;i<t;i++)
	{   int n;
	
        cin>>n;
         int m,r;
        int sum=0;
        
        while(n>0){
           m=n%10;    
        sum=sum+m;    
        n=n/10;
        
        }
       cout<<sum<<endl;
    }

     
       
    
}
