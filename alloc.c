#include <stdlib.h>
#include "alloc.h"

/* You must implement these functions according to the specification given in
 * alloc.h. You can add any data structures you like to this file.
 */

struct Header{
	unsigned int size;
	struct Header * next;
};

int alloc_init(void * memarea, int size) {
	memarea = malloc(size);
	if (memarea == NULL){
		return -1;
	}
	struct Header initHead = {4, NULL};
	((struct header*)memarea)[0] = initHead;
	return 0;
}

void * alloc_get(void * memarea, int size) {

	void * iter = (void*)((struct Header*)memarea) += 1;
	int totalMemSize = ((struct Header*)memarea)->size;

	void * memAreaEnd = ((char*)memarea)+totalMemSize;
	void * blockEnd = ((char*) (((struct Header*)iter) + 1)) + size;
	while (true){
		if (blockEnd >= memAreaEnd) {
			return 0;
		}

		int blockSize = ((struct Header*)iter)->size;
		if (
	}
}

void alloc_release(void * memarea, void * mem) {

}

void * alloc_resize(void * memarea, void * mem, int size) {

	return NULL;
}

