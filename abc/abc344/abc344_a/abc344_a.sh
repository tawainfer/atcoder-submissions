#!/bin/sh

read s
echo $s | sed -e "s/|.*|//g"