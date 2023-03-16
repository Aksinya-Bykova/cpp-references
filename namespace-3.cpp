/* Repo https://github.com/Aksinya-Bykova/cpp-references
 * Thanks to IS Lectures https://github.com/is-itmo-c-22/lectures/blob/main/22.10.24/
 * Lecture%205.%20Reference%2C%20initialization%2C%20function%2C%20namespace.pdf*/

#include <iostream>

namespace {
int counter;
}

void increment() {
  counter++;
}

namespace A {
namespace {
int counter;
}

void increment() {
  counter++;
}
}

int main() {
  std::cout << counter << std::endl; // 0

  increment();
  std::cout << counter << std::endl; // 1

  std::cout << A::counter << std::endl; // 0

  A::increment();
  std::cout << A::counter << std::endl; // 1
}