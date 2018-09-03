#ifndef COLIDX_H
#define COLIDX_H

#include <stddef.h>

#define COLIDX(i,j,nrows) (((j)*(nrows))+(i))

size_t colidx(size_t, size_t, size_t);

#endif /* COLIDX_H */
