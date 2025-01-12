int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Output: 20
  //No free(ptr) here
  return 0; 
}