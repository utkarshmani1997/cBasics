## Creating your own library
- Compile the library by running `gcc -o mylib.o -c mylib.c`
- Include library to your code `#include "mylib.h"`
- Compile your code by running `gcc <yourfile>.c mylib.o`

## Creating shared library
- Compile with `gcc -o mylib.o -c mylib.c -fPIC`
- Again compile with `gcc -shared -o libmylib.so mylib.o -lm` to create shared lib
- Compile your code with `gcc test.c -L/media/infinity/golearn/src/github.com/utkarshmani1997/cBasics/createlib -lmylib`
- Run by specifying absolute path of your library if not in `/usr/lib`
  for exp: `env LD_LIBRARY_PATH=/media/infinity/golearn/src/github.com/utkarshmani1997/cBasics/createlib:$LD_LIBRARY_PATH ./a.out`
