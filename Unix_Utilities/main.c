//
//  main.c
//  Unix_Utilities
//
//  Created by Jerry Maurice on 8/24/21.
//

#include <stdio.h>
#include <stdlib.h>
#include "wcat.h"

int main(int argc, const char * argv[]) {
    // check if argument is present
    if(argc > 1){
        wcat_function(argc, argv);
    }
    else{
        exit(0); 
    }
    return 0;
}
