#include "emscripten.h"
class global {
public:
    int getValue() { return value; }
private:
    EMSCRIPTEN_KEEPALIVE static int value;
};