// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter01GameModeBase.h"

void AChapter01GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Some Warning Message"));
	
	int i = 5;
	float f = 3.7f;
	FString s = "string";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), i, f, *s);
	
	FString name = "Tim";
	int32 mana = 450;
	FString str = FString::Printf(TEXT("Name = %s, Mana = %d"), *name, mana);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *str);
}
