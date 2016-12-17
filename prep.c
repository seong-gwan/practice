#include <stdio.h> 
#define TEST_1

int main(int argc, char **argv) 
{  
#ifdef TEST_1
    printf( "TEST_1"\n");
#else
    printf( "ETC"\n") ;
#endif
    return 0; 
}

//identify #ifdef and #else
//I wonder in which case #ifdef or #else works.
