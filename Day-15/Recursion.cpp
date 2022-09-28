//Given a number and its reverse. Find that number raised to the power of its own reverse.
//Example : The reverse of 12 is 21 and 1221 , when divided by 1000000007 gives remainder as 864354781.


long long power(int N,int R)
    {
       if(R==0)
       {
           return 1;
       }
       
       long temp=power(N,R/2);
       long ans=(temp*temp)%1000000007;
       
       if(R%2==0)
       {
           return ans;
       }
       else{
           return ((ans*N)%1000000007);
       }
        
    }
