# 42_libft

The project will be turned in without any custom bonus function.
These (with their corresponding header and Makefile) will stay in the custom folder of this project, to be used later in the real libft.

Todo:

1. Use the 3 following tests to fix everything

	https://github.com/ska42/libft-war-machine

	https://github.com/alelievr/libft-unit-test

	https://github.com/Tripouille/libftTester

2. Finish writing the main to test everything
	/!\ The main was started using the old pdf, some functions have been removed and others added
3. Do a last double check on file names in headers, static funcs, etc...

Note:

Makefile 'bonus' rule is bugged and relinks every time.
I haven't found a way to do it right. Makefiles are weird.
I give up.

Note2:

When trying to reproduce existing functions, NULL pointers should not be protected if you want to reproduce them exactly.
As such, I opted to remove them, but keep them for my own functions.

war-machine tests are pretty basic and they all succeed easily
unit-test tests are very advanced and test a lot, including the NULL pointers protection

But unit-test tests are made for mac instead of linux
