class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int winner=0,vote_count=0;
        for(int i=0; i<nums.size(); i++){
            if(vote_count==0) {
                winner= nums[i];
            }
            if(winner == nums[i] ){
                vote_count++;
            }else vote_count--;
        }
        return winner;
    }
};
