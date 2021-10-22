#include "types.h"
#include "stat.h"
#include "user.h"
int main(void){
	int rC = getReadCount();
	printf(1, "The read system call has been called %d time(s)\n", rC);
	exit();
}
