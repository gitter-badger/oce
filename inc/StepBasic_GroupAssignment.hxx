// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_GroupAssignment_HeaderFile
#define _StepBasic_GroupAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_GroupAssignment.hxx>

#include <Handle_StepBasic_Group.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_Group;


//! Representation of STEP entity GroupAssignment
class StepBasic_GroupAssignment : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_GroupAssignment();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepBasic_Group)& aAssignedGroup) ;
  
  //! Returns field AssignedGroup
  Standard_EXPORT   Handle(StepBasic_Group) AssignedGroup()  const;
  
  //! Set field AssignedGroup
  Standard_EXPORT   void SetAssignedGroup (const Handle(StepBasic_Group)& AssignedGroup) ;




  DEFINE_STANDARD_RTTI(StepBasic_GroupAssignment)

protected:




private: 


  Handle(StepBasic_Group) theAssignedGroup;


};







#endif // _StepBasic_GroupAssignment_HeaderFile
