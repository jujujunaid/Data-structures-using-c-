class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
     sort(p.begin(),p.end());
        int c=1;
        int lp=p[0][1];
        for(auto i:p){
            if(i[0]>lp){
                c++;
                lp=i[1];
            }
            lp=min(lp,i[1]);
        }
        return c;   
    }
};