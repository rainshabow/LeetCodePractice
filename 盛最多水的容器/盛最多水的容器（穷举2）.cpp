#include<bits/stdc++.h>

//穷举法2

using namespace std;

class Solution {
	public:
		int countWater(int i, int j, int hi, int hj) {
			return hi < hj ? hi * abs(i - j) : hj * abs(i - j);
		}

		int maxArea(vector<int>& height) {
			//元素少于2时无法盛水，返回0
			if (height.size() <= 1) return 0;

			int vMax = 0;
			for (int i = 0; i < (int)height.size() - 1; i++)
				for (int j = i + 1; j < (int)height.size(); j++) {
					int v = countWater(i, j, height[i], height[j]);
					if (v > vMax) vMax = v;
				}

			return vMax; 
		}
};


int main() {
	return 0;
}
