#include <stdio.h>
struct name{
  int id;
  int dd;
  int mm;
  int yyyy;
};


int main(){
  int n;
  scanf("%d", &n);
  
  struct name[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &name[i].id);
    scanf("%d", &name[i].dd);
    scanf("%d", &name[i].mm);
    scanf("%d", &name[i].yyyy);    
  }

  for(int i = 0; i < n; i++){
    printf("%d", name[i].id);
    printf("%d", name[i].dd);
    printf("%d", name[i].mm);
    printf("%d", name[i].yyyy);
  }
}

	
