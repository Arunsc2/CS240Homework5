//
// Created by arun0 on 2/23/2021.
//

#include "matvec.h"

void matvec(Array matrix, int result[]) {
    for(int i = 0; i < num_rows; i++) {
        result[i] = 0;
        for(int j = 0; j < COLUMN_SIZE; j++) {
            result[i] += matrix[i][j] * v[i];
        }
    }
}

