// minimum in rotated sorted array

// #include<bits/stdc++.h>
// using namespace std;
// int mininrotatedsortedarr(vector<int>&arr){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int mini=INT_MIN;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(mini==INT_MIN) mini=arr[mid];   // first time update mini for further comparision
//         mini=min(mini,arr[mid]);
//         if(arr[low]<=arr[mid]){          // identifying the sorted part left or right half
//             mini=min(mini,arr[low]);     // if left part is sorted then obviously arr[low] will be mini
//             low=mid+1;
//         }
//         else{
//             mini=min(mini,arr[mid]);
//             high=mid-1;
//         }
//     }
//     return mini;
// }
// int main()
// {
// vector<int>arr={4,5,6,7,0,1,2,3};
// cout<<mininrotatedsortedarr(arr);
// return 0;
// }

// find out how many time array has been rotated

#include<bits/stdc++.h>
using namespace std;
int mininrotatedsortedarr(vector<int>&arr){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int mini=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[high]){  // if this cond get true means the search space is trimmed downed st we only left with soeted array not the rotated sortedarr
            mini=min(mini,arr[low]);   // if we reach to that situation that mean array is sorted and min will be arr[low]
            index=low;
            break;      // no need to check further
        }
        if(arr[low]<=arr[mid]){          // identifying the sorted part left or right half
            mini=min(mini,arr[low]);     // if left part is sorted then obviously arr[low] will be mini
            low=mid+1;
        }
        else{
            mini=min(mini,arr[mid]);     // if right half is sortd then obviously min will be arr[mid]
            high=mid-1;
        }
    }
    return index;
}
int main()
{
vector<int>arr={3,4,5,1,2};
cout<<mininrotatedsortedarr(arr);
return 0;
}
