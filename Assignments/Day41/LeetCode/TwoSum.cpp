class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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
    }
};

int main()
{
    vector<int> testCase = {2, 7, 11, 15};
    vector<int> result = {testCase, 9};
    cout<<"["<<result.at(0)<<", "<<result.at(1)<<"]"<<endl;
}
