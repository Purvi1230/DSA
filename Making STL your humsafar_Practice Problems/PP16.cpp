#include<bits/stdc++.h>
using namespace std;
#define int long long

class MinStack {
public:
    stack<int> st, minSt;

    MinStack() {}

    void push(int x) {
        if(st.empty()) {
            st.push(x);
            minSt.push(x);
            return;
        }
        st.push(x);
        minSt.push(min(minSt.top(), x));
        return;
    }

    void pop() {
        if(st.empty()) return;
        st.pop();
        minSt.pop();
    }

    int top() {
        if(st.empty()) return -1;
        return st.top();
    }

    int getMin() {
        if(minSt.empty()) return -1;
        return minSt.top();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q; cin >> q;

    MinStack s;

    while(q--) {
        string op;
        cin >> op;

        if(op == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if(op == "pop") {
            s.pop();
        }
        else if(op == "top") {
            cout << s.top() << "\n";
        }
        else if(op == "getMin") {
            cout << s.getMin() << "\n";
        }
    }

    return 0;
}