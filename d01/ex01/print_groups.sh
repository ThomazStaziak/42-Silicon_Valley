#!/bin/sh
#this script will display a list of groups in the $FT_USER variable 

groups $FT_USER | tr -d "\n" | tr " " ","
