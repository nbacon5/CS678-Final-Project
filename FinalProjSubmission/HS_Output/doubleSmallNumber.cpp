:
<|im_end|>
<|im_start|>assistant
```cpp
int doubleSmallNumber(int x){
  if (x > 100) {
    return x;
  } else {
    return x * 2;
  }
}
int main(){
  std::cout << doubleSmallNumber(4) << std::endl;
  std::cout << doubleSmallNumber(20) << std::endl;
  std::cout << doubleSmallNumber(150) << std::endl;
}
```<|im_end|>