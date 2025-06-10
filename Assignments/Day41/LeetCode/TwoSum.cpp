#include<vector>
#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    /*vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int> res;
        map<int, int> diff;
        for(int i=0; i<nums.size(); ++i)
            diff.insert({target-nums[i],i});
        for(int i=0; i<nums.size(); ++i)
        {
            auto j=diff.find(nums[i]);
            if(j!=diff.end()&&j->second!=i)
            {
                 res.push_back(j->second);
                 res.push_back(i);
                 break;
            }
        }
        return res;
    }*/

    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0; i<nums.size(); ++i)
        {
            for(int j=i+1; j<nums.size(); ++j)
            {
                if(nums[i]+nums[j]==target)
                {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
    }
    
};

int main()
{
    Solution s;
    vector<int> testCase = {2, 7, 11, 15};
    vector<int> result = s.twoSum(testCase, 26);
    cout<<"["<<result.at(0)<<", "<<result.at(1)<<"]"<<endl;
}
