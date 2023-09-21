class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
            v.push_back(nums1[i]);
        for(int i=0;i<nums2.size();i++)
            v.push_back(nums2[i]);
        sort(v.begin(),v.end());
        double n=0;
        if(v.size()%2==0){
            int d=v.size()/2;
             n=(v[d]+v[d-1])/2.0;
        }
        else{
           int d=v.size()/2.0;
           n=v[d]; 
        }
        return n;
    }
};