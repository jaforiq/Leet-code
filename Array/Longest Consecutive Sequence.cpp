class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>element(nums.begin(),nums.end());
        int max_ele=0,ele_count=0;
        for(int i=0; i<nums.size(); i++){
            int l= nums[i]; l--;
            if(element.count(l)==0){
                ele_count=0;
                for(int j=nums[i]; ; j++){
                    if(element.count(j)>0) ele_count++;
                    else break;
                }
                  max_ele= max(max_ele,ele_count);
            }
        }
        return max_ele;
    }
};
