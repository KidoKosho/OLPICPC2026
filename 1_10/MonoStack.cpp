#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> MonoStack(const vector<int>& a) {
    int n = a.size();
    vector<int> nxt(n, -1); 
    stack<int> st;         
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > a[st.top()]) {
            nxt[st.top()] = a[i]; 
            st.pop();          
        }
        st.push(i); 
    }
    return nxt;
}

int main() {
    vector<int> a = {4, 5, 2, 25};
    vector<int> result = MonoStack(a);
    
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}