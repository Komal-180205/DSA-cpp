// Approach : Binary Search
 
#include<iostream>
using namespace std;
bool isPerfectSquare(int num){
    int low=0;
    int high=num/2;
    while(low<=high){
        int mid=low+(high-low)/2;
        int sq=mid*mid;
        if(sq==num){
            return true;
        }
        else if(sq<num){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}
int main(){
    if(isPerfectSquare(9)){
        cout<<"true";
    }
}