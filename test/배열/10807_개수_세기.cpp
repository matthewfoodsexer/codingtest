#include <iostream>

int main() {
    int n,v;
    int result=0;
    int nums[100];
    
    std::cin >> n;
    for(int i = 0; i < n; i++) {    
        std::cin >> nums[i];
    }

    std::cin >> v;
    for(int i = 0; i < n; i++) {    
        if(nums[i] == v) {
            result++;
        }
    }

    std::cout << result;

    return 0;
}