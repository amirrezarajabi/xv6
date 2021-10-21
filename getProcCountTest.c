#include "types.h"
#include "stat.h"
#include "user.h"
int main(void){
	int procNumber = getProcCount();
	printf(1, "Number of proccesses is %d\n", procNumber);
	exit();
}
