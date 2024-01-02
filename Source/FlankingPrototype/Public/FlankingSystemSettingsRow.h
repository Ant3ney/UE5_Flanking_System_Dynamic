#pragma once

#include "Engine/DataTable.h"
#include "UObject/ObjectMacros.h"
#include "FlankingSystemSettingsRow.generated.h"

USTRUCT(BlueprintType)
struct FFlankingSystemSettingsRow : public FTableRowBase
{
    GENERATED_BODY()

public:
    FFlankingSystemSettingsRow()
        : MyInt(0), MyBool(false), AdditionalInts()
    {
        AdditionalInts.Init(0, 30); // Initialize 30 integers with a value of 0
    }
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 MyInt;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool MyBool;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<int32> AdditionalInts;
};
