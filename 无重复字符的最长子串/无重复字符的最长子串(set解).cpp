#include<bits/stdc++.h>

using namespace std;

class Solution {
	public:
		int lengthOfLongestSubstring(string s) {
			int ans = 0;
			set<char> save;
			for (int i = 0; i < s.size(); i++) {			
				int j = 0;
				while (i + j < s.size() && save.find(s[i + j]) == save.end()) {
					save.insert(s[i + j]);
					j++;
				};
				if(j > ans) ans = j;
				save.clear();
			}	
			return ans;
		}
};
