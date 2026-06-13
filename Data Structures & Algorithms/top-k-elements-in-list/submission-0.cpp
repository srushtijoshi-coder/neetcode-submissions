class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
     unordered_map<int, int> map;
     vector<int>output(k);

     for(int count:nums){
        map[count] += 1;
     } 

     priority_queue<pair<int,int>,
     vector<pair<int, int>>,
     greater<pair<int,int>>> pq;

     for(auto entry: map){

        pq.push({entry.second, entry.first});

        if(pq.size() > k){
            pq.pop();
        }
     }

     for(int i= k-1; i>=0; i--){
        output[i]= pq.top().second;
        pq.pop();
     }

     return output;


    }
};
