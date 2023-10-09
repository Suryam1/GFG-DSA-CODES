#include <bits/stdc++.h>
using namespace std;

void f(int a[][100], int n, int m) { // Update the function parameter to accept a 2D array
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
        } else {
            for (int j = m - 1; j >= 0; j--) {
                cout << a[i][j] << " ";
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100]; // Use a fixed-size 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    f(a, n, m); // Pass the 2D array to the function
}
