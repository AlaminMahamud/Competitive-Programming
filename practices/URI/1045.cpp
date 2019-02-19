// COPYRIGHT 2017_RED
#include <bits/stdc++.h>
using namespace std;

void swapp(double *a, double *b){
  double temp = *a;
  *a = *b;
  *b = temp; 
}

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  if(B>A) swapp(&A,&B);
  if(C>A) swapp(&A,&C);
  if(C>B) swapp(&B,&C);
  
  if(A >= B+C) cout << "NAO FORMA TRIANGULO" << endl;
  else {
    if(A*A == B*B + C*C) cout << "TRIANGULO RETANGULO" << endl;
    else if(A*A > B*B + C*C) cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(A*A < B*B + C*C) cout << "TRIANGULO ACUTANGULO" << endl;

    if(A == B && A == C) cout << "TRIANGULO EQUILATERO" << endl;
    else if(A == B || B == C || A == C) cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}
