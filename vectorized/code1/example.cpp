#include <cstdio>
#include <cstdlib>
#include <cmath>
// #include<iostream>
#define min -__DBL_MAX__
// #include<iostream>


static inline __attribute__((always_inline)) void Start_ROI()
{
   __asm__ volatile("srai zero, zero, 0");
}

static inline __attribute__((always_inline)) void End_ROI()
{
   __asm__ volatile("srai zero, zero, 1");
}

const int n = 100000;
double a[n], b[n], c[n];
double k = 7.23;

int main(){
  for(int i = 0 ; i < n ; i++) {  // Initialize
     a[i] = 0.2;
     b[i] = 0.2;
     c[i] = 0;
  }
  Start_ROI();
  for(int i = 0 ; i < n ; i++)  { // ROI
     c[i] = a[i] + b[i] * k;
  }
//   printf("%lf, %lf", c[0], c[1]);
  End_ROI();

  return 0;
}