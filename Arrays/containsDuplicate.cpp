// Time Complexity: O(n log n)
// Space Complexity: O(log n)

#include<iostream> 
#include<vector> 
#include<algorithm>
using namespace std;
bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> a={1,2,3,4,5,6,7,7};
    if(containsDuplicate(a)){
        cout<<"Contains Duplicate";
    }
    else{
        cout<<"Do not contain duplicate";
    }
}