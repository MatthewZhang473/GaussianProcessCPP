#include <iostream>
#include "../Eigen/Dense"

int main() {
    Eigen::VectorXd x(3);
    x << 1.0, 2.0, 3.0;

    Eigen::MatrixXd covariance(3, 3);
    covariance << 1.0, 0.2, 0.1,
                  0.2, 1.0, 0.3,
                  0.1, 0.3, 1.0;

    Eigen::VectorXd mean(3);
    mean << 0.0, 0.0, 0.0;

    Eigen::VectorXd diff = x - mean;
    Eigen::MatrixXd covInv = covariance.inverse();

    double quadraticTerm = diff.transpose() * covInv * diff;
    std::cout << "Quadratic term: " << quadraticTerm << std::endl;

    return 0;
}
