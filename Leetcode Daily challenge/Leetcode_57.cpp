class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
     int i=0,n=intervals.size();
     while(i<n && intervals[i][1]<newInterval[0])
      ans.push_back(intervals[i++]);
      vector<int>v=newInterval;
      while(i<n && intervals[i][0]<=newInterval[1]){
          v[0]=min(v[0],intervals[i][0]);
          v[1]=max(v[1],intervals[i++][1]);
      }   
      ans.push_back(v);
      while(i<n)
      ans.push_back(intervals[i++]);
      return ans; 
    }
};