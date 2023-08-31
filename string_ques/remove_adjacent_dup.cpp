class Solution {
public:
  string removeDuplicates(string s) {
    stack<char> st;
    st.push(s[0]);
    int i, n = s.length();
    for (i = 1; i < n; i++) {
      if ((st.empty()) || (st.top() != s[i])) {
        st.push(s[i]);
      } else {
        st.pop();
      }
    }
    string ans;
    while (!st.empty()) {
      ans.push_back(st.top());
      st.pop();
    }

    int start = 0, end = ans.length() - 1;
    while (start <= end) {
      swap(ans[start++], ans[end--]);
    }

    return ans;
  }
};