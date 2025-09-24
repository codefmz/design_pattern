#!/bin/bash
OS=""
case "$(uname -s)" in
    Linux*)   OS="linux" ;;
    Darwin*)  OS="mac" ;;             # macOS
    CYGWIN*)  OS="windows" ;;
    MINGW*)   OS="windows" ;;
    MSYS_NT*) OS="windows" ;;
esac

echo "当前系统: $OS"

# 默认参数
PROJECT=""
TARGET=""

usage() {
    echo "usage: $0 -t <target>"
    echo "-t  : compile target "
    exit 1
}

# 解析参数
while getopts "p:t:" opt; do
    case "$opt" in
        t) TARGET=$OPTARG ;;
        *) usage ;;
    esac
done

# 必须传参数
if [ -z "$TARGET" ]; then
    usage
    exit 1
fi

echo "begin compile : target = $TARGET"
cmake -S . -B build -DTARGET=$TARGET

if [ "$OS" = "linux" ]; then
cmake --build build --target ${TARGET} -- -j$(nproc)
elif [ "$OS" = "windows" ]; then
cmake --build build --target ${TARGET}
fi