#! /bin/bash

# hard link test
./crashtest 5
touch test/nice
echo "good" > test/nice
ln test/nice test/link
cat test/nice	# properly outputs 'good'
cat test/link	# No such file or directory
./crashtest -1
cat test/link	# un-crash, still no such file

./crashtest -1
rm -rf test
