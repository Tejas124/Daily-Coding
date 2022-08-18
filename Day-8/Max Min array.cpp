//GFG
//Given an array A of size N of integers. Your task is to find the sum of minimum and maximum elements in the array

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int max=A[0];
        int min=A[0];

        for(int i=0;i<N;i++)
        {
            if(max<A[i])
            {
                max=A[i];
            }
            
            if(min>A[i])
            {
                min=A[i];
            }
    
            
        }
        return max+min;
    }

};
