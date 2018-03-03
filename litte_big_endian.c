 /*Little Endian:
    Little Endian means that the lower order byte of the number is stored in memory at the lowest address,
	and the higher order byte is stored at the highest address.

    Big Endian:
    Big Endian means that the higher order byte of the number is stored in memory at the lowest address,
    and the lower order byte is stored at the highest addres */


#include<stdio.h>
int main()
{
	unsigned int num = 0x12345678;
	//	unsigned char num = 0x12345678;
	char *byte ;
	//int *byte;
	//byte = (char *)&num;
	byte = &num;
	
	if(*byte==0x78)

		printf("little endian");
		else
		printf("big endian");
	}

/*#include <stdio.h>

int main()
{
    int x = 1;

    //unsigned char *c = (char*)&x;
     unsigned char *c ;
	 c=&x;


    if (*c)
        printf("Little endian");
    else
        printf("Big endian");

    return 0;
}*/


/*union {
    int i;
    char c[sizeof(int)];
} x;
x.i = 1;
if(x.c[0] == 1)
    printf("little-endian\n");
else    printf("big-endian\n");
*/

