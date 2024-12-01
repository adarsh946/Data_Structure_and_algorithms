#include <iostream>
using namespace std;

int main( ){
    // finding out subarrays in the array.
    int n =5;
  int   arr[5] = {1, 2, 3, 4, 5};
    for (int st=0; st <n ; st++){
        for(int end = st ; end < n; end ++){
        for (int i=st ; i<=end; i++){
            cout << arr[i];
            
           }
           cout << " ";
        }
        cout  << endl  ; 
        }
        cout << "adarsh";

      //Brute force approach to find max subarray sum

// int n =5;
//   int   arr[5] = {1, 2, 3, 4, 5};
//   int maxSum = INT_MIN;
//     for (int st=0; st <n ; st++){
//      int currSum = 0;
//         for(int end = st ; end < n; end ++){
//            currSum += arr[end];
//            maxSum = max(currSum, maxSum);
//         }
//     }





        // // Kadane's algorithm to find maximum subarray sum  having time complexity O(n)
        //  int nums[] = {1,2,2};
        //   int currentSum =0;
        // int maxSum = INT_MIN;
        // for(int val : nums){
        //     currentSum += val;
        //     maxSum = max(currentSum, maxSum);
        //     if (currentSum < 0){
        //         currentSum = 0;
        //     }
        // }
        // return maxSum;
        
    
};