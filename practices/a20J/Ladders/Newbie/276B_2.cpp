// In the Name of GOD
#include <stdio.h>
int cnt[28];
int main(){
  char c;
  while((c = getchar())!= '\n')
    cnt[c-'a']++;
  int odd = 0, i;
  for(i = 0; i < 28; i++)
    if(cnt[i] % 2 == 1) odd++;
  if(odd == 0 || odd % 2 == 1)
    printf("First\n");
  else
    printf("Second\n");
  return 0;
}
