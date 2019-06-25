################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/src/Element_dss.cpp \
../src/src/PElement_dss.cpp \
../src/src/ProductSCC.cpp \
../src/src/RElement_dss.cpp \
../src/src/StateGraph.cpp 

OBJS += \
./src/src/Element_dss.o \
./src/src/PElement_dss.o \
./src/src/ProductSCC.o \
./src/src/RElement_dss.o \
./src/src/StateGraph.o 

CPP_DEPS += \
./src/src/Element_dss.d \
./src/src/PElement_dss.d \
./src/src/ProductSCC.d \
./src/src/RElement_dss.d \
./src/src/StateGraph.d 


# Each subdirectory must supply rules for building sources it contributes
src/src/%.o: ../src/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/include" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/DSS" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src/src" -I"/home/chiheb/ProjectCPP/DistributedStateSpace/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


