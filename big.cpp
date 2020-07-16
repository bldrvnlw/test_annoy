#include "big.h"

AnnoyIndex<int, double, Angular, Kiss32Random> get_big_index() {
	const AnnoyIndex<int, double, Angular, Kiss32Random> t = AnnoyIndex<int, double, Angular, Kiss32Random>(big_size);
	return t;
}