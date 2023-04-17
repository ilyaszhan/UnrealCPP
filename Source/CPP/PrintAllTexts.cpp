// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintAllTexts.h"
#include "PrintText.h"

// Sets default values
APrintAllTexts::APrintAllTexts()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintAllTexts::BeginPlay()
{
	Super::BeginPlay();
	
	for (TActorIterator<APrintText> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->OnPrint();
	}
}

// Called every frame
void APrintAllTexts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

