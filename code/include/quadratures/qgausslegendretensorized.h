#ifndef QGAUSSLEGENDRETENSORIZED_H
#define QGAUSSLEGENDRETENSORIZED_H

#include "quadraturebase.h"

class QGaussLegendreTensorized : public QuadratureBase
{
  public:
    QGaussLegendreTensorized( unsigned order );
    virtual ~QGaussLegendreTensorized() {}

    inline void SetName() override { _name = "Tensorized Gauss-Legendre quadrature."; }
    inline void SetNq() override { _nq = pow( GetOrder(), 2 ); }
    void SetPointsAndWeights() override;
    void SetConnectivity() override;
};

#endif    // QGAUSSLEGENDRETENSORIZED_H