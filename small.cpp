#include "small.h"

AnnoyIndex<int, double, Angular, Kiss32Random> get_small_index() {
	const AnnoyIndex<int, double, Angular, Kiss32Random> t = AnnoyIndex<int, double, Angular, Kiss32Random>(small_size);
	return t;
}