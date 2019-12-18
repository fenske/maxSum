#include <iostream>
#include "MaxRowCol.h"

using namespace std;


int main() {
    int arr[N][N] =
            {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9},
            };

    tuple<int, int> maxRow = getMaxRow(arr);
    int maxRowIdx = get<0>(maxRow);
    int maxRowSum = get<1>(maxRow);

    tuple<int, int> maxCol = getMaxCol(arr);
    int maxColIdx = get<0>(maxCol);
    int maxColSum = get<1>(maxCol);

    if (maxRowIdx == maxColIdx)
    {
        int maxSum = maxRowSum + maxColSum;
        cout << "Max sum: " << maxSum << endl;
    }
    else
    {
        cout << "Max row #: " << maxRowIdx << endl;
        cout << "Max col #: " << maxColIdx << endl;
    }
    return 0;
}