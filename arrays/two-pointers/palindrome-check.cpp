// Problem: Check if an Array is a Palindrome
// Approach: Two pointers from both ends, compare and move inward.
// If any pair doesn't match, it's not a palindrome.
// Time: O(n), Space: O(1)

#include<iostream>
using namespace std;
int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int left = 0;
    int right = 4;
    bool isPalindrome = true;
    while (left < right) {
        if (nums[left] != nums[right]) {
            isPalindrome = false;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        cout << "It is a palindrome";
    } else {
        cout << "It is not a palindrome";
    }
    return 0;
}
