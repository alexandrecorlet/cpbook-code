/*
 * Some useful functions implemented in std::<algorithm>
 *
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    /* non-modifying sequence operations */

    /*
     * all_of(InputIterator first, InputIterator last, UnaryPredicate pred)
     *
     *  - Test if all elements in [first, last) fulfills a given condition.
     *
     *  - Returns true if pred returns true for all the elements in the range
     * [first, last) or if the range is empty, otherwise returns false.
     *
     */
    // all_of example
    int array[] = {1, 3, 5, 7, 9};
    if ( all_of(array, array+5, [](int i){return i % 2;}) )
        printf("All the elements are odd numbers!\n");
    printf("\n");

    /*
     * any_of(InputIterator first, InputIterator last, UnaryPredicate pred)
     *
     *  - Test if any elements in [first, last) fulfills a given a condition.
     *
     *  - Returns true if pred returns true for any element in the range
     *  [first, last), otherwise returns false.
     *
     *  - If [first, last) is an empty range, returns false.
     */

    // any_of example
    char names[3][20] = {"leo", "guto", "alexandre"};
    if ( any_of(names, names+3, [](char name[]){return !strcmp(name, "alexandre");}) )
        printf("At least one of the names in the sequence is alexandre.\n");
    printf("\n");

    /*
     * none_of(InputIterator first, InputIterator last, UnaryPredicate pred)
     *
     *  - Test if no elements fulfill condition.
     *
     *  - Returns true if pred returns false false for all element in the
     *  range [first, last) or if the range is empty, otherwise returns true.
     *
     */
    // none_of example
    int negatives[] = {-1, -2, -3, -4, -5};
    if ( none_of(negatives, negatives+5, [](int i){return i >= 0;}) )
        printf("There are no elements >= 0 in the range.\n");
    printf("\n"); 

    /*
     * for_each(InputIterator first, InputIterator last, Function fn)
     *
     * - Apply function to range.
     *
     * - Applies function fn to each element in the range [first, last). 
     *
     */
    // for_each example
    int foo[] = {1, 2, 3};
    printf("foo contains:\n");
    for_each(foo, foo+3, [](int i){printf(" %d", i);});
    printf("\n\n");
    
    /*
     * find(InputIterator first, InputIterator last, const T& val)
     *
     * - Find value in range.
     *
     * - Returns an iterator to the first element in the range [first, last) that compares equal to val.
     *  If no such element is found, the function returns last.
     *
     * - The function uses the operator == to compare the individual elements to val.
     */
    // find example 
    // using find with array and pointer.
    int myints[] = {10, 20, 0, 100, 0};
    int *p;
    p = find(myints, myints+5, 0);
    if (p != myints+5)
        printf("Element found in myints: %d\n", *p);
    else
        printf("Element not found in myints.\n");
    // using find with vector and iterator
    vector<int> myvector(myints, myints+5);
    vector<int>::iterator it;                                   // auto it = find(myvector.begin(), myvector.end());
    it = find(myvector.begin(), myvector.end(), -1);
    if (it != myvector.end())
        printf("Element found in myvector: %d\n", *it);
    else
        printf("Element not found in myvector.\n");

    return 0;

}
