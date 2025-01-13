#ifndef VISUALIZATION_HPP
#define VISUALIZATION_HPP

#include <vector>
#include <string>
#include <Eigen/Dense>

class Visualization {
public:
    Visualization() = default;

    // Perhaps dump data to CSV for external plotting
    static void writeToCSV(const std::string& filename, 
                           const Eigen::VectorXd& x, 
                           const Eigen::VectorXd& y);

    // Or a more advanced plotting API (e.g., using third-party libraries)
};

#endif // VISUALIZATION_HPP
