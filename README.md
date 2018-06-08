# utest
UTest is a small testing library for C programs.
For convenience, it's just a header file that you can include in your program 
and start writing tests right off the bat.

# How it works
This is a little program that shows how to write tests using micro test.

``` c
#include "./utest.h"

int main() {
	// Starts utest session.
	utest_start();

	// Demo passing test.
	ASSERT("Two plus two is four.", 2 + 2 == 4);

	// Demo failing test. (nonsense.)
	ASSERT("Two plus three is also 4.", 2 + 3 == 4);

	// And that's about it.
	return utest_end();
}
```

# How to install
Just clone this repo and include utest.h into your program.

# Demo program
Once you's clone this repo you can run a demo program:
``` sh
$ cd demo
$ make
```
 



