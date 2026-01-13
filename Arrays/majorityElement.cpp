// Approach - Moore's Voting Algorithm
// TC- O(N)+O(N)
// SC- O(1)

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums){
    int n = nums.size();
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=nums[i];
        }
        else if(nums[i]==el){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(nums[i]==el){
            cnt1++;
        }
        if(cnt1>n/2){
            return el;
        }
    }
    return -1;
}
int main(){
    vector<int> a={2,2,1,1,1,2,2};
    cout<<"Majority element is: "<<majorityElement(a);
}