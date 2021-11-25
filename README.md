# 42_libft

I decided not to do a test main. I'll just use the 3 tests below.

After turning in and getting 100%, I'll have to modify this so that:
- There is no bonus rule, the makefile compiles everything at once (the bonus rule is just there for grading)
- Files have coherent names (like strsub instead of substr) and no \_bonus
- All functions are protected against NULL pointers (it's just better)
- Eventually, not really needed but changing my non-bonus functions so that they use bonus functions when relevant (I can't right now because of how the normal and bonus sections are compiled and graded separately)
- Re-ordering files in the Makefile and libft.h not according to which part of the project it belongs to but rather a certain logic like (1) official functions (2) custom functions (3) list functions etc...

Notes:

- Makefile 'bonus' rule is bugged and relinks every time. I haven't found a way to do it right. Makefiles are weird. I give up.
- When trying to reproduce existing functions, NULL pointers should not be protected if you want to reproduce them exactly. As such, I opted to remove them when reproducing official functions, but keep them for the custom functions.

Tests:

https://github.com/ska42/libft-war-machine

https://github.com/alelievr/libft-unit-test

https://github.com/Tripouille/libftTester

- war-machine is ALL OK
- unit-test is ALL OK - except isalnum, tolower, toupper, calloc, and lstmap
  - isalnum is impossible to fix, the test is just broken on linux
  - tolower and tolower can be fixed with a single if (n >= 128 && n <= -2) return (unsigned char)n; but adding this in the function just doesn't make sense
  - calloc can be fixed by returning something malloced, such as if (mult == 0) return (malloc(1)); but adding this just doesn't make sense either
  - lstmap can be fixed by removing the protection on (\*del) (the del == NULL) but removing it doesn't make sense
- libftTester is ALL OK
