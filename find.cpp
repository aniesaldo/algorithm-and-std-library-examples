/**
 * @file find.cpp
 *       Consists of some examples of find algorithm functions
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define log(x) std::cout<<x<<std::endl;

int main()
{
//  find:

    std::vector<int> v{ 1, 2, 6, 3, 7, 4, 3, 8 };

    /**
     * @brief Returns iterator to first position of element 7
     */
    std::vector<int>::iterator pos = find(begin(v), end(v), 7);

    /**
     * @brief Returns iterator to first position of element 3 from element 7,
     *        Since, we have given starting iterator position as element 7 position.
     *        And same applies to string as well.
     */
    pos = find(pos, end(v), 7);


    std::string str{ "Hello World" };
    std::string::iterator p = find(begin(str), end(str), 'l');

    /**
     * @brief DIFFERENT VARIATIONS IN FINDING
     *  find_if - returns iterator to element which returns true first
     *  find_if_not - returns iterator to element which does not return true first
     *  find_first_of - It compares all the elements in a range [first1,last1) with the elements in the range [first2,last2), and
     *                  if any of the elements present in the second range is found in the first one , then it returns an iterator
     *                  to that element. We can also give our own function to compare else it will use '=='.
     *  search - Searches if the
     *  find_end - Finds the element from the end
     *  search_n - FInds whether it consists of given consecutive pattern, We can also give a predicate if needed
     *  adjacent_find - returns iterator where tere are 2 comsecutive same numbers else returns end iterator 
     */

     //find_if example
    auto c = find_if(begin(v), end(v), [](auto elem)
        { return (elem % 2) != 0; });

    /*  find_first_of:
       // Finding the first vowel in a  sentence using find_first_of
        // Defining first container
        std::string s1 = "You are reading about std::find_first_of";

        // Defining second container containing list of vowels
        std::string s2 = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O',
                    'u', 'U'};

        // Using std::find_first_of to find first occurrence of
        // a vowel
        auto ip=find_first_of(s1.begin(), s1.end(),s2.begin(),s2.end());

        // Displaying the first vowel found
        log("First vowel found at index "<< (ip - s1.begin()));
    */

/*  search_n
    int i, j;

    // Declaring the sequence to be searched into
    std::vector<int> v1 = { 1, 2, 3, 4, 5, 3, 3, 6, 7 };

    // Declaring the value to be searched for
    int v2 = 3;

    // Declaring an iterator for storing the returning pointer
    std::vector<int>::iterator i1;

    // Using std::search_n and storing the result in
    // iterator i1
    i1 = std::search_n(v1.begin(), v1.end(), 2, v2);

    // checking if iterator i1 contains end pointer of v1 or not
    if ( i1 != v1.end() ) {
        log("v2 is present consecutively 2 times at index "
            << (i1 - v1.begin()));
    }
    else {
        log("v2 is not present consecutively 2 times in "
            << "vector v1");
    }
*/
    return 0;
}
