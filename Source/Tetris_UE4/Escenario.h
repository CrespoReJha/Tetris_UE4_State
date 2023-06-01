// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstadoEscenario.h"
#include "Escenario.generated.h"

UCLASS()
class TETRIS_UE4_API AEscenario : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEscenario();

private:

	IEstadoEscenario* EstadoManana;
	IEstadoEscenario* EstadoTarde;
	IEstadoEscenario* EstadoNoche;
	IEstadoEscenario* Estado;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshEscenario;

	UMaterialInterface* materialEscenarioManana;

	AEscenario* iniciar();
	void cambiarEscenario(AEscenario* _Escenario);
	void cambiarEstado(IEstadoEscenario* _Estado);

	IEstadoEscenario* getEstadoManana();
	IEstadoEscenario* getEstadoTarde();
	IEstadoEscenario* getEstadoNoche();
	IEstadoEscenario* getEstado();
};
