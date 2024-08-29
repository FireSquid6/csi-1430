#!/usr/bin/env bash

if [ ! -f ./main.cpp ]; then
  echo "no main.cpp. Are you in the right directory?"
  exit 1
fi

if [ ! -f ./expected-output.txt ]; then
  echo "no expected-output.txt. Are you in the right directory?"
  exit 1
fi

g++ main.cpp -o program.o
./program.o > output.txt


OUTPUT=$(diff --color -u output.txt expected-output.txt)

# if output is empty, then the files are the same
if [ -z "$OUTPUT" ]; then
  echo "Test passed"
else 
  echo "Test failed:"
  echo "$OUTPUT"
fi
