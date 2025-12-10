:
<|im_end|>
<|im_start|>assistant
```cpp
#include <iostream>
#include <string>

std::string densityTell(double density) {
    if (density < 1.2) {
        return "Wow! You're going for a ride in the sky!";
    } else if (density <= 1000.0) {
        return "Have fun swimming, but watch out for sharks!";
    } else {
        return "If it's sink or swim, you're going to sink.";
    }
}

int main() {
    std::cout << densityTell(1) << std::endl;
    std::cout << densityTell(4.5) << std::endl;
    std::cout << densityTell(1250.123) << std::endl;
    std::cout << densityTell(-8.2) << std::endl;
    return 0;
}
```<|im_end|>