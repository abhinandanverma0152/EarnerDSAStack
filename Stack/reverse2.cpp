#include <iostream>
#include <stack>
using namespace std;

void insertAtIndex(int idx, int val, stack<int>& st) {
    stack<int> helper;

    while (st.size() > idx) {
        helper.push(st.top());
        st.pop();
    }

    st.push(val);

    while (!helper.empty()) {
        st.push(helper.top());
        helper.pop();
    }
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    insertAtIndex(2, 50, st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}