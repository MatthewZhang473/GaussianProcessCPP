#include "visualization.hpp"
#include <fstream>

void Visualization::writeToCSV(const std::string& filename, 
                               const Eigen::VectorXd& x, 
                               const Eigen::VectorXd& y)
{
    std::ofstream file(filename);
    file << "x,y\n";
    for (int i = 0; i < x.size(); i++) {
        file << x[i] << "," << y[i] << "\n";
    }
    file.close();
}
