:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <vector>

int sumOfSquares(const std::vector<int>& nums) {
  int result = 0;
  for (int num : nums) {
    result += num * num;
  }
  return result;
}

int main() {
  std::cout << sumOfSquares(std::vector<int>{1, 2, 3, 4, 5}) << std::endl;
  std::cout << sumOfSquares(std::vector<int>{2, 8, 16}) << std::endl;
}
```<|im_end|>