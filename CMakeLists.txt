# 3.14 minimum for VS 2019 
cmake_minimum_required(VERSION 3.14)

project(test_annoy VERSION 0.1 LANGUAGES CXX)

# Adding an executable program and linking to needed ROOT libraries
add_executable(test_annoy 
	test.cpp 
	big.cpp big.h 
	small.cpp small.h 
	./external/annoy/src/annoylib.h
	./external/annoy/src/kissrandom.h)
