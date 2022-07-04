// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include "CoreMinimal.h"
#include "LuaEnvLocator.h"
#include "UnLuaSettings.generated.h"


UCLASS(Config=UnLua, DefaultConfig, Meta=(DisplayName="UnLua"))
class UNLUA_API UUnLuaSettings : public UObject
{
    GENERATED_BODY()

public:
    UUnLuaSettings(const FObjectInitializer& ObjectInitializer);

    UPROPERTY(Config, EditAnywhere, Category=Runtime, Meta=(AllowAbstract="false", DisplayName="LuaEnvLocator"))
    TSubclassOf<ULuaEnvLocator> EnvLocatorClass = ULuaEnvLocator::StaticClass();
};
