#!/bin/sh
#this script will count the number of users whose last names contain "bon"

ldapsearch -LLL "sn=*bon*" | grep sn | wc -l | bc
