#! /bin/bash

./crashtest 2
touch test/crash
# crashes here, nothing below happens
touch test/one
touch test/two
touch test/three
cp test/crash test/four
rm test/crash
ls test
# only crash should exist
./crashtest -1
ls test
# same result after un-crash

./crashtest -1
rm -rf test
