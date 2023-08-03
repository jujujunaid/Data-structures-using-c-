class Solution {
public:
     void solve(string digit,string output, int id, vector<string>&ans,string maping[]){
         if(id>=digit.length()){
             ans.push_back(output);
             return;
         }
         int n=digit[id]-'0';
         string vl=maping[n];
         for(int i=0;i<vl.length();i++){
             output.push_back(vl[i]);
             solve(digit,output,id+1,ans,maping);
             output.pop_back();
         }
     }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        return ans;
        string output="";
        int id=0;
        string maping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,id,ans,maping);
        return ans;
    }
};