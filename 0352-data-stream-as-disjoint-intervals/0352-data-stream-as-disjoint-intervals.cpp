class SummaryRanges {
public:
    set<int> st;
    
    SummaryRanges() {
        st.clear();    
    }
    
    void addNum(int value) {
        st.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        vector<int>num(begin(st), end(st));
        // result
        vector<vector<int>> result;
        int n = num.size();
        for(int i=0; i<n; i++){
            int left = num[i];
            while(i < n-1 && num[i]+1 == num[i+1]){
                i++;
            }
            
            result.push_back({left, num[i]});
        }
        return result;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */