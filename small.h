#include "./external/annoy/src/kissrandom.h"
#include "./external/annoy/src/annoylib.h"

const int small_size = 10;
AnnoyIndex<int, double, Angular, Kiss32Random> get_small_index();