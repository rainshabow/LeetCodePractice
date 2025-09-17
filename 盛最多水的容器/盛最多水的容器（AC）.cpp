#include<bits/stdc++.h>

//AC�� 

using namespace std;

class Solution {
	public:
		int countWater(int i, int j, int hi, int hj) {
			return hi < hj ? hi * abs(i - j) : hj * abs(i - j);
		}

		int maxArea(vector<int>& height) {
			//Ԫ������2ʱ�޷�ʢˮ������0
			if (height.size() <= 1) return 0;

			int vMax = 0, v = 0;
			int left = 0, right = (int)height.size() - 1;
			while (left < right) {
				v = countWater(left, right, height[left], height[right]);
				if (vMax < v) vMax = v;

				if (height[left] < height[right]) left++;
				else right--;
			}
			
			return vMax;
		}
};


int main() {
	return 0;
}
