class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    int n;
    KthLargest(int k, vector<int>& nums) {
        n=k;
        for(auto i:nums)
         pq.push(i);
    }
    
    int add(int val) {
        pq.push(val);
        while(pq.size()>n)
          pq.pop();
        return pq.top();
    }
};