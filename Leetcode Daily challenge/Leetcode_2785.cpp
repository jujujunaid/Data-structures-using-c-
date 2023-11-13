class Solution {
public:
    string sortVowels(string s) {
      string st="";
      for(auto i:s)
        if(i=='A' ||i=='E' ||i=='I' ||i=='O' ||i=='U' ||i=='a' ||i=='e' ||i=='i' ||i=='o' ||i=='u') 
           st+=i;
    sort(st.begin(),st.end());
    int j=0; 
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u'){
            s[i]=st[j];
            j++;
        }
    }
    return s;
    }
};