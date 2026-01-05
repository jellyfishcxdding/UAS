#include <stdio.h>

long long Fraktal(int n){
  if(n <= 0) return 0;
  return Fraktal(n-1) + Fraktal(n-2) + n; //for the better approach mending kita make memo biar PC gak overload
}

int main (){

  long long   n;
  scanf("%lld", &n);
  printf("%lld\n", Fraktal(n));

  return 0;
}