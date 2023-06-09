class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       priority_queue<int>p(stones.begin(),stones.end());
       while(p.size()>1){
           int a=p.top();
           p.pop();
           int b=p.top();
           p.pop();
           if(a!=b)
             p.push(abs(a-b));
       } 
       if(p.size()==0)
        return 0;
        else
        return p.top();
    }
};