:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <vector>

std::vector<int> range(int a, int b) {
  if (a > b) {
    return {};
  }
  std::vector<int> result;
  for (int i = a; i <= b; ++i) {
    result.push_back(i);
  }
  return result;
}

int main() {
  std::vector<int> result1 = range(5, 15);
  for (int num : result1) {
    std::cout << num << std::endl;
  }

  std::vector<int> result2 = range(0, 20);
  for (int num : result2) {
    std::cout << num << std::endl;
  }

  return 0;
}
```<|im_end|>