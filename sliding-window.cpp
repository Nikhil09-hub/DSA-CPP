#include  <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int windoSum = 0;
    int maxSum = 0;
    for(int i=0;i<k;i++){
        windoSum+=v[i];
    }
    maxSum=windoSum;
    // sliding the window
    for (int i = k; i < v.size(); i++) {
        windoSum = windoSum - v[i - k] + v[i];
        maxSum = max(maxSum, windoSum);
    }
    cout << maxSum;
    return 0;
}