#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

int main(){
    std::vector<int> var = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<std::string> str={"one", "two", "three", "four", "five"};
    /*
    *This function is used to copy or overwrite an array
    */
    //start iterator, end iterator, destination start iterator
    std::copy(var.begin(),var.begin()+2, var.begin()+4);
    //start iterator,count,destination start iterator
    std::copy_n(var.begin(), 2, var.begin()+2);
    std::vector<int>a{2,5,1,8,4,9};
    std::vector<int> res(a.size());
    //start iterator, end iterator, destination start iterator, conditioning checking function
    std::copy_if(a.begin(), a.end(), res.begin(), [](int num){return (num%2!=0);});
    /*
    *This function is used to move and no copy is made,
    *Move can be performed either inside same array
    *or outside to another array
    */
    //start iterator, end iterator, destination start iterator
    std::move(str.begin()+1, str.begin()+2, str.begin()+4);
}
