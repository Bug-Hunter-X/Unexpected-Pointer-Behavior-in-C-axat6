int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); // Output: 20

  int y = 30;
  ptr = &y; 
  *ptr = 40;  
  printf("%d", x); // Output: 20 (Expected 20, understand pointer use)
  printf("%d", y); // Output: 40

  //To illustrate changing the value of a variable pointed at, without directly changing the pointer address. 
  int z = 50;
  int *ptrZ = &z;
  *ptrZ = *ptrZ + 10; // modifies the value pointed at by adding 10.
  printf("%d", z); // Output: 60

  return 0;
}