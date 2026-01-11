// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
// The relative order of the elements should be kept the same.
// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​.After removing duplicates, return the number of unique elements k.

// Problem: Remove Duplicates from Sorted Array
// Approach: Two Pointers
// Time: O(n)
// Space: O(1)

#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    vector<int> a={1,1,1,1,2,3,4,5,5,5,6,7,8,9,9,9};
    int unique=removeDuplicates(a);
    cout<<"Number of Unique Elements: "<<unique<<endl;
}