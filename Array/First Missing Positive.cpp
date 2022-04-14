class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>elements; int missing_ele=1, n= nums.size();
        for(int i=0; i<nums.size(); i++) elements.insert(nums[i]);
        for(int i=1; i<nums.size()+1; i++){
            if(elements.find(missing_ele) == elements.end()){
                return missing_ele;
            }
            missing_ele++;
        }
       return n+1;
    }
};
