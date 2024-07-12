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
struct P {
    float x, y, z;
};

struct P ps[n];
float r;

int main() {
  for(int i = 0 ; i < n ; i++)  {
    ps[i].x = i;
    ps[i].y = 5;
    ps[i].z = i;
  }

  r = 0;
  Start_ROI();
  for(int i = 0 ; i < n ; i++)  { // ROI
    r = r + 
      ps[i].x +
      (ps[i].y + 3.1f) +
      ps[i].z;        
  }
  End_ROI();
}
