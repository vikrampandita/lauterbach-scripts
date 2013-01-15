#include <stdio.h>

#define PHY_BASE_ADDRESS_START	(0x4C000000)
#define PHY_BASE_ADDRESS_END	(PHY_BASE_ADDRESS_START + 0xE8)

main()
{
        unsigned long i;
        unsigned long base;

	printf("LOCAL &value\n");
	printf("OPEN #1 emif1.dump /Create\n\n");


        base = PHY_BASE_ADDRESS_START;
        for (i=base;i< PHY_BASE_ADDRESS_END;i+=4) {
                printf("&value=d.l(ahb:0x%ld)\n", i);
                printf("write #1 \"0x%ld    \"  &value\n\n", i);
        }

	printf("\nclose #1\n\n");
}
