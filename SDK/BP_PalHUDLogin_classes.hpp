#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x618 - 0x608)
// BlueprintGeneratedClass BP_PalHUDLogin.BP_PalHUDLogin_C
class ABP_PalHUDLogin_C : public APalHUDInGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x608(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x610(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalHUDLogin_C* GetDefaultObj();

	void Initialize();
	void ExecuteUbergraph_BP_PalHUDLogin(int32 EntryPoint);
};

}


