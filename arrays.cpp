#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    int result = 0;
    for(int i =0;i<n;i++){
        result +=arr[i];
    }
    return result;

}
int max(int arr[],int n){
    int max_element= arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>max_element){
            max_element=arr[i];
        }
    }
    return max_element;

}
int main(){
    int n;
    cout << "Enter no of elemets in array:";
    cin >> n;
    int arr[n];
    cout <<"Enter elements of array\n";
    for(int i=0;i<n;i++){
        cout << "Enter element " << i+1 <<": ";
        cin >> arr[i];
    }
    cout <<"Elements of array\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout <<"\nSum of elements of array : " << sum(arr,n);
    cout << "\nMaximum element in the array : " << max(arr,n);
    return 0;
}