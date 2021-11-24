# 42_libft

I decided not to do a test main. I'll just use the 3 tests below.

After turning in, if there are no errors, I'll have to modify this so that:
- There is no bonus rule, the makefile compiles everything at once
- All functions are protected against NULL pointers (it's just better)

Notes:

- Makefile 'bonus' rule is bugged and relinks every time. I haven't found a way to do it right. Makefiles are weird. I give up.
- When trying to reproduce existing functions, NULL pointers should not be protected if you want to reproduce them exactly. As such, I opted to remove them when reproducing official functions, but keep them for the custom functions.
- war-machine is ALL OK
- unit-test is ALL OK - except isalnum, tolower, toupper, calloc, and lstmap
- libftTester is ALL OK

The 3 tests I used:

- https://github.com/ska42/libft-war-machine
- https://github.com/alelievr/libft-unit-test
- https://github.com/Tripouille/libftTester
