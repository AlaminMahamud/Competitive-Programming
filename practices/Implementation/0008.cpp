#include <stdio.h>

int main(){
  char str[10] = "Anpara";  
  printf("String is : %s\n", str);
  printf("Enter new value for string : ");
  scanf("%s", str);
  printf("String is : %s\n", str);

  return 0;
}
