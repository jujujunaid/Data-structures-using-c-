class Solution {
public:
    int partitionString(string s) {
        int c=1;
        set<int>st;
        for(auto i:s){
            if(st.find(i)!=st.end()){
                st.clear();
                c++;
            }
            st.insert(i);
        }
        return c;
    }
};