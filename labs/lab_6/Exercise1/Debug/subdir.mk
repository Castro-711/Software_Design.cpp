################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../driver.cpp \
../taxi.cpp \
../truck.cpp \
../vehicle.cpp 

OBJS += \
./driver.o \
./taxi.o \
./truck.o \
./vehicle.o 

CPP_DEPS += \
./driver.d \
./taxi.d \
./truck.d \
./vehicle.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


