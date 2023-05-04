class Solution {
public:
    string predictPartyVictory(string s) {
     queue<int>r,d;
     int n=s.size();
     for(int i=0;i<n;i++)
       (s[i]=='R')?r.push(i):d.push(i);
     while(!r.empty() && !d.empty()){
         int ri=r.front(),di=d.front();
         r.pop(),d.pop();
         (ri<di)?r.push(ri+n):d.push(di+n);
     }
     return (r.size()>d.size())?"Radiant" :"Dire";
    }
};