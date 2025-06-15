#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int* start = arr;
    int* end = arr + N - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}