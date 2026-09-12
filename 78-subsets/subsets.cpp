class Solution {
public: 
void getall(vector<int>&nums,vector<int>&ans, vector<vector<int>>&all, int i){
if(i==nums.size()){
    all.push_back(ans); 
    return;
}
ans.push_back(nums[i]);
getall(nums, ans,all,i+1);
ans.pop_back();
 getall(nums, ans,all,i+1); 
}

    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<vector<int>>all;
        vector<int>ans; 
        getall(nums,ans,all, 0);
        
   return all; }
};