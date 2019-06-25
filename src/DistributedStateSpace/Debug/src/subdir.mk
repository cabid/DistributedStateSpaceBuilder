################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Arc.cpp \
../src/ArcSG.cpp \
../src/Automata.cpp \
../src/BitsVector.cpp \
../src/ConstructPetriFromFile.cpp \
../src/DisplaySummary.cpp \
../src/DistributedStateSpace.cpp \
../src/Element.cpp \
../src/ElementPhase1.cpp \
../src/ElementRed.cpp \
../src/ElementSG.cpp \
../src/Fils.cpp \
../src/Fusion.cpp \
../src/Graphe.cpp \
../src/GrapheSync.cpp \
../src/IntNode.cpp \
../src/ListMarquage.cpp \
../src/ListSync.cpp \
../src/MarquageEquivalent.cpp \
../src/MarquageExtended.cpp \
../src/MarquageGlobal.cpp \
../src/ModularPetriNet.cpp \
../src/ModularSpace.cpp \
../src/Node1.cpp \
../src/NodeSGSimplified.cpp \
../src/Operations.cpp \
../src/Parameters.cpp \
../src/PetriNet.cpp \
../src/PilePhase1.cpp \
../src/PileRed.cpp \
../src/Place.cpp \
../src/StdAfx.cpp \
../src/Transition.cpp 

OBJS += \
./src/Arc.o \
./src/ArcSG.o \
./src/Automata.o \
./src/BitsVector.o \
./src/ConstructPetriFromFile.o \
./src/DisplaySummary.o \
./src/DistributedStateSpace.o \
./src/Element.o \
./src/ElementPhase1.o \
./src/ElementRed.o \
./src/ElementSG.o \
./src/Fils.o \
./src/Fusion.o \
./src/Graphe.o \
./src/GrapheSync.o \
./src/IntNode.o \
./src/ListMarquage.o \
./src/ListSync.o \
./src/MarquageEquivalent.o \
./src/MarquageExtended.o \
./src/MarquageGlobal.o \
./src/ModularPetriNet.o \
./src/ModularSpace.o \
./src/Node1.o \
./src/NodeSGSimplified.o \
./src/Operations.o \
./src/Parameters.o \
./src/PetriNet.o \
./src/PilePhase1.o \
./src/PileRed.o \
./src/Place.o \
./src/StdAfx.o \
./src/Transition.o 

CPP_DEPS += \
./src/Arc.d \
./src/ArcSG.d \
./src/Automata.d \
./src/BitsVector.d \
./src/ConstructPetriFromFile.d \
./src/DisplaySummary.d \
./src/DistributedStateSpace.d \
./src/Element.d \
./src/ElementPhase1.d \
./src/ElementRed.d \
./src/ElementSG.d \
./src/Fils.d \
./src/Fusion.d \
./src/Graphe.d \
./src/GrapheSync.d \
./src/IntNode.d \
./src/ListMarquage.d \
./src/ListSync.d \
./src/MarquageEquivalent.d \
./src/MarquageExtended.d \
./src/MarquageGlobal.d \
./src/ModularPetriNet.d \
./src/ModularSpace.d \
./src/Node1.d \
./src/NodeSGSimplified.d \
./src/Operations.d \
./src/Parameters.d \
./src/PetriNet.d \
./src/PilePhase1.d \
./src/PileRed.d \
./src/Place.d \
./src/StdAfx.d \
./src/Transition.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/include" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/DSS" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/src" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DistributedStateSpace.o: ../src/DistributedStateSpace.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/DistributedStateSpace.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


