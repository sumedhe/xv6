#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    printf(1, "Background service started... \n");
    while(1){
        printf(1, ".\n");
        sleep(10);
    }
}
