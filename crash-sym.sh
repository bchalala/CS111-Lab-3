#! /bin/bash

# symbolic link test
./crashtest 5
touch test/hey
echo "what" > test/hey
ln -s test/hey test/sym
cat test/sym	# should print 'what' but does not
./crashtest -1	
cat test/sym	# un-crash, still does not

./crashtest -1
rm -rf test

