class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	    
   	    long long int ans=0;
   	    
   	    bool prime[n+1];
   memset(prime,true,sizeof(prime));
   
   for(int p=2;p*p<=n;p++)
   {
       if(prime[p]==true)
       {
           for(int i=p*p;i<=n;i+=p)
               prime[i]=false;
       }
   }
   long long int sum=0;
   for(int i=2;i<=n;i++)
   {
       if(prime[i]==true)
           sum+=i;
   }   
   return sum;
   }
   	   
};
