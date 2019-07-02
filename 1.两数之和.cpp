/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
 using namespace std;

class Solution {
public:
    static bool myfunction (pair<int,int> i, pair<int,int> j) { return (i.first<j.first); }
    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<pair<int,int> > tmps;
        for(int i=0;i<nums.size();i++){
            tmps.push_back(make_pair(nums[i],i));
        }
        sort(tmps.begin(),tmps.end(),myfunction);
        
        
        int i=0,j=nums.size()-1;
        while(i<j){
            if(tmps[i].first+tmps[j].first<target){
                i++;
            }
            else if(tmps[i].first+tmps[j].first>target){
                j--;
            }
            else{
                result.push_back(tmps[i].second);
                result.push_back(tmps[j].second);
                return result;
            }
        }
        return result;
    }
};

