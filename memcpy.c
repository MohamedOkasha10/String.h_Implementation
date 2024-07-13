#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* memcpy : copies 'n' characters from source object to destination object*/

void *mem_cpy(void *destination , void *source , unsigned int count);

int main()
{
    char name1[20] = "Mohamed Okasha";
    char name2[20];

    printf("name2 = %s\n" , name2);


    mem_cpy(&name2 , &name1 , 14);

    printf("name2 => %s\n" , name2);

    return 0;
}

void *mem_cpy(void *destination , void *source , unsigned int counter)
{
    char *dest_temp = (char *)destination;
    char *src_temp = (char *)source;

    if(NULL == destination || NULL == source)
    {
        printf("Error!? invalid null pointer\n");
    }
    else
    {
        while(counter)
        {
            *(dest_temp++) = *(src_temp++);
            counter--;

        }

    }
    return destination;

}




