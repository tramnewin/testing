#!/bin/bash

# Assume this is run from the project base directory
PROJECT_BASE_DIR=`pwd`

# Run gcov, to do: gate run on passed in var
#UNIT_TEST_LOCATION = /src/testint
#mkdir -p $UNIT_TEST_LOCATION

pushd  $PROJECT_BASE_DIR > /dev/null
for f in `find $PROJECT_BASE_DIR -name 'main'`
do
  echo "Processing coverage for $f file..."
  gcov --preserve-paths -o ${f} x >/dev/null 2>&1
done
popd > /dev/null