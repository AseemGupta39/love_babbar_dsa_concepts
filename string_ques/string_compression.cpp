class Solution {
public:
  int compress(vector<char> &chars) {
    int i = 0, l = chars.size(), ans_index = 0, j = 0, count;

    if (l == 1) {
      return 1;
    }

    while (i < l) {

      j = i + 1;
      while (j < l && chars[i] == chars[j]) {
        j++;
      }

      chars[ans_index++] = chars[i];
      count = j - i;

      if (count > 1) {
        string cnt = to_string(count);
        for (char ch : cnt) {
          chars[ans_index++] = ch;
        }
      }
      i = j;
    }
    return ans_index;
  }
};