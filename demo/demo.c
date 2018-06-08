#include "../src/utest.h"

int main() {
	// Starts utest session.
	utest_start();

	// Demo passing test.
	ASSERT("Two plus two is four.", 2 + 2 == 4);

	// Demo failing test.
	ASSERT("Two plus three is also 4. (nonsense.)", 2 + 3 == 4);

	// And that's about it.
	return utest_end();
}
