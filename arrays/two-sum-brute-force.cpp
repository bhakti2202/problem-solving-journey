// Problem: Two Sum
// Approach: Brute force - check every pair using nested loops
// Time: O(n^2), Space: O(1)

#include<iostream>
using namespace std;

int main() {
    int nums[] = {2, 10, 15, 5, 20};
    int target = 7;
    
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j] << endl;
            }
        }
    }
    
    return 0;
}
