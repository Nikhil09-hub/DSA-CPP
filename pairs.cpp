#include <bits/stdc++.h>
using namespace std;
int main(){
    //Direct
    pair <int,int> my_pair;
    my_pair.first=10;
    my_pair.second=20;
    cout << my_pair.first << '\n' << my_pair.second;
    //Other way (Recommended)
    pair<int ,int> p={10,20};
    cout << '\n' << p.first << '\n'<< p.second;
    //vectors as pairs
    vector<pair<int,int>> vec;
    vec.push_back({10,20});
    //cannot print
    //cout << '\n' << vec[0];
    cout << '\n' << vec[0].first << "  " << vec[0].second << '\n';
    vector<pair<string, int>> students;
    students.push_back({"Rahul", 85});
    students.push_back({"Anita", 92});
    for(pair<string,int> p:students){
        cout << p.first << " scored " << p.second << " marks \n";
    }

    return 0;
}