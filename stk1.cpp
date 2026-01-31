#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    static vector<string> buildArray(const vector<int>& target, int n) {
        vector<string> result;
        for (int i = 1; i < target[0]; i++) {
            result.emplace_back("Push");
            result.emplace_back("Pop");
        }
        result.emplace_back("Push");
        for (int j = 1; j < target.size(); j++) {
            int sub =target[j]-target[j-1]-1;
            while (sub--) {
                result.emplace_back("Push");
                result.emplace_back("Pop");
            }
            result.emplace_back("Push");
        }



        return result;
    }
};

int main() {

    int n=0;
    vector<int> target;
    while (cin>>n) {
        target.push_back(n);
    }

    return 0;
}