class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>mp;
        int row=grid.size(),col=grid[0].size(),ans=0;
        for(vector<int> row:grid)
          mp[row]++;
        for(int i=0;i<row;i++){
            vector<int>cl={};
            for(int j=0;j<col;j++)
              cl.push_back(grid[j][i]);
          ans+=mp[cl];
        }
        return ans;
    }
};