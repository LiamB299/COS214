################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Task1/Button.cpp \
../Task1/Command.cpp \
../Task1/Fly.cpp \
../Task1/MoveBackward.cpp \
../Task1/MoveForward.cpp \
../Task1/RemoteControlCar.cpp \
../Task1/RemoteControlPlane.cpp \
../Task1/RemoteControlRocket.cpp \
../Task1/RemoteControlVehicle.cpp \
../Task1/RocketAdaptor.cpp \
../Task1/Speed.cpp \
../Task1/TurnOff.cpp \
../Task1/TurnOn.cpp \
../Task1/main.cpp 

OBJS += \
./Task1/Button.o \
./Task1/Command.o \
./Task1/Fly.o \
./Task1/MoveBackward.o \
./Task1/MoveForward.o \
./Task1/RemoteControlCar.o \
./Task1/RemoteControlPlane.o \
./Task1/RemoteControlRocket.o \
./Task1/RemoteControlVehicle.o \
./Task1/RocketAdaptor.o \
./Task1/Speed.o \
./Task1/TurnOff.o \
./Task1/TurnOn.o \
./Task1/main.o 

CPP_DEPS += \
./Task1/Button.d \
./Task1/Command.d \
./Task1/Fly.d \
./Task1/MoveBackward.d \
./Task1/MoveForward.d \
./Task1/RemoteControlCar.d \
./Task1/RemoteControlPlane.d \
./Task1/RemoteControlRocket.d \
./Task1/RemoteControlVehicle.d \
./Task1/RocketAdaptor.d \
./Task1/Speed.d \
./Task1/TurnOff.d \
./Task1/TurnOn.d \
./Task1/main.d 


# Each subdirectory must supply rules for building sources it contributes
Task1/%.o: ../Task1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


