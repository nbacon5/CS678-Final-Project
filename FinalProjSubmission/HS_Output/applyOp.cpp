:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>

enum class Op {
  Add,
  Sub,
  Mul
};

int applyOp(Op op, int x, int y) {
  switch (op) {
    case Op::Add:
      return x + y;
    case Op::Sub:
      return x - y;
    case Op::Mul:
      return x * y;
    default:
      throw std::invalid_argument("Invalid operation");
  }
}

int evalList(Op op, const std::vector<int>& xs) {
  int result = 0;
  for (int x : xs) {
    result = applyOp(op, result, x);
  }
  return result;
}

int main() {
  std::cout << evalList(Op::Add, {1, 2, 3, 4, 5}) << std::endl;
  std::cout << evalList(Op::Sub, {5, 1, 2}) << std::endl;
  std::cout << evalList(Op::Mul, {2, 3, 4}) << std::endl;
  return 0;
}
```<|im_end|>