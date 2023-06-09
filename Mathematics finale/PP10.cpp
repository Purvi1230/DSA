#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    int arr[N]; // note that N and n are different.
    for (int i = 0; i < N; i++)
        arr[i] = 0;

    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;

        // Use the technique of partial sum to build the value at each index.
        arr[l]++;
        arr[r + 1]--;
    }

    // Build the prefix sum.
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];

    // Keep the values 1 where values >= k, or else 0.
    for (int i = 1; i < N; i++)
        arr[i] = (arr[i] >= k);

    // Build prefix sum on this 0/1 array to get the count of positions.
    int prefixSum[N];
    prefixSum[0] = 0;
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        // Count the number of 1 positions in O(1).
        int ans = prefixSum[r] - prefixSum[l - 1];
        cout << ans << "\n";
    }

    return 0;
}
