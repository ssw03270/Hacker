// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PrintUtilityLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSON_API UPrintUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "save")
	static bool FileSaveString(FString SaveText, FString FileName);
};
