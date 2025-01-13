#ifndef KERNEL_HPP
#define KERNEL_HPP

#include <vector>
#include <Eigen/Dense>

class Kernel {
public:
    // Constructor/Destructor if needed
    Kernel() = default;
    virtual ~Kernel() = default;

    // Pure virtual function to compute covariance matrix
    // for given input x values
    virtual Eigen::MatrixXd computeCovariance(const std::vector<Eigen::VectorXd>& xData) const = 0;

    // Possibly a function to compute cross-covariance between training points and test points
    virtual Eigen::MatrixXd computeCrossCovariance(
        const std::vector<Eigen::VectorXd>& xTrain,
        const std::vector<Eigen::VectorXd>& xTest) const = 0;
};

#endif // KERNEL_HPP
