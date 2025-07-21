#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
        int max = 0, min = 0;
    for (int i = 0; i < sizes_rows; i++)
    {
        int tempMax, tempMin;
        tempMax = sizes[i][0] > sizes[i][1] ? sizes[i][0] : sizes[i][1];
        tempMin = sizes[i][0] > sizes[i][1] ? sizes[i][1] : sizes[i][0];
        if (max < tempMax)
            max = tempMax;
        if (min < tempMin)
            min = tempMin;
    }
    answer = max * min;
    return answer;
}