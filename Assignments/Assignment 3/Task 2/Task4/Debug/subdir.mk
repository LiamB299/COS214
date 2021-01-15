################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ConcreteSocialSiteMediator.cpp \
../Inbox.cpp \
../OldStatus.cpp \
../SocialSiteMediator.cpp \
../SocialSiteUser.cpp \
../User.cpp \
../test.cpp 

OBJS += \
./ConcreteSocialSiteMediator.o \
./Inbox.o \
./OldStatus.o \
./SocialSiteMediator.o \
./SocialSiteUser.o \
./User.o \
./test.o 

CPP_DEPS += \
./ConcreteSocialSiteMediator.d \
./Inbox.d \
./OldStatus.d \
./SocialSiteMediator.d \
./SocialSiteUser.d \
./User.d \
./test.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


