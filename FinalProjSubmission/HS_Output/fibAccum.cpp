:
<|im_end|>
<|im_start|>assistant
```cpp
int fibHelper(int n, int a, int b){
  if(n == 0) return a;
  return fibHelper(n-1, b, a+b);
}
int fibAccum(int n){
  return fibHelper(n, 0, 1);
}
int main(){
  std::cout << fibAccum(10) << std::endl;
  std::cout << fibAccum(5) << std::endl;
  std::cout << fibAccum(15) << std::endl;
}
```<|im_end|>