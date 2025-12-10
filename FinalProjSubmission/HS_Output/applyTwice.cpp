:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>

int increment(int x) {
  return x + 1;
}

int decrement(int x) {
  return x - 1;
}

int square(int x) {
  return x * x;
}

int applyTwice(std::function<int(int)> f, int x) {
  return f(f(x));
}

int main() {
  std::cout << applyTwice(increment, 5) << std::endl;
  std::cout << applyTwice(decrement, 5) << std::endl;
  std::cout << applyTwice(square, 5) << std::endl;
}
```<|im_end|>