// Problem: sort 0s , 1s and 2s in an array
// Appraoch: Dutch National Flag Algorithm
// Time Complexity: O(N)
// Space Complexity: O(1)

#include<iostream>
#include<vector>
using namespace std;
void sortNumbers(vector<int>& nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main(){
    vector<int> a = {2,0,2,1,1,0};
    sortNumbers(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}