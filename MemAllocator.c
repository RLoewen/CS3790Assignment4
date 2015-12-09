#define MIN_LEASE 40
#define MAX_LEASE 70
#define MIN_SIZE 50
#define MAX_SIZE 350
#define TIME_LIMIT 1000
#define MEMORY_SIZE 1000
#define REQUEST_INTERVAL 10
#include <stdio.h>

/*typedef struct REQUEST_NODE {
	int leaseLength;
	int nodeSize;
}REQUEST_NODE;
*/
struct range {
	int start;		// the starting address of the range
	int size;		// size of the range
}

struct freeNode {
	struct range hole;
	struct freeNode *next;	// pointer to next node
}

struct allocNode {
	struct range allocated;
	int leaseExpiry; 	// time at which this block will be returned to free list
	struct allocNode *next;	//pointer to next node;
}

typedef struct {

	DIRECTORY d;
	FAT F;
	BLOCK B[FATSIZE];
}filesystem;

//REQUEST_NODE rNode;	// create a rNode

int generateRequest(){

	//rNode.nodeSize = (rand() % (MAX_SIZE - MIN_SIZE) + MIN_SIZE);
	//rNode.leaseLength = (rand() % (MAX_LEASE - MIN_LEASE) + MIN_LEASE);




	return 0;
}


int main () {

	filesystem fs;
	int fd;

	// initialize fs start locations to -1 (empty
	for (int i=0; i< D)

	long clock = 0;
    while (++clock != TIME_LIMIT){

    	
      /* generate a memory request */
    	if(clock % 10 == 0) generateRequest();
    	printf(stderr,"requestNode size: \n",rNode.nodeSize);
    	printf(stderr,"requestNode lease length: \n",rNode.leaseLength);
      /* see if lease has expired  */


    }
    until ( ++clock == TIME_LIMIT);

    return 0;

}
   