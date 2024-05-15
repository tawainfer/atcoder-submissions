#!/bin/sh

c=$(sed 's/w/vv/g' | wc -c)
echo $((c-1))