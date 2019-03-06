#include "types.h"
#include "stat.h"
#include "user.h"

int getkernelstartaddr();
int getkernelendaddr();
int getkernelvariaddr();
int getsystemcalladdr();

int main(void) {
    printf(1, "start of kernel = %p \n", getkernelstartaddr());
    printf(1, "end of kernel = %p \n", getkernelendaddr());
    printf(1, "addr of kernel variable= %p \n", getkernelvariaddr());
    printf(1, "addr of fork sys call = %p \n", getsystemcalladdr());
    exit();
}

int getkernelstartaddr(){
    return getkstartaddr();
}

int getkernelendaddr(){
    return getkendaddr();
}

int getkernelvariaddr(){
    return getkvariaddr();
}

int getsystemcalladdr(){
    return getsyscalladdr();
}