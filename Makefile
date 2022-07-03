SF_test: ./source/string_functions.cpp ./source/string_functions.h ./tests/sf_tests.cpp ./tests/sf_tests.h ./tests/sf_tests_main.cpp
	g++ -o $@ $^

%.o:%.c
	g++ -c -o $@ $<