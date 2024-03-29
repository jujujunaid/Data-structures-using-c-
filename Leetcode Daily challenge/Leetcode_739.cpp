class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
      vector<int>v;
      int n=t.size()-1;
      stack<int>s;
      for(int i=n;i>=0;i--){
          if(s.empty()){
              s.push(i);
              v.push_back(0);
          }
          else{
              while(!s.empty() && t[s.top()]<=t[i]){
                  s.pop();
              }
              if(s.empty()){
                  s.push(i);
                  v.push_back(0);
              }
              else{
                  v.push_back(s.top()-i);
                  s.push(i);
              }
          }
      }
      reverse(v.begin(),v.end());
      return v;
    }
};