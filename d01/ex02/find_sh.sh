#!/bin/sh
#this script will show just the name of the files with the .sh extension

find . -name "*.sh" -exec basename {} .sh ";"
