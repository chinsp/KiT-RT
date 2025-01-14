/*!
 * \file datagenerator3D.h
 * \brief Class to generate data for the neural entropy closure in 3D spatial dimensions
 * \author S. Schotthoefer
 */

#ifndef DATAGENERATOR2D_H
#define DATAGENERATOR2D_H

#include "toolboxes/datageneratorbase.h"

class DataGenerator2D : public DataGeneratorBase
{
  public:
    /*! @brief Class constructor. Generates training data for neural network approaches using
     *          spherical harmonics and an entropy functional and the quadrature specified by
     *          the options file.
     *   @param settings config class with global information*/
    DataGenerator2D( Config* settings );
    ~DataGenerator2D();

  private:
    // Main methods
    void SampleSolutionU() override; /*!< @brief Samples solution vectors u */

    // Helper functions
    void ComputeMoments() override;        /*!< @brief Pre-Compute Moments at all quadrature points. */
    void ComputeSetSize() override;        /*!< @brief Computes the size of the training set, depending on the chosen settings.*/
    void CheckRealizability() override;    // Debugging helper
};
#endif    // DATAGENERATOR2D_H
