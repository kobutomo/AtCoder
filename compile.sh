#!/bin/sh
filetype=$1
file=$2
out=$3
/usr/bin/g++-10 $2 -Wall -Wextra -Wshadow -Wconversion -fsanitize=undefined -ggdb -o $3
echo "================ BUILD SUCCESS ================"
$3 | ccat