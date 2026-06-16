#include <iostream>
#include <memory>

int main() {

  {
    std::shared_ptr<int> x = std::make_shared<int>(44);
    std::weak_ptr<int> y = x;

    if (auto temp = y.lock()) {
      std::cout << *temp << std::endl;
    }
    if (y.expired() == 0) {
      std::cout << "false";
    } else {
      std::cout << "true" << "/n";
    }
    y.reset();
    if (y.expired() == 0) {
      std::cout << "false";
    } else {
      std::cout << "true" << "/n";
    }
  }

  return 0;
}
