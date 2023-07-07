class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
      int mf=0,i=0;
      unordered_map<char,int>cc;
      for(int j=0;j<answerKey.length();j++){
          char ch=answerKey[j];
          cc[ch]++;
          mf=max(mf,cc[ch]);
          if(j-i+1>mf+k){
              cc[answerKey[i]]--;
              i++;
          }
      }  
      return answerKey.length()-i;
    }
};