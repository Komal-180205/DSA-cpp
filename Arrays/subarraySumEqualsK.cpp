#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> preSumMap;
    int n = nums.size();
    int count = 0;
    int sum = 0;
    preSumMap[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            count += preSumMap[rem];
        }
        preSumMap[sum]++;
    }
    return count;
}
int main(){
    vector<int> nums = {1,2,3,-3,6,5,2,4};
    int k=3;
    cout<<"Number of Subarrays: "<<subarraySum(nums,k);
}