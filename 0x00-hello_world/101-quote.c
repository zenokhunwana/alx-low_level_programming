#include <unistd.h>
#include <stdio.h>
/**
*
* Description: using the main function
* this program prints and that piece of art is useful - Dora Korpar, 2015-10-19
* Return: 1
*/
int main(void)
{
        write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",58);
        return (1);
}
