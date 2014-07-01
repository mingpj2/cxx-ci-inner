
#include <stdio.h>

#if ! defined(BLD_NUM)
    #define BLD_NUM 0
#endif

#if ! defined(BLD_HASH)
    #define BLD_HASH "<unknown>"
#endif

int main(int argc, char *argv[])
{
  printf("Hello travis tester updated build number %d hash %s !\n", 
         BLD_NUM, BLD_HASH);
  return 0;
}


/* 

 g++ -DBLD_NUM=33 -DBLD_HASH="\"1234\"" test.cpp -o aou

 */

