#include <iostream>
#include <chrono>
#include <thread>
int main(){
  std::cout << "Hello world!\n";
std::this_thread::sleep_for(std::chrono::seconds(3));
std::cout << "Hey world! 3 seconds passed.";
std::cin.get();
return 0;
}


