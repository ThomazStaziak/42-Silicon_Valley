#!/bin/sh
#this script will display skipped lines starting from the first line 

ls -l | awk "NR % 2 != 0"
