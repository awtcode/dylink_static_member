#include "header.h"
#include "emscripten.h"
EMSCRIPTEN_KEEPALIVE int x = 123;

EMSCRIPTEN_KEEPALIVE bool sidey2(int i) {
    global temp;
    return temp.getValue() == i;
    //return true;
}