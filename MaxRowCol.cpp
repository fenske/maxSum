#include "MaxRowCol.h"

tuple<int, int> getMaxRow(int arr[][N])
{
    int maxRowIdx= 0;
    int maxRowSum= arr[0][0] + arr[0][1] + arr[0][2];
    for (int i = 1; i < N; i++)
    {
        int currRowSum = 0;
        for (int j = 0; j < N; j++)
        {
            currRowSum += arr[i][j];
        }
        if (currRowSum > maxRowSum)
        {
            maxRowIdx = i;
            maxRowSum = currRowSum;
        }
    }
    return make_tuple(maxRowIdx, maxRowSum);
}

tuple<int, int> getMaxCol(int arr[][N]) {
    int maxColIdx = 0;
    int maxColSum = arr[0][0] + arr[1][0] + arr[2][0];
    for (int j = 1; j < N; j++)
    {
        int currColSum = 0;
        for (int i = 0; i < N; i++)
        {
            currColSum += arr[i][j];
        }
        if (currColSum > maxColSum) {
            maxColIdx = j;
            maxColSum = currColSum;
        }
    }
    return make_tuple(maxColIdx, maxColSum);
}