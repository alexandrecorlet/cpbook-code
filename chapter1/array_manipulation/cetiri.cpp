/*
 * Kattis: Cetiri
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int nums[9];
    for (int i = 0; i < 3; ++i)
        scanf("%d", &nums[i]);

    sort(nums, nums+3);

    int diff1 = nums[1] - nums[0];
    int diff2 = nums[2] - nums[1];
    
    if (diff1 == diff2)
        printf("%d\n", nums[2] + diff1);
    else if (diff1 > diff2)
        printf("%d\n", nums[0] + diff2);
    else
        printf("%d\n", nums[1] + diff1);

    return 0;

}
