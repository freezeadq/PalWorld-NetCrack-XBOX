#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalGamemode_Login.BP_PalGamemode_Login_C
// (Actor)

class UClass* ABP_PalGamemode_Login_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalGamemode_Login_C");

	return Clss;
}


// BP_PalGamemode_Login_C BP_PalGamemode_Login.Default__BP_PalGamemode_Login_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalGamemode_Login_C* ABP_PalGamemode_Login_C::GetDefaultObj()
{
	static class ABP_PalGamemode_Login_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalGamemode_Login_C*>(ABP_PalGamemode_Login_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalGamemode_Login.BP_PalGamemode_Login_C.GoToTitle
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PalGamemode_Login_C::GoToTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGamemode_Login_C", "GoToTitle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalGamemode_Login.BP_PalGamemode_Login_C.ExecuteUbergraph_BP_PalGamemode_Login
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalGamemode_Login_C::ExecuteUbergraph_BP_PalGamemode_Login(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalGamemode_Login_C", "ExecuteUbergraph_BP_PalGamemode_Login");

	Params::ABP_PalGamemode_Login_C_ExecuteUbergraph_BP_PalGamemode_Login_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


