class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
       long r=n-index-1;
       long l=index;
       long h=maxSum,lo=1,res=0;
       while(lo<=h){
           long mid=(h-lo)/2+lo;
           long sum=mid;
           long ls=0,rs=0,m=mid-1;
           if(r<=m)
             rs=m*(m+1)/2-(m-r)*(m-r+1)/2;
           else
             rs=m*(m+1)/2+1*(r-m);
           if(l<=m)
             ls=m*(m+1)/2-(m-l)*(m-l+1)/2;
           else
             ls=m*(m+1)/2+1*(l-m);
          sum+=ls+rs;
          if(sum<=maxSum){
              res=mid;
              lo=mid+1;
          }
          else
            h=mid-1;
       } 
       return res;
    }
};