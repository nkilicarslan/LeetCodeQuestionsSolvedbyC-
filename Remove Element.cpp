using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == val) count++;
        }
        for (int i = 0; i < nums.size(); ++i) {
            bool is_found = false;
            if(nums[i] == val || nums[i] == -1){
                is_found = true;
            }
            for (int j = i+1; j < nums.size(); ++j) {
                if(is_found == true && nums[j] != val && nums[j] != -1){
                    nums[i] = nums[j];
                    nums[j] = -1;
                    break;
                }
            }
        }
        count = nums.size() - count;
        return count;
    }
};