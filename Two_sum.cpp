#include<iostream>
#include <vector>
using namespace std;

void demo(vector<int> a,int b){
    int l=0;
    int r=a.size()-1;
    while(l<r){
        if(b==a[l]+a[r]){
            cout<<a[l]<<" "<<a[r];
            return;
        }
        else if(b<a[l]+a[r]){
            r--;
        }
        else{
            l++;
        }
    }
}
                          
int main() {
	vector<int> arr={2,7,11,15};
	int target=9;
	demo(arr,target);
}
