:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <string>

std::string lucky(int x) {
  if (x == 7) {
    return "LUCKY NUMBER SEVEN!";
  } else {
    return "Sorry, you're out of luck, pal!";
  }
}

int main() {
  std::cout << lucky(4) << std::endl;
  std::cout << lucky(7) << std::endl;
  return 0;
}
```<|im_end|>