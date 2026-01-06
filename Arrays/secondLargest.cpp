// Approach: Single pass
// Time Complexity: O(N)
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int>& a) {
    int largest = a[0];
    int slargest = -1;
    if(a.size() < 2) {
        return -1;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > largest) {
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8,9};

    int ans = secondLargest(a);
    cout << "Second Largest Element is: " << ans;
}