all:
	gcc main.c -o check_gcc
	gcc -std=c11 main.c -o check_gcc_stdc_2011
	gcc -std=c99 main.c -o check_gcc_stdc_1999
	clang  main.c -o check_clang
	clang -std=c17 main.c -o check_clang_stdc17
check:
	gcc-8 -std=c17 main.c -o check_gcc8_stdc_version
clean:
	$(RM) -r check_*
.PHONY: all check clean
