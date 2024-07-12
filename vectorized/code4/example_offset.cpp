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
int offsets[n];
double a[n];
double b[n];

int main() {
  for(int i = 0 ; i < n ; i++)  {
    a[i] = i;
    offsets[i] = n - i;
  }
  Start_ROI();
  for(int i = 0 ; i < n ; i++)  { // ROI
    b[i] = a[offsets[i]];
    //b[offsets[i]] = a[i];
  }
  End_ROI();
}