:
<|im_end|>
<|im_start|>assistant
int factorial(int n){
  if (n == 0) return 1;
  return n * factorial(n - 1);
}
int main(){
  std::cout << factorial(3) << std::endl;
  std::cout << factorial(4) << std::endl;
  std::cout << factorial(7) << std::endl;
}<|im_end|>