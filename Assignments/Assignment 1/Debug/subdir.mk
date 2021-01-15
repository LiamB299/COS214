################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Cheetah.cpp \
../CheetahFactory.cpp \
../Lion.cpp \
../LionFactory.cpp \
../Predator.cpp \
../PredatorFactory.cpp \
../Prey.cpp \
../WildDog.cpp \
../WildDogFactory.cpp \
../Wolf.cpp \
../WolfFactory.cpp \
../main.cpp 

OBJS += \
./Cheetah.o \
./CheetahFactory.o \
./Lion.o \
./LionFactory.o \
./Predator.o \
./PredatorFactory.o \
./Prey.o \
./WildDog.o \
./WildDogFactory.o \
./Wolf.o \
./WolfFactory.o \
./main.o 

CPP_DEPS += \
./Cheetah.d \
./CheetahFactory.d \
./Lion.d \
./LionFactory.d \
./Predator.d \
./PredatorFactory.d \
./Prey.d \
./WildDog.d \
./WildDogFactory.d \
./Wolf.d \
./WolfFactory.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/liam/Documents/Second year/COS214/Assignments/Assignment 1" -include"/home/liam/Documents/Second year/COS214/Assignments/Assignment 1/Prey.h" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


