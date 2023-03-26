class Solution {
public:
    int longestCycle(vector<int>& edges) {
       vector<int>dist(edges.size(),0);
       vector<bool>extra(edges.size(),0);
       vector<bool>visited(edges.size(),0);
       int ans=-1;
       for(int i=0;i<edges.size();i++){
           if(!visited[i])
           dfs(i,dist,visited,edges,0,ans,extra);
       } 
       return ans;
    }
    void dfs(int node,vector<int>&dist,vector<bool>&visited,vector<int>&edges,int distance,int& ans,vector<bool>&extra){
        if(node!=-1){
            if(!visited[node]){
                visited[node]=1;
                extra[node]=1;
                dist[node]=distance;
                dfs(edges[node],dist,visited,edges,distance+1,ans,extra);
            }
            else if(extra[node])
            ans=max(ans,distance-dist[node]);
            extra[node]=0;
        }
    }
};