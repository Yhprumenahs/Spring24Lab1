#include "mbed.h"
#include <cstdio>


 InterruptIn buttn(PC_13);

 void buttn_fall(){
     printf("button pressed!!\r\n");
    
 }

// main() runs in its own thread in the OS
int main()
{
    printf("this is mbed os v%d\r\n",MBED_VERSION);
    while (true) {

    }
}

