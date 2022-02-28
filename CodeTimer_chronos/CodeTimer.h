#ifndef CODETIMER_H
#define CODETIMER_H

#include <chrono>

class CodeTimer
{
public:
    CodeTimer();

    /* Start the timer

    Pre: None
    Post: Record the current time
    */
    void start();

    /* Read the timer

    Pre: None
    Post: Return the time in seconds since start was last called
    If start was never called, return the age of the timer object
    */
    double read();
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
};

#endif