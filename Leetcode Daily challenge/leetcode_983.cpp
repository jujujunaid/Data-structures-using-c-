class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
       int ans=0;
       queue<pair<int,int>>week;
       queue<pair<int,int>>month;
       for(auto day:days){
           while(!month.empty() && month.front().first+30 <=day)
           month.pop();
           while(!week.empty() && week.front().first+7<=day)
           week.pop();
           week.push(make_pair(day,ans+cost[1]));
           month.push(make_pair(day,ans+cost[2]));
           ans=min(ans+cost[0],min(week.front().second,month.front().second));
       } 
       return ans;
    }
};