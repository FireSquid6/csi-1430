#!/usr/bin/env bash

cd "$(dirname "$0")/.." || exit

NAME=$1

if [ ! -f ./main.cpp ]; then
  echo "Finding the correct directory..."
fi

if [ -f "./programming-assignments/$NAME/main.cpp" ]; then
  cd "./programming-assignments/$NAME" || exit
fi

if [ -f "./in-class-assignments/$NAME/main.cpp" ]; then
  cd "./in-class-assignments/$NAME" || exit
fi

if [ -f "./scratch/$NAME/main.cpp" ]; then
  cd "./scratch/$NAME" || exit
fi


echo "COMPILING..."
g++ ./main.cpp -o program.o
echo ""
echo "RUNNING THE PROGRAM:"
./program.o
