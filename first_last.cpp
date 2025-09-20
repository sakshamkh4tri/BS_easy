// #include<bits/stdc++.h>
// using namespace std;
// int lowerbound(vector<int>&arr, int x){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>=x){
//             ans=mid;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     return ans;
// }

// int upperbound(vector<int>&arr, int x){
//     int n=arr.size();
//     int low=0; 
//     int high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>x){
//             ans=mid;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     return ans;
// }

// vector<int> firstandlastoccurance(vector<int>&arr, int x){
//     return {lowerbound(arr,x), upperbound(arr,x)-1};
// }
// int main()
// {
// vector<int>arr={2,4,6,8,8,8,11,13};
// vector<int>result=firstandlastoccurance(arr,8);
// for(auto it : result){
//     cout<<it<<" ";
// }
// return 0;
// }

// simple binary search without lower and upperbound

// #include<bits/stdc++.h>
// using namespace std;
// int firstoccurance(vector<int>&arr, int x){
//     int n=arr.size();
//     int low=0; 
//     int high=n-1;
//     int first=-1;
//     while(low<=high){
//         int mid= low+(high-low)/2;
//         if(arr[mid]==x){
//             first=mid;
//             high=mid-1;
//         }
//         else if(arr[mid]<x) low=mid+1;
//         else high=mid-1;
//     }
//     return first;
// }

// int lastoccurance(vector<int>&arr, int x){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int last=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==x){
//             last=mid;
//             low=mid+1;
//         }
//         else if(arr[mid]>x) high=mid-1;
//         else low=mid+1;
//     }
//     return last;
// }

// vector<int> firstandlastoccurance(vector<int>&arr, int x){
//     int first = firstoccurance(arr,x);
//     if(first==-1) return {-1,-1}; // because if there is no first occ so there will be no last occ too
//     int last= lastoccurance(arr,x);
//     return{first,last};
// }
// int main()
// {
//     vector<int>arr={2,4,6,8,8,8,11,13};
//     vector<int>result=firstandlastoccurance(arr,8);
//     for(auto it : result){
//         cout<<it<<" ";
//     }
// return 0;
// }

// finding number of occurance

#include<bits/stdc++.h>
using namespace std;
int firstoccurance(vector<int>&arr, int x){
    int n=arr.size();
    int low=0; 
    int high=n-1;
    int first=-1;
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    return first;
}

int lastoccurance(vector<int>&arr, int x){
    int n=arr.size();
    int low=0;
    int high=n-1;
    int last=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return last;
}

int numberofoccurance(vector<int>&arr, int x){
    int first = firstoccurance(arr,x);
    // if(first==-1) return {-1,-1}; // because if there is no first occ so there will be no last occ too
    int last= lastoccurance(arr,x);
    return last-first+1;
}
int main()
{
    vector<int>arr={2,4,6,8,8,8,11,13};
    cout<<numberofoccurance(arr,11);
return 0;
}