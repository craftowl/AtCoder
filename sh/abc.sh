cd /usr/local/AtCoder/
if [ $# != 2 ]; then
    exit 0;
fi

FOLDER="/usr/local/AtCoder/ABC/$1"
FILE=${2%.*}.cpp
mkdir -p $FOLDER
cd $FOLDER
cp -n ../../template.cpp ./$FILE
code $FILE