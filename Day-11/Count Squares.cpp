//You are given a number N, you have to output the number of integers less than N in the sample space S.

int countSquares(int N) {
        int count=0;
        
        for(int i=1;i<sqrt(N);i++)
        {
            if((i*i)<N)
                count=count+1;
        
            
        }
        
        return count;
    }
