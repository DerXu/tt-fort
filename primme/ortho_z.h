/**********************************************************************
 *   PRIMME PReconditioned Iterative MultiMethod Eigensolver
 *   Copyright (C) 2005  James R. McCombs,  Andreas Stathopoulos
 *
 *   This file is part of PRIMME.
 *
 *   PRIMME is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Lesser General Public
 *   License as published by the Free Software Foundation; either
 *   version 2.1 of the License, or (at your option) any later version.
 *
 *   PRIMME is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Lesser General Public License for more details.
 *
 *   You should have received a copy of the GNU Lesser General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * File: ortho.h
 *
 * Purpose - Header file containing prototypes for in-core and
 *           out-of-core orthogonalization routines.  This header
 *           is to be included in user/developer source files that
 *           need to call these routines.
 *
 * Module name      : %M%
 * SID              : %I%
 * Date             : %G%
 **********************************************************************/

#include "int_redefine.h"

#ifndef ORTHO_H
#define ORTHO_H

int ortho_zprimme(Complex_Z *basis, int ldBasis, int b1, int b2,
   Complex_Z *locked, int ldLocked, int numLocked, int nLocal, int *iseed,
   double machEps, Complex_Z *rwork, int rworkSize, primme_params *primme);

int ortho_retained_vectors_zprimme (Complex_Z *currentVectors,
  int length, int numVectors, Complex_Z *previousVectors, int numPrevious,
  double machEps, Complex_Z *rwork);

#endif
