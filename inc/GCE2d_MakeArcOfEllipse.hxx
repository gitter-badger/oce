// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GCE2d_MakeArcOfEllipse_HeaderFile
#define _GCE2d_MakeArcOfEllipse_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom2d_TrimmedCurve.hxx>
#include <GCE2d_Root.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Geom2d_TrimmedCurve;
class StdFail_NotDone;
class gp_Elips2d;
class gp_Pnt2d;


//! Implements construction algorithms for an arc of
//! ellipse in the plane. The result is a Geom2d_TrimmedCurve curve.
//! A MakeArcOfEllipse object provides a framework for:
//! -   defining the construction of the arc of ellipse,
//! -   implementing the construction algorithm, and
//! -   consulting the results. In particular, the Value
//! function returns the constructed arc of ellipse.
class GCE2d_MakeArcOfEllipse  : public GCE2d_Root
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Make an arc of Ellipse (TrimmedCurve from Geom2d) from
  //! a Ellipse between two parameters Alpha1 and Alpha2.
  Standard_EXPORT GCE2d_MakeArcOfEllipse(const gp_Elips2d& Elips, const Standard_Real Alpha1, const Standard_Real Alpha2, const Standard_Boolean Sense = Standard_True);
  
  //! Make an arc of Ellipse (TrimmedCurve from Geom2d) from
  //! a Ellipse between point <P> and the parameter
  //! Alpha.
  Standard_EXPORT GCE2d_MakeArcOfEllipse(const gp_Elips2d& Elips, const gp_Pnt2d& P, const Standard_Real Alpha, const Standard_Boolean Sense = Standard_True);
  
  //! Make an arc of Ellipse (TrimmedCurve from Geom2d) from
  //! a Ellipse between two points P1 and P2.
  //! Please, note: The orientation of the arc is:
  //! -   the trigonometric sense if Sense is not defined or
  //! is true (default value), or
  //! -   the opposite sense if Sense is false.
  //! -   Alpha1, Alpha2 and Alpha are angle values, given in radians.
  //! -   IsDone always returns true.
  Standard_EXPORT GCE2d_MakeArcOfEllipse(const gp_Elips2d& Elips, const gp_Pnt2d& P1, const gp_Pnt2d& P2, const Standard_Boolean Sense = Standard_True);
  
  //! Returns the constructed arc of ellipse.
  Standard_EXPORT  const  Handle(Geom2d_TrimmedCurve)& Value()  const;
  
  Standard_EXPORT  const  Handle(Geom2d_TrimmedCurve)& Operator()  const;
Standard_EXPORT operator Handle_Geom2d_TrimmedCurve() const;




protected:





private:



  Handle(Geom2d_TrimmedCurve) TheArc;


};







#endif // _GCE2d_MakeArcOfEllipse_HeaderFile
