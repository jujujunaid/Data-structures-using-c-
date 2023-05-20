class Solution {
public:
    void dfs(string s,string d,unordered_map<string,vector<pair<string,double>>>mp,unordered_map<string,int> &vis,double &ans,double temp){
        if(vis.count(s))
           return;
        if(s==d){
            ans=temp;
            return;
        }
         vis[s]=1;
         for(auto x:mp[s])
             dfs(x.first,d,mp,vis,ans,temp*x.second);
      return;
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q) {
       unordered_map<string,vector<pair<string,double>>>mp;
       for(int i=0;i<e.size();i++){
           mp[e[i][0]].push_back({e[i][1],v[i]});
           mp[e[i][1]].push_back({e[i][0],1.0/v[i]});
       } 
       vector<double>res;
       for(int i=0;i<q.size();i++){
           string s=q[i][0];
           string d=q[i][1];
           unordered_map<string,int>vis;
           double ans=-1.0;
           double temp=1;
           if(mp.count(s))
           dfs(s,d,mp,vis,ans,temp);
           res.push_back(ans);
       }
       return res;
    }
};