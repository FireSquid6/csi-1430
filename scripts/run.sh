#!/usr/bin/env bash

if [ ! -f ./main.cpp ]; then
  echo "no main.cpp. Are you in the right directory?"
  exit 1
fi

g++ ./main.cpp -o program.o && ./program.o
