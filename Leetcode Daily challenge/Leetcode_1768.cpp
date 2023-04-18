class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        string s="";
       int i=0,j=0;
       while(i<w1.size() || j<w2.size()){
           if(i<w1.size())
             s+=w1[i++];
           if(j<w2.size())
            s+=w2[j++];
       }
        return s;
    }
};