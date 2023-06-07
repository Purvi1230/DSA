#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int mid, int K) {
    int count = 0;
    for (int i = 1; i < arr.size(); i++) {
        int diff = arr[i] - arr[i - 1];
        count += (diff - 1) / mid;
    }
    return count <= K;
}

int findMinSeparation(vector<int>& arr, int K) {
    int low = 1, high = arr.back() - arr[0], ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(arr, mid, K)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int minSeparation = INT_MAX;
        for (int i = 1; i < N; i++) {
            minSeparation = min(minSeparation, arr[i] - arr[i - 1]);
        }

        int maxSeparation = arr[N - 1] - arr[0];
        cout << findMinSeparation(arr, K) << "\n";
    }

    return 0;
}
