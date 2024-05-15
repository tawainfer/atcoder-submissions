#!/bin/sh

read s
if [ $s = 'ACE' -o $s = 'BDF' -o $s = 'CEG' -o $s = 'DFA' -o $s = 'EGB' -o $s = 'FAC' -o $s = 'GBD' ]
then
  echo 'Yes'
else
  echo 'No'
fi
