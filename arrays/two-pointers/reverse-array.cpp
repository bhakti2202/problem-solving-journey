// Problem: Reverse an Array
// Approach: Two pointers - one starting from the beginning (left), 
// one from the end (right). Swap elements at left and right, 
// then move both pointers toward the center until they meet.
// Time: O(n), Space: O(1)

#include<iostream>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int left = 0;
    int right = 4;

    while (left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;

        left = left + 1;
        right = right - 1;
    }

    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
