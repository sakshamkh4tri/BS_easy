//recursive code

#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>&arr, int target, int low ,int high){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target){
       return binarysearch(arr,target,low,mid-1);
    }
    else{
       return binarysearch(arr,target,mid+1,high);
    }
    return -1;
}
int search(vector<int>&arr, int target){
    return binarysearch(arr,target,0,arr.size()-1);
}
int main()
{
    
    vector<int>arr={3,4,6,7,9,12,16,17};
   cout<<binarysearch(arr,6,0,7);


return 0;
}

// iterative code

// #include<bits/stdc++.h>
// using namespace std;
// int binarysearch(vector<int>&arr, int n, int target){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==target) return mid ;
//         else if(arr[mid]>target) high=mid-1;
//         else low=mid+1;
//     }
//     return -1; 
// }
// int main()
// {
    
//     vector<int>arr={3,4,6,7,9,12,16,17};
//     cout<<binarysearch(arr,8,6);
    

// return 0;
// }