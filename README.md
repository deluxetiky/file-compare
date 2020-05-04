# Diff Finder

The application is designed to solve problem of comparing two ascii based files line by line and giving the differences between two source files in terms of A\B.
Default algorithm implementations are binary search and linear search algorithms. The code is designed to be extendable in terms of implementing custom algorithms.

## Build

`make clean all`

## Run

Binary Comparison

`./bin/diff './sample-data/src1.lst' './sample-data/src2.lst' 'B'`

Linear Comparison

`./bin/diff './sample-data/src1.lst' './sample-data/src2.lst' 'L'`

or with make

`TEST_PARAMS="'./sample-data/src1.lst' './sample-data/src2.lst' 'B'" make test`

Reference Data File stored in [./sample-data](./sample-data)


## Performance
