#include <iostream>
#include <string>
void printMessage(std::string name) {
    std::cout << "Hello " << name << std::endl;
}
int main() {
    std::cout << "SuperMan" << std::endl;
    printMessage("SuperMan");
    return 0;
}