// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESBasic_HArray1OfHArray1OfIGESEntity_HeaderFile
#define _IGESBasic_HArray1OfHArray1OfIGESEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESBasic_HArray1OfHArray1OfIGESEntity_HeaderFile
#include <Handle_IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#endif

#ifndef _TColStd_Array1OfTransient_HeaderFile
#include <TColStd_Array1OfTransient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_IGESData_HArray1OfIGESEntity_HeaderFile
#include <Handle_IGESData_HArray1OfIGESEntity.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class IGESData_HArray1OfIGESEntity;



class IGESBasic_HArray1OfHArray1OfIGESEntity : public MMgt_TShared {

public:

  
  Standard_EXPORT   IGESBasic_HArray1OfHArray1OfIGESEntity(const Standard_Integer low,const Standard_Integer up);
  
  Standard_EXPORT     Standard_Integer Lower() const;
  
  Standard_EXPORT     Standard_Integer Upper() const;
  
  Standard_EXPORT     Standard_Integer Length() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer num,const Handle(IGESData_HArray1OfIGESEntity)& val) ;
  
  Standard_EXPORT     Handle_IGESData_HArray1OfIGESEntity Value(const Standard_Integer num) const;




  DEFINE_STANDARD_RTTI(IGESBasic_HArray1OfHArray1OfIGESEntity)

protected:




private: 


TColStd_Array1OfTransient thelist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif