################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../DSS/DistributedState.cpp \
../DSS/MetaGraph.cpp \
../DSS/MetaState.cpp 

OBJS += \
./DSS/DistributedState.o \
./DSS/MetaGraph.o \
./DSS/MetaState.o 

CPP_DEPS += \
./DSS/DistributedState.d \
./DSS/MetaGraph.d \
./DSS/MetaState.d 


# Each subdirectory must supply rules for building sources it contributes
DSS/%.o: ../DSS/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


