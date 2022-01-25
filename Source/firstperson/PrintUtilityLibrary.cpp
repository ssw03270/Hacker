// Fill out your copyright notice in the Description page of Project Settings.

#include "PrintUtilityLibrary.h"

bool UPrintUtilityLibrary::FileSaveString(FString SaveText, FString FileName)
{
	FFileHelper::SaveStringToFile(SaveText,*(FPaths::GameAgnosticSavedDir() + FileName));
	return false;
}
