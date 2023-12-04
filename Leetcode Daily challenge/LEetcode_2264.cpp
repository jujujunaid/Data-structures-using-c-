class Solution {
public:
    string largestGoodInteger(string num) {
      int r=-1;
      for(int i=0;i+2<num.length();i++)
        if(num[i]==num[i+1] && num[i+1]==num[i+2])
           r=max(r,num[i]-'0');
        return (r==-1)?"":string(3,'0'+r);
    }
};