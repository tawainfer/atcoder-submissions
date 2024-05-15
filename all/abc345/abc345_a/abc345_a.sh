#!/bin/sh

read s
if [ $(echo $s | grep -E "^<=+>$" | wc -l) -ne 0 ]
then
  echo 'Yes'
else
  echo 'No'
fi