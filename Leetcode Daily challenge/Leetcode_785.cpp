class Solution {
public:
bool dfs(int n,vector<int>& cl,vector<vector<int>>& graph,int col){
    cl[n]=col;
    for(auto ch:graph[n]){
        if(cl[ch]==-1){
            if(dfs(ch,cl,graph,1-col)==0)
             return 0;
        }
        else{
            if(cl[ch]==cl[n])
              return 0;
        }
    }
    return 1;
}
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
       vector<int>cl(n,-1);
       for(int i=0;i<n;i++){
           if(cl[i]==-1){
               if(dfs(i,cl,graph,0)==0)
                 return 0;
           }
       } 
       return 1;
    }
};