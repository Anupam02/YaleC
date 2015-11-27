#include "distSquared.h" /* The #include here uses double quotes instead of angle brackets; this tells the compiler to look for distSquared.h in the current directory instead of the system include directory ( typically /usr/include). */

#define THRESHOLD (100)

int tooClose(int x1, int y1, int x2, int y2) {
  return distSquared(x1 - x2, y1 - y2) < THRESHOLD;
}
