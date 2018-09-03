#include "colidx.h"

size_t colidx(size_t i, size_t j, size_t nrows){
    return i + j*nrows;
}
