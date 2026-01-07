#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i]; 
    }    
    int left = 0,right = v.size()-1;
    while(left<=right){
        while(left <= right && v[left]<0){
            left++;
        }
        while(left <= right && v[right]>0){
            right--;
        }
        if(left <= right){
            swap(v[left],v[right]);
                left++;
                right--;
            }
        }
    for(int x:v){
        cout << x << " " ;
    }
    return 0;
    }
