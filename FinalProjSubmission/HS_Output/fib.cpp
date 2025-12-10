:
<|im_end|>
<|im_start|>assistant
```cpp
int fib(int n){
  if(n == 0 || n == 1) return 0;
  return fib(n - 1) + fib(n - 2);
}
int main(){
  std::cout << fib(3) << std::endl;
  std::cout << fib(4) << std::endl;
  std::cout << fib(7) << std::endl;
}
```<|im_end|>