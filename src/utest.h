#include<stdio.h>

#define UTEST_COLOR_RESET  "\33[0:m"
#define UTEST_COLOR_RED    "\33[0:31m"
#define UTEST_COLOR_GREEN  "\33[0:32m"
#define UTEST_COLOR_YELLOW "\33[0:33m"

#define ASSERT(name, cnd) do { ++_ut_run; \
			if (!(cnd)) { \
				printf("%s* %s FAILED. %s\n", \
						UTEST_COLOR_RED, name, UTEST_COLOR_RESET);\
			   	++_ut_err; \
			} \
			else { ++_ut_pass; } \
		} while (0);

int _ut_err, _ut_run, _ut_pass;

// Starts test session.
void utest_start() {
	printf("\nUTEST v0.1\n");
	_ut_err = 0; _ut_run = 0; _ut_pass = 0;
}

// Ends test session and print its results.
int utest_end() {
	printf("%s\n", UTEST_COLOR_RESET);
	printf("TEST STATS\n");
	printf("%sAsserts: %5i\n", UTEST_COLOR_YELLOW, _ut_run);
	printf("%sPass:    %5i\n", UTEST_COLOR_GREEN,  _ut_pass);
	printf("%sFailed:  %5i\n", UTEST_COLOR_RED,    _ut_err);
	printf("%s", UTEST_COLOR_RESET);
	return !(_ut_err) ? 0 : -1;
}
