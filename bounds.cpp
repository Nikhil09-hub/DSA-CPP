#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v={1,2,4,4,4,5,6,7};
    //lower_bound -> first element  ≥ x
    //upper_bound -> first element > x
    auto lb = lower_bound(v.begin(),v.end(),4);
    auto ub = upper_bound(v.begin(),v.end(),4);
    //count = dfference of upper bound and lower bound
    cout << "Count : " << ub-lb;
    // result of differences of two iterators is integer
    cout << "\nStart index : " << lb - v.begin() ;
    //cout << "Iterator address : " << &(*lb);
    cout << "\nEnd Index : " << ub-v.begin()-1;



    return 0;
}