#include <stdio.h>
int main(void)
{
 unsigned char cNum = 0 ;
 int iNum = 0 ;
 while (cNum <= 254)
 {
 printf( "%d %c\n", iNum, cNum ) ;
 iNum = iNum + 1 ;
 cNum = cNum + 1 ;
 }
 return 0 ;
}
