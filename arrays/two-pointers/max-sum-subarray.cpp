// Problem: Maximum Sum of a Subarray of Size K
// Approach: Brute force - for each starting index, sum k consecutive 
// elements and track the maximum sum found.
// Time: O(n*k), Space: O(1)

#include <iostream>
using namespace std;

int main()
{
   int nums[] = {2, 1, 5, 1, 3, 2}; 
   int k = 3;
   int arraySize = 6; 

   int maxSum = 0;  // or a very small number
   for (int start = 0; start <= arraySize - k; start++)
      {
       int windowSum = 0;
       for (int i = start; i < start + k; i++) {
        windowSum = windowSum + nums[i];
      }
        if( windowSum > maxSum)
        {
          maxSum = windowSum;
        }
    }

    cout << "Max sum: " << maxSum << endl;
    return 0;
}
