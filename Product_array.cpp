#include<iostream>
#include<vector>
using namespace std;

void demo(vector<int> a){
    int n = a.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    vector<int>ans(n);
    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]*a[i-1]; 
    }
    
    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]*a[i+1];    
    }
    
    for(int i=0; i<n; i++){
        ans[i]=prefix[i] * suffix[i];
        cout<<ans[i]<<" ";
    }
    
}
int main(){
    vector<int> arr={1,2,3,4};
    demo(arr);
}

// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> a){
//     int product=1;
//     for(int i=0; i<a.size(); i++){
//         product=a[i]*product;
//     }
//     for(int j=0; j<a.size(); j++){
//         cout<<product/a[j]<<" ";
//     }
// }

// int main() {
//     vector<int> arr={1,2,3,4};
//     demo(arr);

// }

// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> a){
//     for(int i=0; i<a.size(); i++){
//         int product=1;
//         for(int j=0; j<a.size(); j++){
//             if(i!=j){
//             product*=a[j];
//             }
//         }
//         cout<<product<<" ";
//     }
    
// }

// int main(){
//     vector<int> arr={1,2,3,4};
//     demo(arr);
// }


// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> a){
//     int i = 0;
//     int j = a.size() - 1;
//     int leftSum = 0;
//     int rightSum = 0;

    
//     while(i<=j){
//         if(leftSum<=rightSum){
//             leftSum+=a[i];
//             i++;
//         }
//         else{
//             rightSum+=a[j];
//             j--;
//         }
//         if(leftSum==rightSum && i==j){
//             cout<<a[i]<<" ";
//         }
//     }

// }

// int main() {
// 	vector<int> arr={1,3,4,3,6,7,3,1};
// 	demo(arr);

// }


// #include<iostream>
// #include <vector>
// using namespace std;

// void solution(vector<int> a,vector<int> b){
//     int start=0,currgas=0,totalgas=0,totalcost=0;
//     for(int i=0; i<a.size(); i++){
//         totalcost+=b[i];
//         totalgas+=a[i];
//         currgas+=a[i]-b[i];
//         if(currgas<0){
//             start=i+1;
//             currgas=0;
//         }
//     }
//      if(totalgas<totalcost){
//             cout<<"-1";
//         }
//         else{
//             cout<<start;
//         };
// }

// int main() {
//     vector<int> gas={1,2,4,5,9};
//     vector<int> cost={3,4,1,10,1};
//     solution(gas,cost);
// }


// #include<iostream>
// #include <vector>
// using namespace std;

// void demo(vector<int> a,int k){
//     for(int i=0; i<a.size()-k+1; i++){
//         int maxi=a[i];
//         for(int j=i; j<i+k; j++){
//             if(a[j]>maxi){
//                 maxi=a[j];
//              }
//         }
//             cout<<maxi<<" ";
//         }
// }

// int main() {
// 	vector<int> num={1,3,-1,-3,5,3,6,7};
// 	int k=3;
// 	demo(num,k);

// }
