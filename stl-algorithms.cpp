//standard template library
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v={10,20,43,63,76,89};
    cout << "Vector elements : ";
    for(auto it=v.begin();it != v.end();it++){
        cout << *it << " ";
    }
    cout << "\n";
    sort(v.begin(),v.end());
    cout << "Vector elements after sorting: ";
    for(auto it=v.begin();it != v.end();it++){
        cout << *it << " ";
    }
    //:find(start, end, value) searches linearly in a vector
    if(find(v.begin(),v.end(),10)!=v.end()){
        cout << "\n" << "Element exists\n";
    }
    else{
        cout << "\n" << "Element not exists\n";
    }
    vector<int> rv= v;
    reverse(rv.begin(),rv.end());
    cout << "Vector elements after reveesing: ";
    for(auto it=rv.begin();it != rv.end();it++){
        cout << *it << " ";
    }
    int mx =*max_element(v.begin(),v.end());
    int mn =*min_element(v.begin(),v.end());
    cout << "\nMinimum element : "<< mn << "\nMaximum element : " << mx << "\n";
    return 0;

}