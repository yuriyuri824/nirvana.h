# Nirvana.h

> [!WARNING]
> THIS TOOL IS FAR FROM FINISH AND BEING WRITTEN WITHOUT FOLLOWING INDUSTRIAL CODING
> PRATICES, USE IT AT YOUR OWN RISK. 

A build tool inspired by [nob.h](https://github.com/tsoding/nob.h)

## How to Use It?

To build your files with nirvana.h, you must first create ["nirvana.c"](./nirvana.c) which has a content for example:

```c
/* nirvana.h */

#define NIRVANA_IMPL
#define NIRVANA_ENABLE_LOG
#include "nirvana.h"

int main(void) {
	nir_cmd_goes_samsara(); /* rebuilding nirvana.c every time you run it */
	nir_cmd_t cmd = {0};

	if  (!nir_cmd_init(&cmd)) {
		return -1;
	}

	nir_cmd_append(&cmd, "gcc test.c -o test");
	nir_cmd_run(&cmd);
	nir_cmd_cleanup(&cmd);

	return 0;
}
```
Then, you have to bootstrap the program by doing:

```console
$ gcc -o nirvana nirvana.c
```

And lastly, to run your build commands, you just run:
```console
$ ./nirvana
```
