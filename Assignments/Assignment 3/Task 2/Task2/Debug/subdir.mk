################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BorderGuard.cpp \
../Human.cpp \
../Observer.cpp \
../PrisonArea.cpp \
../Prisoner.cpp \
../Subject.cpp \
../main.cpp 

OBJS += \
./BorderGuard.o \
./Human.o \
./Observer.o \
./PrisonArea.o \
./Prisoner.o \
./Subject.o \
./main.o 

CPP_DEPS += \
./BorderGuard.d \
./Human.d \
./Observer.d \
./PrisonArea.d \
./Prisoner.d \
./Subject.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


