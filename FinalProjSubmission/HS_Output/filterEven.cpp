:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> filterEven(const std::vector<int>& nums) {
  std::vector<int> result;
  std::copy_if(nums.begin(), nums.end(), std::back_inserter(result), [](int x) { return x % 2 == 0; });
  return result;
}

int main() {
  std::vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::vector<int> vec2 = {2, 4, 8};
  std::vector<int> vec3 = {1, 2, 3};

  std::cout << "[" << join(", ", filterEven(vec1)) << "]" << std::endl;
  std::cout << "[" << join(", ", filterEven(vec2)) << "]" << std::endl;
  std::cout << "[" << join(", ", filterEven(vec3)) << "]" << std::endl;

  return 0;
}

std::string join(const std::string& separator, const std::vector<int>& vec) {
  std::ostringstream oss;
  for (size_t i = 0; i < vec.size(); ++i) {
    oss << vec[i];
    if (i < vec.size() - 1) {
      oss << separator;
    }
  }
  return oss.str();
}
```<|im_end|>