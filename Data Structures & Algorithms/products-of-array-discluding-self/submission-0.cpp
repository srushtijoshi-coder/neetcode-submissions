class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefproduct(n),suffproduct(n),res(n);

        prefproduct[0]=1;
        for(int i=1;i<n;i++){
            prefproduct[i]=prefproduct[i-1]*nums[i-1];
        }

        suffproduct[n-1]=1;
        for(int i=n-2; i>=0; i--){
            suffproduct[i]=suffproduct[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            res[i]= prefproduct[i]* suffproduct[i];
        }

        return res;

    }
};
