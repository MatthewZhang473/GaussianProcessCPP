#ifndef LIKELIHOOD_HPP
#define LIKELIHOOD_HPP

class Likelihood {
public:
    Likelihood() = default;
    virtual ~Likelihood() = default;

    // Method to get noise variance (assuming homoscedastic noise for now).
    // For more advanced usage, we could have a function to compute noise covariance matrix.
    virtual double getNoiseVariance() const = 0;
};

#endif // LIKELIHOOD_HPP
