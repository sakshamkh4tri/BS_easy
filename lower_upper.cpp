//lower bound-- smalest index where arr[index]>=x

// linear search approach o(n)

// #include<bits/stdc++.h>
// using namespace std;
// int lowerbound(vector<int>&arr ,int x){
//     int n=arr.size();
//     for(int i=0; i<n; i++){
//         if(arr[i]>=x) return i;
//     }
//     return n;
// }
// int main()
// {
// vector<int>arr={1,2,3,3,7,8,9,9,9,11};
// cout<<lowerbound(arr,20);
// return 0;
// }

//binary search approach   o(log base 2 n)

// #include<bits/stdc++.h>
// using namespace std;
// int lowerbound(vector<int>&arr, int x){
//     int n=arr.size();
//     int ans=n;
//     int low=0; int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>=x){
//             ans=mid;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int main()
// {
// vector<int>arr={1,2,3,3,5,8,8,10,10,11};
// cout<<lowerbound(arr,1);
// return 0;
// }


// upper bound-- smallest index such that arr[index]>x; 

// #include<bits/stdc++.h>
// using namespace std;
// int lowerbound(vector<int>&arr, int x){
//     int n=arr.size();
//     int ans=n;
//     int low=0; int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>x){         // whole code is same only equals to is removed;
//             ans=mid;
//             high=mid-1;
//         }
//         else{  
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int main()
// {
// vector<int>arr={1,2,3,3,5,8,8,10,10,11};
// cout<<lowerbound(arr,1);
// return 0;
// }

// search insert position  (same as lower bound)

// #include<bits/stdc++.h>
// using namespace std;
// int searchinsertposition(vector<int>&arr,int x){
//     int n=arr.size();
//     int low=0;
//     int high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid = low+(high-low)/2;
//         if(arr[mid]>=x){
//             ans=mid;
//             high=mid-1;
//         }
//         else low=mid+1;
//     }
//     return ans;
// }
// int main()
// {
// vector<int>arr={1,2,4,7};
// cout<<searchinsertposition(arr,x);
// return 0;
// }

// floor and ceil in sorted arr

// #include<bits/stdc++.h>
// using namespace std;
// vector<int> floorandceilinsortedarr(vector<int>&arr,int x){
//     int n=arr.size();
//     int low=0; 
//     int high=n-1;
//     int floor=-1;
//     int ceil=-1;
//     while(low<=high){
//         int mid= low+(high-low)/2;
//         if(arr[mid]==x){
//             floor=arr[mid];
//             ceil=arr[mid];
//             break;
//         }
//         else if(arr[mid]<x) {
//             floor=arr[mid];
//             low=mid+1;
//         }
//         else{
//             ceil=arr[mid];
//             high=mid-1;
//         }
//     }
//     return {floor,ceil};
// }
// int main()
// {
    
// vector<int>arr={10,20,30,40,50};
// vector<int>result=floorandceilinsortedarr(arr,25);
// for(auto it : result){
//     cout<<it<<" "; 
// }

// return 0;
// }

