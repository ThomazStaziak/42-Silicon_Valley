#!/bin/sh
#this script will search all the peoples who has the letter z on fisrt letter of the name

ldapsearch -xLLL "(uid=z*)" cn | grep ^cn | cut -c 5- | sort -fr
