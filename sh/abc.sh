#!/bin/sh
cd /usr/local/AtCoder/
if [ $# != 2 ] && [ $# != 3 ]; then
    exit 0;
fi

FOLDER="/usr/local/AtCoder/ABC/$1"
mkdir -p $FOLDER
cd $FOLDER
# python
if [ $3 = "py" ]; then
    FILE=${2%.*}.py
    cp -n ../../template.py ./$FILE
# cpp
elif [ $# = 2 ]; then
    FILE=${2%.*}.cpp
    cp -n ../../template.cpp ./$FILE
fi

code $FILE