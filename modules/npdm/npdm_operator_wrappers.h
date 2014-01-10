/*
Developed by Sandeep Sharma and Garnet K.-L. Chan, 2012
Copyright (c) 2012, Garnet K.-L. Chan

This program is integrated in Molpro with the permission of
Sandeep Sharma and Garnet K.-L. Chan
*/

#ifndef NPDM_OP_WRAPPERS_H
#define NPDM_OP_WRAPPERS_H

#include <boost/mpi.hpp>
#include "BaseOperator.h"
#include "operatorfunctions.h"
#include "npdm_spin_ops.h"
//FIXME serialize bullshit
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/string.hpp>

namespace SpinAdapted{

//===========================================================================================================================================================
//  4-INDEX compound Ops (build using RI approximation, exact on dot block)
//===========================================================================================================================================================

class Npdm_op_wrapper_compound_CCDD : public NpdmSpinOps {
  public:
//FIXME constructors / destructors??
    Npdm_op_wrapper_compound_CCDD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
};

//===========================================================================================================================================================
//  4-INDEX Ops
//===========================================================================================================================================================

class Npdm_op_wrapper_CCDD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CCDD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE_DES_DES).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE_DES_DES).get_array(); }
};

//===========================================================================================================================================================
//  3-INDEX compound Ops (build using RI approximation, exact on dot block)
//===========================================================================================================================================================

class Npdm_op_wrapper_compound_CCD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_compound_CCD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_compound_CDD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_compound_CDD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_compound_CDC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_compound_CDC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_DES).get_local_indices(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_compound_CCC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_compound_CCC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_compound_DCD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_compound_DCD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_DES).get_local_indices(); }
};

//===========================================================================================================================================================
//  3-INDEX Ops
//===========================================================================================================================================================

class Npdm_op_wrapper_CCC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CCC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_CCD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CCD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE_DES).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE_DES).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_CDD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CDD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_DES_DES).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_DES_DES).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_CDC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CDC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_DES_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_DES_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DCD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DCD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(DES_CRE_DES).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(DES_CRE_DES).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DDC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DDC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(DES_DES_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(DES_DES_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DCC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DCC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(DES_DES_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(DES_DES_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DDD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DDD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE_CRE).get_array(); }
};

//===========================================================================================================================================================
//  2-INDEX Ops
//===========================================================================================================================================================

class Npdm_op_wrapper_CC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_CD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_CD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_DES).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_DES).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DC : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DC( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(DES_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(DES_CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_DD : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_DD( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE_CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE_CRE).get_array(); }
};

//===========================================================================================================================================================
//  1-INDEX Ops
//===========================================================================================================================================================

class Npdm_op_wrapper_C : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_C( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE).get_array(); }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

class Npdm_op_wrapper_D : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_D( SpinBlock * spinBlock );
    bool set_local_ops( int idx );
    const std::vector< int >& get_1d_indices() { return spinBlock_->get_op_array(CRE).get_local_indices(); }
    std::vector< std::vector<int> > get_indices() { return spinBlock_->get_op_array(CRE).get_array(); }
};

//===========================================================================================================================================================
//  NULL case (for empty creation-destruction patterns)
//===========================================================================================================================================================

class Npdm_op_wrapper_NULL : public NpdmSpinOps {
  public:
    Npdm_op_wrapper_NULL();
    bool set_local_ops( int idx );
};

//===========================================================================================================================================================

//BOOST_CLASS_EXPORT( NpdmSpinOps );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_CCDD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CCDD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_CCD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_CDD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_CDC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_CCC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_compound_DCD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CCC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CCD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CDD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CDC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DCD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DDC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DCC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DDD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_CD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DC );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_DD );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_C );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_D );
//BOOST_CLASS_EXPORT( Npdm_op_wrapper_NULL );
//

}

#endif
