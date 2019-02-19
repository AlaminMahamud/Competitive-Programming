int gcm(int a, int b){
  if(b==0) return a;
  else return gcm(b,a%b);
}

int lcm(int a, int b){
  return (a*b)/gcm(a,b);
}
