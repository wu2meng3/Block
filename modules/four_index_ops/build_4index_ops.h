/*                                                                           
Developed by Sandeep Sharma and Garnet K.-L. Chan, 2012                      
Copyright (c) 2012, Garnet K.-L. Chan                                        
                                                                             
This program is integrated in Molpro with the permission of 
Sandeep Sharma and Garnet K.-L. Chan
*/


#ifndef BUILD_4INDEX_OPS_H
#define BUILD_4INDEX_OPS_H
//#include <communicate.h>
//#include "op_components.h"
#include "BaseOperator.h"
#include "spinblock.h"
//#include "operatorfunctions.h"
//#include "tensor_operator.h"
//#include <boost/shared_ptr.hpp>

namespace SpinAdapted{
namespace Four_index_ops{

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

void build_4index_ops( const opTypes& optype, SpinBlock& big,
                       const opTypes& lhsType1, const opTypes& lhsType2, const opTypes& lhsType3,
                       const opTypes& rhsType1, const opTypes& rhsType2, const opTypes& rhsType3 );

//-----------------------------------------------------------------------------------------------------------------------------------------------------------

}
}
#endif
