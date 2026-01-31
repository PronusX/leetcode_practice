#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Solution {
public:
    static vector<int> findDisappearedNumbers(vector<int>& nums) {
        const size_t n = nums.size();
        vector<int> result;
        for (size_t i = 0; i < n; ++i) {
            if (const int idx = abs(nums[i]) - 1; nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        // 第二次遍历：找出未被标记的位置
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result;
    }
};

int main() {

    int num;
    vector<int> nums;
    while (cin>>num) {
        nums.push_back(num);
    }

    for (const auto& i : Solution::findDisappearedNumbers(nums)) {
        cout << i << endl;
    }

    return 0;
}