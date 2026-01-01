#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int left = 0;
    int right = s.size()-1;
    bool isPar =true;
    while(left < right){
        if(s[left]!=s[right]){
            isPar = false;
            break ;
        }
        left++;
        right--;
    }
    if(isPar){
        cout << "Is palindrome";
    }
    else{
        cout << "It is not palindrome";
    }


    return 0;
}