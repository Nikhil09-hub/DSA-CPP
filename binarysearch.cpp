#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> v,int key){
    return binary_search(v.begin(),v.end(),key);
}
int main(){
    vector<int> v={1,2,3,4,7,6};
    bool result = search(v,8);
    if (result){
        cout << "Element found\n"; 
    }
    else{
        cout << "Element not found\n";
    }


    return 0;
}