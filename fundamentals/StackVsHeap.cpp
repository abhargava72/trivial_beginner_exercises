#include <iostream>

int global = 10; // data segment

int main() {
  using std::cin;
  using std::cout;
  int a = 5;            // stack
  int *b = new int(20); // heap
  cout << b << "\n";
  delete b;

  int *firstPointer = new int(50);
  int *secondPointer = firstPointer;

  delete firstPointer;
  firstPointer = nullptr;
  cout << *secondPointer;

  return 0;
}

// | Memory Area  | Stores                               | Lifetime | |
// ------------ | ------------------------------------ |
// ----------------------------------- | | Stack        | Local variables,
// function parameters | Until function returns              | | Heap         |
// `new`, `malloc`, dynamic objects     | Until manually freed / RAII cleanup |
// | Data Segment | Global and static variables          | Entire program | |
// Code Segment | Program instructions                 | Entire program |

// new        = one thing
// delete     = remove one thing

// new[]      = array of things
// delete[]   = remove array of things

// Where is firstPtr stored? Stack
// Where is secondPtr stored? Stack
// Where is the value 50 stored? heap
// After this line:
// delete firstPtr;
// what happens to the heap memory? freed up
// 5. Is this line safe?
// std::cout << *secondPtr; No since its dereferencing a memory block that has
// been freed up. It is undefined behavior How would you fix the problem? make
// secondPointer a shallow copy of the first pointer