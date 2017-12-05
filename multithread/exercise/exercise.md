1. Modify the code below by using two threads to calculate sum. Since nowadays most processors have at least two cores, multi-threading is preferred to reduce execution time.
```c++
#include <boost/date_time/posix_time/posix_time.hpp> 
#include <boost/cstdint.hpp> 
#include <iostream> 

int main() 
{ 
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::local_time(); 

  boost::uint64_t sum = 0; 
  for (int i = 0; i < 1000000000; ++i) 
    sum += i; 

  boost::posix_time::ptime end = boost::posix_time::microsec_clock::local_time(); 
  std::cout << end - start << std::endl; 

  std::cout << sum << std::endl; 
} 
```
2. Try to use as many threads as the machine allows to generalize example above. For example, if a processor has four cores, then we should make good use of four threads.

3. Modify code below, execute thread() in the thread of main(). The program should be able to calculate the sum, then print the output to std twice. It's allowed to change implementation of calculate(), print() and thread(), but you must keep the function head stil the same. In other words, each function should have no arguments, neither do they need to return a value.
```c++
#include <iostream> 

int sum = 0; 

void calculate() 
{ 
  for (int i = 0; i < 1000; ++i) 
    sum += i; 
} 

void print() 
{ 
  std::cout << sum << std::endl; 
} 

void thread() 
{ 
  calculate(); 
  print(); 
} 

int main() 
{ 
  thread(); 
} 
```
