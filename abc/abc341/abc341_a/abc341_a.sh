#!/bin/sh

read n
echo -n '1'
for i in $(seq 1 $n)
do
  echo -n '01'
done