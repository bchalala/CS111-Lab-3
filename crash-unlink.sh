#! /bin/bash

# unlink test
./crashtest 2
touch test/del
rm test/del
ls test		# del still shows
cat test/del	# prints nothing
		# both are incorrect
./crashtest -1	# un-crash
ls test
cat test/del	# same results
