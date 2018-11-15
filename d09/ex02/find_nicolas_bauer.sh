#!/bin/sh
#this script will display the Nicolas Bauer's phone number

cat $1 | grep -i 'Nicolas' | grep -i 'Bauer' | grep -iv 'Bomber' | grep -v '168' | grep -v '583' | awk '{print $(NF - 1)}' 
