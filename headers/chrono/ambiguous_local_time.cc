#include <chrono>
#include <iostream>

using namespace std::chrono;
    
int main()
{
    try
    {
        // The following will throw an exception because converting 1:30am local time to system time could be interpreted as either 
        // 1:30 AM EDT or 1:30 AM EST. Which to choose isn't specified for the conversion, so an ambiguous_local_time
        // exception is thrown.
        auto zt = zoned_time{"America/New_York", local_days{Sunday[1]/November/2016} + 1h + 30min};
    } catch (const ambiguous_local_time& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}
