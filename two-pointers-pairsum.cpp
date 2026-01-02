#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 3, 4, 6, 8, 10};
    int target =14;
    int left = 0,right = v.size()-1;
    int sum ;
     bool found ;
    while(left<right){
        sum = v[left]+v[right];
        if(sum==target){
             cout << "Found: " << v[left] << " + " << v[right] << " = " << target ;
              found  = true;
             break;
        }
        else if (sum < target){
            left++;
        }
        else{
            right--;
        }
    }
    if(!found){
        cout << "\nNo pair found";
    }
    return 0;
}