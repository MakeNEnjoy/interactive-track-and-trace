#ifndef ADVECTION_READDATA_H
#define ADVECTION_READDATA_H

/**
 * reads the file hydrodynamic_U.h5
 * @return the data vector of us
 */
std::vector<double> readHydrodynamicU();

/**
 * reads the file hydrodynamic_V.h5
 * @return the data vector of vs
 */
std::vector<double> readHydrodynamicV();

/**
 * Reads the file grid.h5
 * @return a tuple of (times, latitude, longitude)
 */
std::tuple<std::vector<int>, std::vector<double>, std::vector<double>> readGrid();

#endif //ADVECTION_READDATA_H