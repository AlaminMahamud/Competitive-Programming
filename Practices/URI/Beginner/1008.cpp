// COPYRIGHT 2017_RED

#include <cstdio>

int main(int argc, char *argv[]) {
  int number;
  int hours;
  double rate;
  scanf("%d %d %lf", &number, &hours, &rate);
  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2lf\n", static_cast<double>(hours) * rate);
  return 0;
}
