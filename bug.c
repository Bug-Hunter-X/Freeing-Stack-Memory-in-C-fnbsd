int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Output: 20
  free(ptr); //Error: free() on non-heap memory
  return 0; 
}