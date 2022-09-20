//Hackerrank - Algorithms/Diagonal Difference

int diagonalDifference(vector<vector<int>> arr) {
    int sum1=0;
    int sum2=0;
    int diff;
    int n=arr.size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i]==arr[j])
                sum1+=arr[i][j];
            if(arr[i]==arr[n-j-1])
                sum2+=arr[i][j];
        }
    }
    
    diff=abs(sum1-sum2);
    return diff;
}
