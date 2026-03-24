#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main() {
    std::vector<int> nums(30);
    int n;

    for(int i = 0; i < 30; i++)
        nums[i]=i+1;

    for(int i = 0; i < 28; i++) {
        std::cin >> n;
        auto it = std::find(nums.begin(), nums.end(), n);
        nums.erase(it);
    }

    std::cout << std::min(nums[0],nums[1]) << "\n";
    std::cout << std::max(nums[0],nums[1]);

    return 0;
}