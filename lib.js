mergeInto(LibraryManager.library, {
    loadlib: function() {
        //Module["FS_createPreloadedFile"]('/', 'liblib.so', "http://localhost:8080/side2.wasm", true, true);
        Module["FS_createLazyFile"]('/', 'liblib.so', "http://localhost:8080/side2.wasm", true, true);
    }
  });