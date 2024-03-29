#include <bits/stdc++.h>
using namespace std;

signed main() {
    // Disable synchronization between C++ standard streams and C standard streams for faster I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testcases;
    cin >> testcases;

    int freq[1000001] = {0};

    while (testcases--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = k;
        int start = 0;
        int current = 0;
        int currSum = 0;

        while (current < n) {
            if (freq[arr[current]] == 0)
                currSum++;

            freq[arr[current]]++;

            if (current >= k) {
                freq[arr[current - k]]--;
                if (freq[arr[current - k]] == 0)
                    currSum--;
            }

            if (current >= k - 1)
                ans = min(ans, currSum);

            current++;
        }

        for (int i = n - k; i < n; i++) {
            // Only the frequency of last k elements is set,
            // so for the next testcase, making it zero.
            freq[arr[i]]--;
        }

        cout << ans << "\n";
    }

    return 0;
}
