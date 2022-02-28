#include <iostream>
#include <iomanip>
#include "CodeTimer/CodeTimer.h"

int main()
{
    CodeTimer timer;

    for(int i = 0; i < 5000; i++)
        std::cout << "test\n";

    std::cout << std::fixed << std::setprecision(15);
    std::cout << "It took " << timer.read() << " seconds to print 5,000 lines\n\n";

    timer.start();

    std::cout << "test\n";

    std::cout << std::fixed << std::setprecision(15);
    std::cout << "It took " << timer.read() << " seconds to print 1 lines\n";

    return 0;
}
