#pragma once

#include "header.h"

namespace Derivative {
    void first_order_2d_x(const double* phi,
    const int& Nx, const int& Ny,
    const double& dx,
    double* dphi);
    void first_order_2d_y(const double* phi,
    const int& Nx, const int& Ny,
    const double& dy,
    double* dphi);

    void second_order_1d();
    void second_order_2d();
};