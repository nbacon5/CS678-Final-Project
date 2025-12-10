:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <vector>

std::vector<int> reverseList(const std::vector<int>& lst) {
    std::vector<int> reversed;
    for (auto it = lst.rbegin(); it != lst.rend(); ++it) {
        reversed.push_back(*it);
    }
    return reversed;
}

int main() {
    std::vector<int> list = {1, 2, 3, 4, 5};
    std::vector<int> reversedList = reverseList(list);
    for (int num : reversedList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
```<|im_end|>