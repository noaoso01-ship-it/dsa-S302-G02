#include "sample_lib.h"
#include <sys/stat.h>

void createleak(){
    char *foo = malloc(20 * sizeof(char)); 
    printf("Allocated leaking string: %s", foo); 

}

int main(){
char map_name[5]; 

    printf("Enter map name (e.g. 'xs_2' or 'xl_1'):");
    scanf("%s", map_name);  

    return 0; 
}