/* Repo https://github.com/Aksinya-Bykova/cpp-references
 * Thanks to IS Lectures https://github.com/is-itmo-c-22/lectures/blob/main/22.10.24/
 * Lecture%205.%20Reference%2C%20initialization%2C%20function%2C%20namespace.pdf*/

#include <iostream>

namespace Foo {
void f() {
  std::cout << "Foo" << std::endl;
}
}

namespace Boo {
void f() {
  std::cout << "Boo" << std::endl;
}
}

namespace Doo {
namespace VeryLongName {
void f() {
  std::cout << "Something" << std::endl;
}
}
}

int main() {
  // example 1
  Boo::f();

  // example 2
  namespace SN = Doo::VeryLongName;
  SN::f();

  // example 3
  using namespace Foo;
  f();
}



