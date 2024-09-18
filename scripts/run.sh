#!/usr/bin/env bash

if [ ! -f ./main.cpp ]; then
  echo "no main.cpp. Are you in the right directory?"
  exit 1
fi

echo "COMPILING..."
g++ ./main.cpp -o program.o
echo ""
echo "RUNNING THE PROGRAM:"
./program.o
