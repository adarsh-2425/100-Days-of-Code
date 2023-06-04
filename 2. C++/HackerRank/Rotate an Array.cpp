/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

#include <algorithm>
vector<int> rotateLeft(int d, vector<int> arr) {
    std::rotate(arr.begin(), arr.begin() + d, arr.end());
    return arr;
}
