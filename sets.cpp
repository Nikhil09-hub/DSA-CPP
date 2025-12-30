#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> my_set;
    my_set.insert(10);
    my_set.insert(10);
    my_set.insert(20);
    my_set.insert(30);
    my_set.insert(40);
    for(auto it = my_set.begin();it != my_set.end();it++){
        cout << *it << "\n";
    }
    //finding element in set
    if(my_set.find(10)!=my_set.end()){
        cout << "Element exists";
    }else{
        cout << "Element Does Not Exists";
    }
    vector<int> v;
    v={10,10,12,15,16};
    cout << "\n";
    //removing duplicates
    unordered_set<int> s(v.begin(),v.end());
    for(auto it =s.begin(); it != s.end();it++){
        cout << *it << "\n";
    }
    //checking duplicates
    unordered_set<int> new_set;
    for (int x:v){
        if(new_set.find(x)!=new_set.end()){
            cout << "Duplicate element : " << x ;
            break;//if duplicate found loop stops
        }
        new_set.insert(x);
    }
    cout << "\n";
    for(auto it=new_set.begin();it != new_set.end();it++){
        cout << *it << "\n";
    }
//set.erase(element),set.size();


    return 0;
}