class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix=1;
        vector<int>answer; answer.push_back(1);
        for(int i = 0; i<nums.size()-1; i++) {
           prefix *= nums[i];
            answer.push_back(prefix);
        }
        int postfix = 1;
        for(int i = answer.size()- 2; i >= 0; i--){
            postfix *= nums[i+1];
            answer[i]= answer[i] * postfix;
        }
        return answer;
    }
};
