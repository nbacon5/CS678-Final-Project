:
<|im_end|>
<|im_start|>assistant
```cpp
std::string describeList(const std::vector<int>& list) {
  if (list.empty()) {
    return "Empty";
  } else if (list.size() == 1) {
    return "Singleton";
  } else if (list.size() == 2) {
    return "Two elements";
  } else {
    return "Many elements";
  }
}

int main() {
  std::cout << describeList({}) << std::endl;
  std::cout << describeList({1}) << std::endl;
  std::cout << describeList({1, 2}) << std::endl;
  std::cout << describeList({1, 2, 3}) << std::endl;
}
```<|im_end|>