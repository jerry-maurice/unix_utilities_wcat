//
//  wcat.c
//  Unix_Utilities
//
//  Created by Jerry Maurice on 8/24/21.
//

#include "wcat.h"

/*
 * read content of a file one character at a time and print it until it reaches the end of file
 */
void wcat_function(int n, const char* argv[]){
    int i;
    for(i=1;i<n;i++){
        FILE *fp = fopen(argv[i], "r");
        
        if(fp == NULL){
            printf("wcat: cannot open file \n");
            exit(1);
        }
        else{
            int c;
            while((c = fgetc(fp)) != EOF){
                printf("%c",c);
            }
            fclose(fp);
        }
    }
    
    
}
