#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n, q1;
        cin >> n >> q1;
        //Create a queue to store all notification
        queue<pair<int,int>> q;
        //Create a queue for each application
        queue<int> q2[n+1];
        int cur = 0;
        bool mark[q1+1] = {};
        int i = 1;
        while(q1--) {
            int t, x;
            cin >> t >> x;
            if(t == 1) {
                //Push notifiation with query id in application x
                q2[x].push(i);
                //Push notification in a queue
                q.push({i, x});
                cur++;
                i++;
            }
            else if(t == 2) {
                //Empty all notifications from queue x
                while(!q2[x].empty()) {
                    int y = q2[x].front();
                    //Pop the notification and marked it as 1
                    q2[x].pop();
                    mark[y] = 1;
                    cur--;
                }
            }
            else {
                //Pop notification from q until it's id <= x
                while(!q.empty() && q.front().first <= x) {
                    int a = q.front().first;
                    int b = q.front().second;
                    //Pop notification from queue
                    q.pop();
                    //If the notification is not already popped out, then popped it from
                    //that application queue as well.
                    if(!mark[a]) {
                        mark[a] = 1;
                        q2[b].pop();
                        cur--;
                    }
                }
            }
            cout << cur << "\n";
        }
    }
    return 0;
}