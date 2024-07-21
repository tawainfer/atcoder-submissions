#!/bin/sh

read r
echo $(( 100 - r % 100 ))
