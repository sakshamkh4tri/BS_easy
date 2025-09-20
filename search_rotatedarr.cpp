// search in rotated sorted array having unique elements 

// #include<bits/stdc++.h>
// using namespace std;
// int searchinsortedarr(vector<int>&arr, int target){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==target) return mid;
//         if(arr[low]<=arr[mid]){    // this means left side is sorted
//             if(arr[low]<=target && arr[high]>=target){     // this checks if target is in left side or not
//                 high=mid-1;
//             }
//             else low=mid+1;      // if target is not found in left side eliminate it
//         }
//         else{          // this means right side is sorted
//             if(arr[mid]<=target && arr[high]>=target){
//                 low=mid+1;
//             }
//             else high=mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
// vector<int>arr={7,8,9,1,2,3,4,5,6};
// cout<<searchinsortedarr(arr,1);
// return 0;
// }

// search in rotated sorted array with having duplicates

#include<bits/stdc++.h>
using namespace std;
bool searchinsortedarr(vector<int>&arr, int target){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return true;
        if(arr[mid]==arr[low] && arr[mid]==arr[high]){ // only this is the condition where we cant identify the sorted portion
            low++; high++;           // so just trim down the search space till we are in the state of identifying
            continue;         // what if the next trimmed element is also same so trim it till that state
        }
        if(arr[low]<=arr[mid]){    // this means left side is sorted
            if(arr[low]<=target && arr[high]>=target){     // this checks if target is in left side or not
                high=mid-1;
            }
            else low=mid+1;      // if target is not found in left side eliminate it
        }
        else{          // this means right side is sorted
            if(arr[mid]<=target && arr[high]>=target){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return false;
}
int main()
{
    vector<int>arr={7,8,9,1,2,3,4,5,6};
    cout<<searchinsortedarr(arr,1);
return 0;
}