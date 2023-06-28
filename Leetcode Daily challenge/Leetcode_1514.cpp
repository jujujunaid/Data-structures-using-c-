class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& sp, int start, int end) {
        vector<vector<pair<int,double>>>adj(n);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back({v,sp[i]});
            adj[v].push_back({u,sp[i]});
        }
        vector<double>dist(n,0.0);
        dist[start]=1.0;
        queue<int>q;
        q.push(start);
        while(!q.empty()){
            int cr=q.front();
            q.pop();
            for(auto i:adj[cr]){
                int nd=i.first;
                double prob=i.second;
                double np=dist[cr]*prob;
                if(np>dist[nd]){
                    dist[nd]=np;
                    q.push(nd);
                }
            }
        }
        return dist[end];
    }
};