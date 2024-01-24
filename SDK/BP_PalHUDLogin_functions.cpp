#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalHUDLogin.BP_PalHUDLogin_C
// (Actor)

class UClass* ABP_PalHUDLogin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalHUDLogin_C");

	return Clss;
}


// BP_PalHUDLogin_C BP_PalHUDLogin.Default__BP_PalHUDLogin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalHUDLogin_C* ABP_PalHUDLogin_C::GetDefaultObj()
{
	static class ABP_PalHUDLogin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalHUDLogin_C*>(ABP_PalHUDLogin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalHUDLogin.BP_PalHUDLogin_C.Initialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PalHUDLogin_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalHUDLogin_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalHUDLogin.BP_PalHUDLogin_C.ExecuteUbergraph_BP_PalHUDLogin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalHUDLogin_C::ExecuteUbergraph_BP_PalHUDLogin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalHUDLogin_C", "ExecuteUbergraph_BP_PalHUDLogin");

	Params::ABP_PalHUDLogin_C_ExecuteUbergraph_BP_PalHUDLogin_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


