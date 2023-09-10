#include <iostream>
using namespace std;

int hoarePartition(int *a, int low, int high) {
    int pivot = a[low];
    int i = low - 1, j = high + 1;
    while (true) {
        do {
            i++;
        } while (a[i] < pivot);

        do {
            j--;
        } while (a[j] > pivot);

        if (i >= j) {
            return j;
        }
        swap(a[i], a[j]);
    }
}

void quickSort(int *a, int low, int high) {
    if (low < high) {
        int pivot = hoarePartition(a, low, high);
        quickSort(a, low, pivot);
        quickSort(a, pivot + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}