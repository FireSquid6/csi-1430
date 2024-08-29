# CSI-1430

This is all of the code I wrote for assignments in CSI-1430, a basic C++ intro class I took in my Freshman year at Baylor University.

# Tooling

I imagine most of the people here are peers who want to know what my tooling is. I don't like eclipse and use neovim with nixos. My workflow is:

1. create a new project using `new-program.sh` in the scripts directory.
2. fill in the new `main.cpp` file in whatever new project I created
3. copy whatever is expected into `expected-output.txt`
4. do `make run` to see the output of my program
5. do `make test` to ensure that the output matches whatever is in `expected-output.txt`
6. submit and revise if necessary

All of these scripts should work just fine for you if you're on eclipse, xcode, or any other editor.

