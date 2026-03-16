#include <bits/stdc++.h>
#include<vector>
using namespace std;

void demo(vector<int> a){
    int maxwater=0;
    for(int i=0; i<a.size(); i++){
        for(int j=i+1; j<a.size(); j++){
            int w,h,area;
            w=j-i;
            h=min(a[i],a[j]);
            area=w*h;
            maxwater=max(maxwater,area);
        }
    }
    cout<<maxwater;
}

int main() {
	vector<int> arr={3, 1, 2, 4, 5};
	demo(arr);
}


// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;

// void demo(vector<int> a){
//   int l=0;
//   int r=a.size()-1;
//   int maxwater=0;
//   while(l<r){
//       int w,h,area;
//       w=r-l;
//       h=min(a[l],a[r]);
//       area=w*h;
//       maxwater=max(maxwater,area);
//       a[l] < a[r] ? l++ : r--;
//   }
//   cout<<maxwater;
// }

// int main() {
// 	vector<int> arr={2, 1, 8, 6, 4, 6, 5, 5};
// 	demo(arr);
// }
