// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_ShapeSet_HeaderFile
#define _TopTools_ShapeSet_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTools_IndexedMapOfShape_HeaderFile
#include <TopTools_IndexedMapOfShape.hxx>
#endif
#ifndef _TopTools_LocationSet_HeaderFile
#include <TopTools_LocationSet.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Message_ProgressIndicator_HeaderFile
#include <Handle_Message_ProgressIndicator.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_IStream_HeaderFile
#include <Standard_IStream.hxx>
#endif
#ifndef _TopAbs_ShapeEnum_HeaderFile
#include <TopAbs_ShapeEnum.hxx>
#endif
class Message_ProgressIndicator;
class TopoDS_Shape;
class TopTools_LocationSet;
class TCollection_AsciiString;


//! A ShapeSets    contains  a  Shape    and all   its <br>
//!          sub-shapes and locations.  It  can be dump,  write <br>
//!          and read. <br>
//! <br>
//!          Methods to handle the geometry can be redefined. <br>
//! <br>
class TopTools_ShapeSet  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Builds an empty ShapeSet. <br>
  Standard_EXPORT   TopTools_ShapeSet();
  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~TopTools_ShapeSet(){Delete() ; }
  
  Standard_EXPORT     void SetFormatNb(const Standard_Integer theFormatNb) ;
  //! two formats available for the moment: <br>
//!          First: does not write CurveOnSurface UV Points into the file <br>
//!                 on reading calls Check() method. <br>
//!          Second: stores CurveOnSurface UV Points. <br>
//!          On reading format is recognized from Version string. <br>
  Standard_EXPORT     Standard_Integer FormatNb() const;
  //! Clears the content of the set.  This method can be <br>
//!          redefined. <br>
  Standard_EXPORT   virtual  void Clear() ;
  //! Stores <S> and its sub-shape. Returns the index of <S>. <br>
//!          The method AddGeometry is called on each sub-shape. <br>
  Standard_EXPORT     Standard_Integer Add(const TopoDS_Shape& S) ;
  //! Returns the sub-shape of index <I>. <br>
//! <br>
  Standard_EXPORT    const TopoDS_Shape& Shape(const Standard_Integer I) const;
  //! Returns the index of <S>. <br>
  Standard_EXPORT     Standard_Integer Index(const TopoDS_Shape& S) const;
  
  Standard_EXPORT    const TopTools_LocationSet& Locations() const;
  
  Standard_EXPORT     TopTools_LocationSet& ChangeLocations() ;
  //! Dumps the number of objects in me on the stream <OS>. <br>
//! (Number of shapes of each type) <br>
  Standard_EXPORT     Standard_OStream& DumpExtent(Standard_OStream& OS) const;
  //! Dumps the number of objects in me in the string S <br>
//! (Number of shapes of each type) <br>
  Standard_EXPORT     void DumpExtent(TCollection_AsciiString& S) const;
  //! Dumps the content of me on the stream <OS>. <br>
//! <br>
//!          Dumps the shapes from first to last. <br>
//!            For each Shape <br>
//!               Dump the type, the flags, the subshapes <br>
//!               calls DumpGeometry(S) <br>
//! <br>
//! <br>
//!          Dumps the geometry calling DumpGeometry. <br>
//! <br>
//!          Dumps the locations. <br>
  Standard_EXPORT   virtual  void Dump(Standard_OStream& OS) const;
  //! Writes the content of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
//! <br>
//!          Writes the locations. <br>
//! <br>
//!          Writes the geometry calling WriteGeometry. <br>
//! <br>
//!          Dumps the shapes from last to first. <br>
//!            For each shape  : <br>
//!              Write the type. <br>
//!              calls WriteGeometry(S). <br>
//!              Write the flags, the subshapes. <br>
  Standard_EXPORT   virtual  void Write(Standard_OStream& OS) ;
  //! Reads the content of me from the  stream  <IS>. me <br>
//!          is first cleared. <br>
//! <br>
//!          Reads the locations. <br>
//! <br>
//!          Reads the geometry calling ReadGeometry. <br>
//! <br>
//!          Reads the shapes. <br>
//!            For each shape <br>
//!              Reads the type. <br>
//!              calls ReadGeometry(T,S). <br>
//!              Reads the flag, the subshapes. <br>
  Standard_EXPORT   virtual  void Read(Standard_IStream& IS) ;
  //! Dumps   on  <OS>    the  shape  <S>.   Dumps   the <br>
//!          orientation, the index of the TShape and the index <br>
//!          of the Location. <br>
  Standard_EXPORT     void Dump(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Writes   on  <OS>   the shape   <S>.    Writes the <br>
//!          orientation, the index of the TShape and the index <br>
//!          of the Location. <br>
  Standard_EXPORT     void Write(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Reads from <IS> a shape and returns it in S. <br>
  Standard_EXPORT     void Read(TopoDS_Shape& S,Standard_IStream& IS) const;
  //! Stores the geometry of <S>. <br>
  Standard_EXPORT   virtual  void AddGeometry(const TopoDS_Shape& S) ;
  //! Dumps the geometry of me on the stream <OS>. <br>
  Standard_EXPORT   virtual  void DumpGeometry(Standard_OStream& OS) const;
  //! Writes the geometry of  me  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
  Standard_EXPORT   virtual  void WriteGeometry(Standard_OStream& OS) ;
  //! Reads the geometry of me from the  stream  <IS>. <br>
  Standard_EXPORT   virtual  void ReadGeometry(Standard_IStream& IS) ;
  //! Dumps the geometry of <S> on the stream <OS>. <br>
  Standard_EXPORT   virtual  void DumpGeometry(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Writes the geometry of <S>  on the stream <OS> in a <br>
//!          format that can be read back by Read. <br>
  Standard_EXPORT   virtual  void WriteGeometry(const TopoDS_Shape& S,Standard_OStream& OS) const;
  //! Reads the geometry of a shape of type <T> from the <br>
//!          stream <IS> and returns it in <S>. <br>
  Standard_EXPORT   virtual  void ReadGeometry(const TopAbs_ShapeEnum T,Standard_IStream& IS,TopoDS_Shape& S) ;
  //! Inserts  the shape <S2> in  the  shape <S1>.  This <br>
//!          method must be   redefined  to  use   the  correct <br>
//!          builder. <br>
  Standard_EXPORT   virtual  void AddShapes(TopoDS_Shape& S1,const TopoDS_Shape& S2) ;
  //! This method is   called after  each  new  completed <br>
//!          shape. <T> is the  type. <S> is  the shape. In this <br>
//!          class it does nothing, but it gives the opportunity <br>
//!          in derived  classes to perform  extra  treatment on <br>
//!          shapes. <br>
  Standard_EXPORT   virtual  void Check(const TopAbs_ShapeEnum T,TopoDS_Shape& S) ;
  //!Returns number of shapes read from file. <br>
  Standard_EXPORT     Standard_Integer NbShapes() const;
  
  Standard_EXPORT     void SetProgress(const Handle(Message_ProgressIndicator)& PR) ;
  
  Standard_EXPORT     Handle_Message_ProgressIndicator GetProgress() const;





protected:





private:

  //! Reads  from <IS>  a shape  and  returns  it in  S. <br>
//!          <NbShapes> is the number of tshapes in the set. <br>
  Standard_EXPORT     void Read(TopoDS_Shape& S,Standard_IStream& IS,const Standard_Integer NbShapes) const;


TopTools_IndexedMapOfShape myShapes;
TopTools_LocationSet myLocations;
Standard_Integer myFormatNb;
Handle_Message_ProgressIndicator myProgress;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif