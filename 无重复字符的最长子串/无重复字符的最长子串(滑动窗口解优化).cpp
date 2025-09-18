#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		int isInside(string s, int begin, int end, char c) {
			for (int i = begin; i <= end; i++)
				if (c == s[i]) return i;
			return -1;
		}

		int lengthOfLongestSubstring(string s) {
			int length = (int)s.size();
			if (length <= 1) return length;

			int i = 0, j = 0, ans = 0;
			while (j + 1 < length) {
				int res = isInside(s, i, j, s[j + 1]);
				if (res == -1) {
					j++;
					if (j - i + 1 > ans) ans = j - i + 1;
				} else i = res + 1;
			}
			return ans;
		}
};
