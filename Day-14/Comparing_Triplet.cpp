//Hackerrank - Algorithms/Compare the triplet


vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> res;
    int a_count=0;
    int b_count=0;
    
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])
            a_count++;
        else if(a[i]<b[i])
            b_count++;
        else
            continue;
    }
    res.push_back(a_count);
    res.push_back(b_count);
    return res;
}
