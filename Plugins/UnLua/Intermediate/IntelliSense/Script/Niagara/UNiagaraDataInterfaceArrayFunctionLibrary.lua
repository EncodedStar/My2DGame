---C++ and Blueprint library for accessing array types
---@class UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary
local UNiagaraDataInterfaceArrayFunctionLibrary = {}

---Sets Niagara Array FVector4 Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FVector4_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array FVector2D Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FVector2D_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array FVector Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FVector_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array FQuat Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FQuat_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array Int32 Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_integer_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array Float Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_number_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array FLinearColor Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_FLinearColor_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor(NiagaraSystem, OverrideName, ArrayData) end

---Sets Niagara Array Bool Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@param ArrayData TArray_boolean_
function UNiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool(NiagaraSystem, OverrideName, ArrayData) end

---Gets a copy of Niagara FVector4 Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_FVector4_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara FVector2D Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_FVector2D_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara FVector Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_FVector_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara FQuat Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_FQuat_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara Int32 Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_integer_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara Float Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_number_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara FLinearColor Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_FLinearColor_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor(NiagaraSystem, OverrideName) end

---Gets a copy of Niagara Bool Data.
---@param NiagaraSystem UNiagaraComponent
---@param OverrideName string
---@return TArray_boolean_
function UNiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool(NiagaraSystem, OverrideName) end

