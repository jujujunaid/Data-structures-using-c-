class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector<vector<int>>v(m+1,vector<int>(n+1,0));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++)
               v[i][j]=nums1[i-1]==nums2[j-1]? 1+v[i-1][j-1]:max(v[i][j-1],v[i-1][j]);
        }
        return v[m][n];
    }
};