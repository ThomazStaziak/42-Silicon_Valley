#!/bin/sh
#this script will display the number os regular files inside the directory

find . -type f -or -type d | wc -l | tr -d " "
