#include "header.h"
#include "emscripten.h"
#include <dlfcn.h>
#include <stdio.h>

EMSCRIPTEN_KEEPALIVE int x = 123;
EMSCRIPTEN_KEEPALIVE int global::value = 7;

extern "C" {
        void loadlib();
        
      } 
extern bool sidey2(int i);
typedef bool (*sideyPODfunc)(int num);

EMSCRIPTEN_KEEPALIVE bool sidey(int i) {
    loadlib();
    void* lib_handle = dlopen("liblib.so", RTLD_NOW);

    if (lib_handle == NULL) {
        printf("Could not load lib!!!\n");
        return false;
    } else {
        printf("lib loaded!!!\n");
        sideyPODfunc onefunc = (sideyPODfunc)dlsym(lib_handle, "sidey2");
        printf("sidey: sidey2: %d\n", (bool)onefunc(5));
    }
    
    //return global::value == i;
    return true;
} 