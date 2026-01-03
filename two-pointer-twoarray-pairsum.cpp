#include <bits/stdc++.h>
using namespace std;
int main() {
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int target = 8;
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int i = 0, j = m - 1;
    bool found = false;
    while (i < n && j >= 0) {
        int sum = A[i] + B[j];
        if (sum == target) {
            cout << A[i] << " + " << B[j] << " = " << target;
            found = true;
            break;
        } else if (sum < target) {
            i++;
        } else {
            j--;
        }
    }

    if (!found) {
        cout << "Not found";
    }

    return 0;
}
