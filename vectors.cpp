#include <bits/stdc++.h>
using namespace std;

int findSum(vector<int> &v) {
    int result = 0;
    for(int x : v) {
        result += x;
    }
    return result;
}
int main(){
    //vector is an dynamic array (its size can grow and shrink)
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
     // Insert 4 at position 3 (which is before 5)
    v.insert(v.begin() + 3, 4);
    for(int x:v){
        cout << x << " ";
    }
    cout << "\nSize of vector : " << v.size() << "\n";
    // or 
    for(int i=0;i <v.size();i++){
        cout << v[i] << " ";
    }
    cout << "\nSum of elements : " << findSum(v);
    return 0;
    
}