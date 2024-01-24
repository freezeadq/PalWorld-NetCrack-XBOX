#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x380 - 0x340)
// BlueprintGeneratedClass BP_PalGamemode_Login.BP_PalGamemode_Login_C
class ABP_PalGamemode_Login_C : public APalGameModeLogin
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 TitleWorld;                                        // 0x350(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalGamemode_Login_C* GetDefaultObj();

	void GoToTitle();
	void ExecuteUbergraph_BP_PalGamemode_Login(int32 EntryPoint);
};

}


