all: examprogram

examprogram: examprogram.cc
	g++ -Wall examprogram.cc -I.

docs:
	@doxygen ./examprogram.cc index.html

check:
	@valgrind --leak-check=yes ./examprogram.cc
	@cppcheck ./examprogram.cc