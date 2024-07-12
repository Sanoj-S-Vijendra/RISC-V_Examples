#include <cstdio>
#include <cstdlib>
#include <cmath>

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
     a[i] = 1.0 / (double) n;
     b[i] = 2.0;
     c[i] = 0;
  }
  Start_ROI();
  for(int i = 0 ; i < n ; i++)  { // ROI
    if (i % 4 != 0) {
     c[i] = a[i] + b[i] * k;
    }
  }
  End_ROI();
  return 0;
}