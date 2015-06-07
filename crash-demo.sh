#! /bin/bash

gcc -o crashtest crashtest.c

# create test
./crashtest 2
touch test/first
touch test/second
cat test/second	# No such file or directory
ls test		# 'second' does not show
./crashtest -1
cat test/second	# even after un-crash, no file

# to clean the directory
./crashtest -1
rm -rf test



