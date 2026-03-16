#include<iostream>
#include <vector>
using namespace std;

void demo(vector<int> a){
    int water=0;
    for(int i=0; i<a.size(); i++){
        int l=a[i];
        for(int j=0; j<i; j++){
            l=max(l,a[j]);
        }
        int r=a[i];
        for(int j=i+1; j<a.size(); j++){
            r=max(r,a[j]);
        }
         water+=min(l,r)-a[i];
    }
    cout<<water;
}

int main() {
vector<int> arr={3,0,1,0,4,0,2};	
demo(arr);
}


// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> height){
//     int n=height.size();
//     vector<int>l(n,0);
//     vector<int>r(n,0);
//     int water=0;
//     l[0]=height[0];
//     r[n-1]=height[n-1];
//     for(int i=1; i<n; i++){
//         l[i]=max(l[i-1],height[i]);
//     }
//     for(int j=n-2; j>=0; j--){
//         r[j]=max(r[j+1],height[j]);
//     }
//     for(int i=0; i<n; i++){
//         water+=min(l[i],r[i])-height[i];
//     }
//     cout<<water;
// }

// int main() {
// vector<int> arr={3,0,1,0,4,0,2};	
// demo(arr);
// }


// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> height){
//     int n=height.size();
//     int water=0;
//     int l=0,r=n-1;
//     int lmax=0,rmax=0;
//     while(l<r){
//         lmax=max(lmax,height[l]);
//         rmax=max(rmax,height[r]);
        
//         if(lmax<rmax){
//             water+=lmax-height[l];
//             l++;
//         }
//         else{
//             water+=rmax-height[r];
//             r--;
//         }
        
//     }
//     cout<<water;

// }

// int main() {
// vector<int> arr={3,0,1,0,4,0,2};	
// demo(arr);
// }
