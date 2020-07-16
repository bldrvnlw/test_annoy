#include <iostream>
#include <random>
#include "big.h"
#include "small.h"

// Just shows that building with annoy works when annoy is included in multiple files
int main()
{
	auto small_idx = get_small_index();
	auto big_idx = get_big_index();
		std::default_random_engine generator;
	std::normal_distribution<double> distribution(0.0, 1.0);
	std::cout << "Start build index trees for random data\n";
	
	for(int i=0; i<10000; ++i){
		double *big_vec = (double *) malloc( big_size * sizeof(double) );
		double *small_vec = (double *) malloc( small_size * sizeof(double) );
		
		for(int z=0; z<big_size; ++z){
			big_vec[z] = (distribution(generator));
		}
		for(int z=0; z<small_size; ++z){
			small_vec[z] = (distribution(generator));
		}
		big_idx.add_item(i, big_vec);
		small_idx.add_item(i, small_vec);

	}
	std::cout << "End build index trees for random data\n";
	exit(0);
}