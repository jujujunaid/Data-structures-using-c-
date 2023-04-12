class Solution {
public:
    string simplifyPath(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
           if(s[i]=='//')
           st.push('/');
           if(st.empty() || s[i]!='.' || s[i]!='..'){
               st.push(s[i]);
           }
       } 
       if(st.top()=='/')
       st.pop();
       string str="";
       while(!st.empty()){
           str+=st.top();
           st.pop();
       }
       reverse(str.begin(),str.end());
       return str;
    }
};