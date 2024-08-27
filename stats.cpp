#include "stats.h"
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<double>& stats) {

    struct Stats output;

    if (!stats.empty()) {
        output.average = ((std::accumulate(stats.begin(), stats.end(), 0.0)) / stats.size());
        output.max = std::max_element(stats.begin(), stats.end()).operator*();
        output.min = std::min_element(stats.begin(), stats.end()).operator*();
    }
    return output;
}
