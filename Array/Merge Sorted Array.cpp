class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size1=m-1, size2=n-1, i= n+m-1;
          while(size2>=0){
              if(size1>=0 &&  nums1[size1]>nums2[size2]){
                  nums1[i--]= nums1[size1--];
              }
              else nums1[i--]= nums2[size2--];
          }

    }
};
