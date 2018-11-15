#!/bin/sh
#this script will show the adresses of our machine

ifconfig -a | grep 'ether ' | awk '{print $2}'
