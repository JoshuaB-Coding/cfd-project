#include "derivatives.h"

void Derivative::first_order_2d_x(const double* phi,
    const int& Nx, const int& Ny,
    const double& dx,
    double* dphi) {
    const double ct = 1.0 / (2.0 * dx);
    for (unsigned int j = 0; j < Ny; j++) {
        dphi[j*Nx] = ct * (phi[j*Nx + 1] - phi[(j + 1)*Nx - 1]);
        for (unsigned int i = 1; i < Nx-1; i++) {
            dphi[j*Nx + i] = ct * (phi[j*Nx + i + 1] - phi[j*Nx + i - 1]);
        }
        dphi[(j + 1)*Nx - 1] = ct * (phi[j*Nx] - phi[(j + 1)*Nx - 2]);
    }
}

void Derivative::first_order_2d_y(const double* phi,
    const int& Nx, const int& Ny,
    const double& dy,
    double* dphi) {
    const double ct = 1.0 / (2.0 * dy);
    
}

void Derivative::second_order_1d() {
    // u[i+1]-2*u[i]+u[i-1]
}

void Derivative::second_order_2d() {

}