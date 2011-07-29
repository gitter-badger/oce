// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic2d_Text_HeaderFile
#define _Graphic2d_Text_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Graphic2d_Text_HeaderFile
#include <Handle_Graphic2d_Text.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_ShortReal_HeaderFile
#include <Standard_ShortReal.hxx>
#endif
#ifndef _Aspect_TypeOfText_HeaderFile
#include <Aspect_TypeOfText.hxx>
#endif
#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Quantity_Factor_HeaderFile
#include <Quantity_Factor.hxx>
#endif
#ifndef _Graphic2d_TypeOfAlignment_HeaderFile
#include <Graphic2d_TypeOfAlignment.hxx>
#endif
#ifndef _Graphic2d_Primitive_HeaderFile
#include <Graphic2d_Primitive.hxx>
#endif
#ifndef _Handle_Graphic2d_GraphicObject_HeaderFile
#include <Handle_Graphic2d_GraphicObject.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Quantity_PlaneAngle_HeaderFile
#include <Quantity_PlaneAngle.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
#ifndef _Handle_Graphic2d_Drawer_HeaderFile
#include <Handle_Graphic2d_Drawer.hxx>
#endif
#ifndef _Aspect_FStream_HeaderFile
#include <Aspect_FStream.hxx>
#endif
class Graphic2d_GraphicObject;
class TCollection_ExtendedString;
class Graphic2d_Drawer;


//! The primitive Text <br>
class Graphic2d_Text : public Graphic2d_Primitive {

public:

  //! Creates a text in a graphic object <aGraphicObject> <br>
//!	    The text is <aText>. <br>
//!	    The reference point is <X>, <Y>. <br>
//!	    The orientation angle is <anAngle>. <br>
//!	    The type of text is <aType> and must be one of : <br>
//!		Aspect_TOT_SOLID, <br>
//!		Aspect_TOT_OUTLINE, <br>
//!	    The scale factor apply to the original font size, <br>
//!	    Angles are measured counterclockwise with 0 radian <br>
//!	    at 3 o'clock. <br>
//!  Warning: a text can be orientable,slantable,zoomable or outlinable <br>
//! only when this options are enable regardless of the graphic driver. <br>
//! i.e: Xw driver does not,but Xdps or PS driver does. <br>
  Standard_EXPORT   Graphic2d_Text(const Handle(Graphic2d_GraphicObject)& aGraphicObject,const TCollection_ExtendedString& aText,const Standard_Real X,const Standard_Real Y,const Quantity_PlaneAngle anAngle = 0.0,const Aspect_TypeOfText aType = Aspect_TOT_SOLID,const Quantity_Factor aScale = 1.0);
  //! Sets the font index for the text <me>. <br>
//!  Warning: Note that the index 0 can be undefined as a FontMapEntry, <br>
//!        in this case the default system text font is taken. <br>
  Standard_EXPORT     void SetFontIndex(const Standard_Integer anIndex = 0) ;
  //! Sets the slant angle of the text <me>. <br>
  Standard_EXPORT     void SetSlant(const Quantity_PlaneAngle aSlant = 0.0) ;
  //! The text <me> follows the scale factor of the view <br>
//!          if the flag is Standard_True. <br>
  Standard_EXPORT     void SetZoomable(const Standard_Boolean aFlag = Standard_True) ;
  //! Sets the Device space offset of the text <me>. <br>
  Standard_EXPORT     void SetOffset(const Standard_Real aDx = 0.0,const Standard_Real aDy = 0.0) ;
  //! Enable/Disable text underline. <br>
  Standard_EXPORT     void SetUnderline(const Standard_Boolean isUnderlined = Standard_False) ;
  //! Sets the  text alignment. <br>
  Standard_EXPORT     void SetAlignment(const Graphic2d_TypeOfAlignment anAlignment = Graphic2d_TOA_LEFT) ;
  //! Compute text size depending of a required bounding box, <br>
//!	    Adjust the text position depending of the text origine <br>
//!	    and base line if "Adjust" is TRUE, <br>
//!	    Expand the text when the Width is smaller that the <br>
//!	    Fit Width if "Expand" is TRUE. <br>
//!          and returns Standard_True if the current Driver used is <br>
//!	    enable to fit the text size. <br>
//!  Warning: The fit computation is apply only if the corresponding <br>
//! dimension is > 0. <br>
  Standard_EXPORT   virtual  Standard_Boolean Fit(const Quantity_Length aWidth,const Quantity_Length aHeight,const Standard_Boolean Adjust = Standard_True,const Standard_Boolean Expand = Standard_True) ;
  //! Trunc the text when the Width of the text is greater <br>
//!	    that the defined Width Max, <br>
//!          and returns Standard_True if the current Driver used is <br>
//!	    enable to trunc the text size. <br>
  Standard_EXPORT   virtual  Standard_Boolean Trunc(const Quantity_Length aWidth) ;
  //! Returns Standard_True if the Text <me> follows <br>
//!          the scale factor of the view. <br>
  Standard_EXPORT     Standard_Boolean IsZoomable() const;
  //! Returns Standard_True if the Text <me> is underlined. <br>
  Standard_EXPORT     Standard_Boolean IsUnderlined() const;
  //! Returns Standard_True if the current Driver used is enabled <br>
//!	   to get the right size in the <br>
//!	   world size parameter <aWidth>,<aHeight> <br>
//!	   depending of the attributes of the text and the current scale <br>
//!	   of the view. <br>
  Standard_EXPORT     Standard_Boolean TextSize(Quantity_Length& aWidth,Quantity_Length& aHeight) const;
  //! Returns Standard_True if the current Driver used is enabled <br>
//!	   to get the right size and text offsets in the <br>
//!	   world size parameter <aWidth>,<aHeight>,<anXoffset>,<anYoffset> <br>
//!	   depending of the attributes of the text and the current scale <br>
//!	   of the view. <br>
//!	    NOTE that the text offsets defines the relative position of the <br>
//!	   of the text string origin from the lower left corner of the text <br>
//!	   boundary limits. <br>
  Standard_EXPORT   virtual  Standard_Boolean TextSize(Quantity_Length& aWidth,Quantity_Length& aHeight,Quantity_Length& anXoffset,Quantity_Length& anYoffset) const;
  //! Returns the text position. <br>
  Standard_EXPORT     void Position(Quantity_Length& X,Quantity_Length& Y) const;
  //! Returns the text Offset. <br>
  Standard_EXPORT     void Offset(Standard_Real& X,Standard_Real& Y) const;
  //! Returns the text slant. <br>
  Standard_EXPORT     Quantity_PlaneAngle Slant() const;
  //! Returns the text orientation. <br>
  Standard_EXPORT     Quantity_PlaneAngle Angle() const;
  //! Returns the text font index. <br>
  Standard_EXPORT     Standard_Integer FontIndex() const;
  //! Returns the text scale. <br>
  Standard_EXPORT     Quantity_Factor Scale() const;
  //! Returns the text alignment. <br>
  Standard_EXPORT     Graphic2d_TypeOfAlignment Alignment() const;
  //! Returns the text string <br>
  Standard_EXPORT     TCollection_ExtendedString GetText() const;
  //! Returns the type text <br>
  Standard_EXPORT     Aspect_TypeOfText GetType() const;
  
  Standard_EXPORT   virtual  void Save(Aspect_FStream& aFStream) const;




  DEFINE_STANDARD_RTTI(Graphic2d_Text)

protected:

  //! Draws the text <me>. <br>
  Standard_EXPORT   virtual  void Draw(const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Returns Standard_True if the text <me> is picked, <br>
//!	    Standard_False if not. <br>
  Standard_EXPORT   virtual  Standard_Boolean Pick(const Standard_ShortReal X,const Standard_ShortReal Y,const Standard_ShortReal aPrecision,const Handle(Graphic2d_Drawer)& aDrawer) ;
  //! Computes the MinMax of the text if possible. <br>
  Standard_EXPORT   virtual  Standard_Boolean ComputeMinMax() ;

Standard_Integer myFontIndex;
Standard_ShortReal myX;
Standard_ShortReal myDx;
Standard_ShortReal myY;
Standard_ShortReal myDy;
Standard_ShortReal myAngle;
Aspect_TypeOfText myType;
TCollection_ExtendedString myText;
Standard_Boolean myAdjustFlag;
Standard_ShortReal myDeltax;
Standard_ShortReal myDeltay;
Standard_ShortReal mySlant;
Standard_Boolean myIsZoomable;
Standard_Boolean myIsUnderlined;
Quantity_Factor myHScale;
Quantity_Factor myWScale;
Graphic2d_TypeOfAlignment myAlignment;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif