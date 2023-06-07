#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checker(int arr[], int mid, int high, int low, int a, int b) {
    int av = 1;
    int sum = 0;
    int k = 0;
    for (int i = 0; i < a; i++) {
        if (arr[i] - arr[k] <= mid) {
            continue;
        } else {
            k = i;
            av = av + 1;
        }
    }
    if (av >= b) {
        return 1;
    }
    return 0;
}

void solve() {
    int a, b;
    cin >> a >> b;
    int arr[a];
    long long int sum = 0;
    int big = 0;
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + a);
    long long int mid = 0;
    long long int high = arr[a - 1];
    int low = 0;
    int ans = -1;
    while (high >= low) {
        mid = (high + low) / 2;
        if (checker(arr, mid, high, low, a, b) == 0) {
            high = mid - 1;
        } else {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans + 1 << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t > 0) {
        t--;
        solve();
    }
    return 0;
}
