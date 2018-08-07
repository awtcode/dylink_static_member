 #include <stdio.h>
 #include "header.h"
#include "emscripten.h"

      extern int x;
      extern bool sidey(int);
      
      int main() {
        printf("extern is %d sidey2:%d.\n", x, sidey(5));
        return 0;
      }