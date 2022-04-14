class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto it: nums){
            freq[it]++;
        }
        for(auto it: nums){
            if(freq[it]==1) return it;
        }
        return 0;
    }
};


/**
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for(auto it: nums){
            ans = ans ^ it;
        }
        return ans;
    }
};
*/
