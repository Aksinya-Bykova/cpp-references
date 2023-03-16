/* Repo https://github.com/Aksinya-Bykova/cpp-references
 * Thanks to IS Lectures https://github.com/is-itmo-c-22/lectures/blob/main/22.10.24/
 * Lecture%205.%20Reference%2C%20initialization%2C%20function%2C%20namespace.pdf*/

#include <iostream>

namespace {
void f() {
  std::cout << "Xoxoxo, just namespace!" << std::endl;
}
}

int main() {
  // example 1
  f();
}

/* But it can't be used if f() is some another namespace and called in main()*/