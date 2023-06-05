class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int x1=c[0][0];
        int y1=c[0][1];
        int x2=c[1][0];
        int y2=c[1][1];
        for(int i=2;i<c.size();i++){
            int x=c[i][0];
            int y=c[i][1];
            if((y-y1)*(x-x2)!=(y-y2)*(x-x1))
             return 0;
        }
        return 1;
    }
};