class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int res=0;

        for(int val : nums){
            st.insert(val);
        }

        for(int val : nums){

            if(st.find(val)!= st.end() && st.find(val-1)== st.end()){

                int curr = val, count =0;
                while(st.find(curr)!= st.end()){
                    curr +=1;
                    count +=1;
                }

                res = max(res,count);
            }
        }

        return res;
        
    }
};
