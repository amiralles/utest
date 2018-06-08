# utest
UTest is a small testing library for C programs.
For convenience, it's just a header file that you can include in your program 
and start writing tests right off the bat.

## How it works
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

## How to install
Just clone this repo and include utest.h into your program.

## Demo program
This repo contains a demo program with a passing and a failing test. To run this
program:

``` sh
$ cd ./demo
$ make
```

After running the previous command you should see something like this:

``` sh
UTEST v0.1
* Two plus three is also 4. (nonsense.) FAILED. 

TEST STATS
Asserts:     2
Pass:        1
Failed:      1
make: *** [all] Error 255
```

And that's  it. Let me know if you have any question.

