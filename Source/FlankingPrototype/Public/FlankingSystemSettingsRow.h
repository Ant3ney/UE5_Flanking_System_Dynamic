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
        : autoDecrimentStart(2000), autoDecrimentAmmount(50), autoDecriment(true), manualCosts()
    {
        manualCosts.Init(0, 31); // Initialize 30 integers with a value of 0
        int32 max = manualCosts.Num();
        for (int32 i = 0; i < max; i++) {
            manualCosts[i] = autoDecrimentStart - (i * autoDecrimentAmmount);
        }
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 autoDecrimentStart;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        int32 autoDecrimentAmmount;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        bool autoDecriment;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
        TArray<int32> manualCosts;
};
