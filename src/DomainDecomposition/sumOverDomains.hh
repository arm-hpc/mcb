//----------------------------------*-C++-*----------------------------------//
// Copyright 2009 Lawrence Livermore National Security, LLC
// All rights reserved.
//---------------------------------------------------------------------------//

// This work performed under the auspices of the U.S. Department of Energy by
// Lawrence Livermore National Laboratory under Contract DE-AC52-07NA27344

//  DISCLAIMER
//  This work was prepared as an account of work sponsored by an agency of the
//  United States Government. Neither the United States Government nor the
//  Lawrence Livermore National Security, LLC, nor any of their employees,
//  makes any warranty, express or implied, including the warranties of
//  merchantability and fitness for a particular purpose, or assumes any
//  legal liability or responsibility for the accuracy, completeness, or
//  usefulness of any information, apparatus, product, or process disclosed,
//  or represents that its use would not infringe privately owned rights.

//---------------------------------------------------------------------------//
//    function to sum values over the different domains (i. e., only over the
//    master domains) then broadcast the value to all procs
//---------------------------------------------------------------------------//

namespace IMC_namespace
{
   
    template<typename MeshType, typename DataType>
    void
    sumOverDomains( const MeshType& Mesh,
                    DataType inputValue, 
                    DataType& summedValue );


#ifdef USE_OPENMP
    template<typename MeshType, typename DataType>
    void
    sumOverDomainsThreaded( const MeshType& Mesh,
                            DataType inputValue, 
                            DataType& summedValue,
                            std::vector<DataType> &sharedData);
#endif
}    //    IMC_namespace
