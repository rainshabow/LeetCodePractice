#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		bool isInside(string s, int begin, int end, char c) {
			for (int i = begin; i <= end; i++)
				if (c == s[i]) return 1;
			return 0;
		}

		int lengthOfLongestSubstring(string s) {
			if((int)s.size() <= 1) return (int)s.size();
			
			int i = 0, j = 0, ans = 0;
			while (j + 1 < (int)s.size())
				if (!isInside(s, i, j, s[j + 1])) {
					j++;
					if (j - i + 1> ans) ans = j - i + 1;
				} else i++;
				
			return ans;	
		}
};
