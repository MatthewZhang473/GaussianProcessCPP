#ifndef GP_REGRESSION_HPP
#define GP_REGRESSION_HPP

#include <vector>
#include <Eigen/Dense>
#include "kernel.hpp"
#include "likelihood.hpp"

class GPRegression {
public:
    // Constructor requires:
    // 1) A kernel (for computing covariance)
    // 2) A likelihood (for noise modeling)
    GPRegression(const Kernel& kernel, const Likelihood& likelihood);

    // Fit the GP with training data
    void fit(const std::vector<Eigen::VectorXd>& xTrain, 
             const Eigen::VectorXd& yTrain);

    // Predict for new inputs
    Eigen::VectorXd predictMean(const std::vector<Eigen::VectorXd>& xTest) const;
    Eigen::VectorXd predictVariance(const std::vector<Eigen::VectorXd>& xTest) const;

    // Optionally, a combined method to return both mean and variance
    void predict(const std::vector<Eigen::VectorXd>& xTest,
                 Eigen::VectorXd& meanOut,
                 Eigen::VectorXd& varOut) const;

private:
    const Kernel& m_kernel;
    const Likelihood& m_likelihood;

    // Store training data, possibly in arrays or Eigen objects
    std::vector<Eigen::VectorXd> m_xTrain;
    Eigen::VectorXd m_yTrain;

    // Precomputed: (K + noiseI)^(-1) for posterior calculations
    Eigen::MatrixXd m_KInv;
};

#endif // GP_REGRESSION_HPP
