// Copyright JAA Contributors 2023-2024

#pragma once
#include "Importer.h"

class USoundCueImporter : public IImporter {
public:
	USoundCueImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg, const TArray<TSharedPtr<FJsonValue>>& AllJsonObjects) :
		IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg, AllJsonObjects) {
	}

	virtual bool ImportData() override;
};
