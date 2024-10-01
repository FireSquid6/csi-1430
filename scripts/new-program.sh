#!/usr/bin/env bash

cd "$(dirname "$0")/.."

if [ -z "$1" ]; then
  echo "Usage: $0 <assignment-name> [--in-class] [--scratch]"
  exit 1
fi


DIRECTORY="./programming-assignments/$1"

if [[ $* == *--in-class* ]]; then
  DIRECTORY="./in-class-assignments/$1"
fi
if [[ $* == *--scratch* ]]; then
  DIRECTORY="./scratch/$1"
fi

if [ -d "$DIRECTORY" ]; then
  echo "Directory $DIRECTORY already exists"
  exit 1
fi

mkdir -p "$DIRECTORY"

touch "$DIRECTORY/main.cpp"

echo "/*
 * Author: Jonathan Deiss
 * Assignment Title:
 * Assignment Description:
 * Due Date:
 * Date Created:
 * Date Last Modified:
 */
#include <iostream>

using namespace std;
int main() {
  // Data Abstraction:
    
  // Input:
    
  // Process:
    
  // Output:
    
  // Assumptions:

  return 0;
}" > "$DIRECTORY/main.cpp"

echo "" > "$DIRECTORY/expected-output.txt"
