/**
 * @file count.cpp
 *       Consists of some examples of count algorithm functions
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#define log(x) std::cout<<x<<std::endl;

int main()
{
    std::vector<int> v{ 1, 2, 6, 3, 7, 4, 3, 8 };
    //std::vector<int> v{ 1, 3,5 };

    /*
    @NOTE
    v.begin() and begin(v) are different as v.begin() is a member function and begin(v) is not a member function.
    But begin(v) internally returns v.begin() wherever possible and also works for C-style array also. So
    using begin(v) and end(v) is the safest habit.
     */

     /**
      * @brief count returns the number of pattern found
      */

    int c;
    c = count(v.begin(), v.end(), 3);
    c = count(begin(v), end(v), 4);

    /**
     * @brief count_if counts if some condition is met
     *  This depends on lambda
     */

    c = count_if(begin(v), end(v), [](auto elem)
        { return (elem % 2) != 0; });

    std::map<int, int> months{ {1, 31}, {2, 30}, {3, 31}, {4, 30},
        {5, 31}, {6, 30}, {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31} };

    c = count_if(begin(months), end(months), [](auto elem)
        { return (elem.second == 31); });

    //log(c);

    /**
     * @brief all_of - Returns true if all elements satisfies the condition
     *        any_of - Returns true if any of the elements satisfies the condition
     *        none_of - Returns true if none of the elements satisfies the condition
     */

    bool allOf = false, noneOf = false, anyOf = false;

    allOf = all_of(begin(v), end(v), [](auto elem) {
        return (elem % 2 != 0);
        });

    anyOf = any_of(begin(v), end(v), [](auto elem) {
        return (elem % 2 != 0);
        });

    noneOf = none_of(begin(v), end(v), [](auto elem) {
        return (elem % 2 != 0);
        });
        
    //log(allOf);
    //log(anyOf);
    //log(noneOf);
    return 0;
}