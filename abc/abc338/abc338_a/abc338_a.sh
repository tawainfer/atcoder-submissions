#!/bin/sh

read s
if [ $(echo $s | grep -E "^[A-Z][a-z]*$" | wc -l) -ne 0 ]
then
  echo 'Yes'
else
  echo 'No'
fi