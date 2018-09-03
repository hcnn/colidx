#include <stdio.h>  // printf
#include "colidx.h"

int main(){
    double x[] = {1,2,3,4,5,6};
    size_t n = 3;
    size_t m = 2;
    
    printf("\n%s\n", "Columns-Major Order Matrices as in Fortran:");
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<m; j++){
            printf("%4.1f", x[colidx(i,j,n)]);
        }
        printf("\n");
    }

    printf("\n%s\n", "Transpose the Matrix -- Switch the i- and j-loop");
    for(size_t j=0; j<m; j++){
        for(size_t i=0; i<n; i++){
            printf("%4.1f", x[colidx(i,j,n)]);
        }
        printf("\n");
    }

    printf("\n%s\n", "Use the Macro COLIDX:");
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<m; j++){
            printf("%4.1f", x[COLIDX(i,j,n)]);
        }
        printf("\n");
    }

    printf("\n%s\n", "Position in Array:");
    for(size_t i=0; i<n; i++){
        for(size_t j=0; j<m; j++){
            printf("%2d", (int)colidx(i,j,n));
        }
        printf("\n");
    }
}
