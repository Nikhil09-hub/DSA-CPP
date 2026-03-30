#include <bits/stdc++.h>
using namespace std;
void selectionSort(int n,vector<int> &arr){
    for(int i=0;i<n-1;i++){
        int maxIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex = j;
            }
        }
        swap(arr[i],arr[maxIndex]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] <<" " ;

    }
    cout << endl;

}
int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    selectionSort(n,arr);

    return 0;
}