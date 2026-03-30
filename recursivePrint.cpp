#include <bits/stdc++.h>
using namespace std;
void actualTable(int n,int a){
    if(a>10){
        return ;
    }
    cout << n << " x " << a << " = " << n*a<< endl;
    
    actualTable(n,a+1);
}
void printTable(int n){

    actualTable(n,1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    
    cout << "Enter positive integer : \n";
    cin >> n;
    
    printTable(n);


    return 0;
}