class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int c=matrix[0].size()-1;
        int r=0;
        while(r<matrix.size() && c>-1){
            int cur=matrix[r][c];
            if(cur==target)
            return 1;
            if(target>cur)
            r++;
            else
            c--;
        }
        return 0;
    }
};