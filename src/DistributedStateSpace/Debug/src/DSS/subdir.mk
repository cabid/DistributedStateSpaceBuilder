################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DSS/ArcSync.cpp \
../src/DSS/DistributedState.cpp \
../src/DSS/InternalArc.cpp \
../src/DSS/MetaGraph.cpp \
../src/DSS/MetaState.cpp \
../src/DSS/PElement.cpp \
../src/DSS/SCC.cpp 

OBJS += \
./src/DSS/ArcSync.o \
./src/DSS/DistributedState.o \
./src/DSS/InternalArc.o \
./src/DSS/MetaGraph.o \
./src/DSS/MetaState.o \
./src/DSS/PElement.o \
./src/DSS/SCC.o 

CPP_DEPS += \
./src/DSS/ArcSync.d \
./src/DSS/DistributedState.d \
./src/DSS/InternalArc.d \
./src/DSS/MetaGraph.d \
./src/DSS/MetaState.d \
./src/DSS/PElement.d \
./src/DSS/SCC.d 


# Each subdirectory must supply rules for building sources it contributes
src/DSS/%.o: ../src/DSS/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/include" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/DSS" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/src" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


