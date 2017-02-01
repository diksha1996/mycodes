#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
  int A[] = {9,6,3,5,7};
  int B[] = {1,2,3,4,5};

  std::cout << "Before:" << std::endl;
  std::cout << "A; "; std::copy(A, A+5, std::ostream_iterator<int>(std::cout)); std::cout << std::endl;
  std::cout << "B; "; std::copy(B, B+5, std::ostream_iterator<int>(std::cout)); std::cout << std::endl;
  std::cout << std::endl;

  //create temporary array of pairs
  {
    std::pair<int, int> AB[5];

    //copy into pairs
    //Note that A values are put in "first" this is very important
    for( size_t i = 0; i<5; ++i)
    {
      AB[i].first  = A[i];
      AB[i].second = B[i];
    }

    std::sort(AB, AB+5);

    //Place back into arrays
    for( size_t i = 0; i<5; ++i)
    {
      A[i] = AB[i].first;  //<- This is actually optional
      B[i] = AB[i].second;
    }
  }

  std::cout << "After:" << std::endl;
  std::cout << "A; "; std::copy(A, A+5, std::ostream_iterator<int>(std::cout)); std::cout << std::endl;
  std::cout << "B; "; std::copy(B, B+5, std::ostream_iterator<int>(std::cout)); std::cout << std::endl;
  std::cout << std::endl;
}
