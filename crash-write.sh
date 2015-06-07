#! /bin/bash

# write test
./crashtest 3
touch test/what
echo "what" > test/what
cat test/what	# does not print anything
./crashtest -1
cat test/what	# un-crash, still does not print

./crashtest -1
rm -rf test

