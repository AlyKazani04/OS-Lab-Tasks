#!/bin/bash

dname=$1

if [[ -d "$dname" ]]; then
    printf "Dir exists!\n"
    ls -1a "$dname/" | grep "."
else
    printf "File doesn't exist!\n"
fi