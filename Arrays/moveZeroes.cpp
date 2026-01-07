// Approach : Two Pointer
// Time Complexity : O(N)
// Space Complexity : O(1)

#include<iostream>
#include<vector> 
using namespace std;

void moveZeroes(vector<int>& nums){
    int n=nums.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
}
int main(){
    vector<int> a={1,0,2,0,3,0,4,0};
    moveZeroes(a);
    for(int x:a){
        cout<<x<<" ";
    }
}