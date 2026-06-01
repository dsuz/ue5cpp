// Fill out your copyright notice in the Description page of Project Settings.


#include "Chapter01GameModeBase.h"

void AChapter01GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Some Warning Message"));
}
