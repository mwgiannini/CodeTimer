#include "CodeTimer.h"

#include <chrono>

CodeTimer::CodeTimer()
{
    startTime = std::chrono::high_resolution_clock::now();
}

void CodeTimer::start()
{
    startTime = std::chrono::high_resolution_clock::now();
}

double CodeTimer::read()
{
    double NANOSECONDS = 1000000000.0; // Nanoseconds in a second
    auto endTime = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime - startTime) / NANOSECONDS;

    return elapsed.count();
}