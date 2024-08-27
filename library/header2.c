#include "header2.h"

int min(int a, int b){
    if(a < b) return a;
    else return b;
}

int max(int a, int b){
    if(a > b) return a;
    else return b;
}

int absolute(int a, int b){
    if((a-b) > 0) return a-b;
    else return b-a;
}