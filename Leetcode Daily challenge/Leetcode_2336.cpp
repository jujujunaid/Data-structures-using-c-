class SmallestInfiniteSet {
public:
int ans;
set<int>st;
    SmallestInfiniteSet() {
        ans=1;
    }
    
    int popSmallest() {
    if(st.size()){
        int a=*st.begin();
        st.erase(a);
        return a;
    }
    else{
        ans++;
        return ans-1;
    }
    }
    
    void addBack(int num) {
        if(ans>num)
        st.insert(num);
    }
};