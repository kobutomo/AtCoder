#!/bin/bash

cd $(dirname $0)
dir=$(pwd)

echo $dir

# コース名
contest=$1
# 問題名
level=$2
fullname=$1_$2

if [ $# -ne 2 ]; then
  echo "2 arguments are required."
  exit 1
fi

if [ -d $contest ]; then
  cd $contest
else
  mkdir $contest
  cd $contest
fi

if [ -d $level ]; then
  echo "Directory already exists."
  exit 1
fi

mkdir $level
cd $level

# cpp file template
template=$(
  cat <<EOS
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main() {

  ////////////////////////////////
  //                            //
  //   Write your answer here.  //
  //                            //
  ////////////////////////////////

}
EOS
)

touch main.cpp
echo "$template" >>./main.cpp
echo "Created main.cpp"

cd ../..

# Write settings into CMakeLists.txt
echo "add_executable(${fullname} ${contest}/${level}/main.cpp)" >>./CMakeLists.txt

echo "Modified CMakeLists.txt"
