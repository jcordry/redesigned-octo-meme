#include <thread>
#include <iostream>

void fun()
{
    std::cout << "Hello from function.\n";
}

int main(int argc, const char *argv[])
{
    std::thread t(fun);
    std::cout << "Hello from main thread.\n";
    t.join();
    return 0;
}
