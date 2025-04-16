#include "timefunctions.h"


int ThisYear()
{
    // Get the current time
    auto now = chrono::system_clock::now();

    // Convert to time_t to extract calendar time
    time_t current_time = chrono::system_clock::to_time_t(now);

    // Convert to tm structure for extracting year
    std::tm local_time;
    localtime_s(&local_time, &current_time);

    // Get the current year
    int current_year = 1900 + local_time.tm_year;
    return current_year;
}
