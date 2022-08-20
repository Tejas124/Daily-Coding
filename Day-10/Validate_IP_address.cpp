/*The function returns 1 if IP string is valid else return 0*/
    
int isValid(string s) {
    int count=0;
    //check whether there are 3 '.'
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            count++;
        }
    }
    if(count!=3)
        return 0;

    //check whether string is in the range 0-255
    unordered_set<string> st;
    for(int i=0;i<256;i++)
    {
        st.insert(to_string(i));
    }

    count=0;

    string temp="";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='.')
            temp=temp+s[i];
        else{
            if(st.count(temp)!=0)
                count++;

            temp="";

        }
    }
    if(st.count(temp)!=0)
        count++;

    if(count==4)
        return 1;
    else
        return 0;


}
