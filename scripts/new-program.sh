#!/usr/bin/env bash

cd "$(dirname "$0")/.."

# ensure that $1 exists
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

echo "$DIRECTORY"
