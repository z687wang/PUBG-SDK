// PLAYERUNKNOWN'S BATTLEGROUNDS (3.6.13.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CategoryGroupWidget.CategoryGroupWidget_C.AddChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCategoryGroupWidget_C::AddChild(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget.CategoryGroupWidget_C.AddChild");

	UCategoryGroupWidget_C_AddChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function CategoryGroupWidget.CategoryGroupWidget_C.GetChilderenCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCategoryGroupWidget_C::GetChilderenCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget.CategoryGroupWidget_C.GetChilderenCount");

	UCategoryGroupWidget_C_GetChilderenCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function CategoryGroupWidget.CategoryGroupWidget_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UCategoryGroupWidget_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget.CategoryGroupWidget_C.Clear");

	UCategoryGroupWidget_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryGroupWidget.CategoryGroupWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryGroupWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget.CategoryGroupWidget_C.OnPrepass_1");

	UCategoryGroupWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryGroupWidget.CategoryGroupWidget_C.AddItemSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemSlotWidget_C*       ItemSlotWidget                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCategoryGroupWidget_C::AddItemSlot(class UItemSlotWidget_C** ItemSlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryGroupWidget.CategoryGroupWidget_C.AddItemSlot");

	UCategoryGroupWidget_C_AddItemSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemSlotWidget != nullptr)
		*ItemSlotWidget = params.ItemSlotWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
