#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
   
    vector<int> ans;
    int n = nums.size();

    // brute force approach...

    // for(int i = 0; i< n; i++){
    //     for(int j = i+1; j< n; j++){
    //         if(nums[i] + nums[j] == target){
    //           ans.push_back(nums[i]); 
    //           ans.push_back(nums[j]); 
    //           return ans;
    //         }
    //     }
    // }
    // return ans;

    // Optimal approach

    int i =0, j = n-1;
    while( i < j ){
        int sum = nums[i] + nums[j];
        if(sum > target){
            j--;
        }else if(sum < target){
            i++;
        }else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
} 

int main(){
    int target = 9;
    vector<int> nums ={2, 7, 8, 11};
   vector <int> ans = pairSum(nums, target);
   cout << ans[0] << ", " << ans[1];
}