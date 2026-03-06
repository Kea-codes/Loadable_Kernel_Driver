#!/bin/bash

MODULE="main"
FILE="$MODULE.ko"

case "$1" in
    all)
        make;;
    clean)
        make clean;;
    install)
        make
        sudo insmod $FILE;;
    uninstall)
        sudo rmmod $MODULE 2>/dev/null || echo "MOdule not loaded" ;;
    reload)
        sudo rmmod $MODULE 2>/dev/null
        make
        sudo insmod $FILE;;
    log)
        sudo dmesg | tail -20 ;;
    *)
        echo " USAGE: $0 {all, clean, install, uninstall,log}" ;;
esac
