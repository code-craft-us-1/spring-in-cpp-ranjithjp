#include <vector>
#include <cmath>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    const double nanVal = std::nanl("1");

    struct Stats
    {
        double average = nanVal;
        double max = nanVal;
        double min = nanVal;
    };
    
    Stats ComputeStatistics(const std::vector<double>& );
}
