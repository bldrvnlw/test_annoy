#include "./external/annoy/src/kissrandom.h"
#include "./external/annoy/src/annoylib.h"

const int big_size = 40;
AnnoyIndex<int, double, Angular, Kiss32Random> get_big_index();