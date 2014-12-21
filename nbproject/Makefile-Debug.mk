#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/ComponentIF.o \
	${OBJECTDIR}/ComponentSample1.o \
	${OBJECTDIR}/EventQueue.o \
	${OBJECTDIR}/ExternalEffect.o \
	${OBJECTDIR}/Guard.o \
	${OBJECTDIR}/GuardIF.o \
	${OBJECTDIR}/InPort.o \
	${OBJECTDIR}/Log.o \
	${OBJECTDIR}/MapOfGuard.o \
	${OBJECTDIR}/Message.o \
	${OBJECTDIR}/MessageEmission.o \
	${OBJECTDIR}/MessageReception.o \
	${OBJECTDIR}/MessageWithInPort.o \
	${OBJECTDIR}/MessageWithOutPort.o \
	${OBJECTDIR}/MethodInvocation.o \
	${OBJECTDIR}/OutPort.o \
	${OBJECTDIR}/Port.o \
	${OBJECTDIR}/PortConnection.o \
	${OBJECTDIR}/PortMap.o \
	${OBJECTDIR}/Process.o \
	${OBJECTDIR}/Result.o \
	${OBJECTDIR}/ResultHandling.o \
	${OBJECTDIR}/State.o \
	${OBJECTDIR}/StateMachine.o \
	${OBJECTDIR}/Sym.o \
	${OBJECTDIR}/Symbol.o \
	${OBJECTDIR}/Thread.o \
	${OBJECTDIR}/Transition.o \
	${OBJECTDIR}/Value.o \
	${OBJECTDIR}/ValuePair.o \
	${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o \
	${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o \
	${OBJECTDIR}/jsonMapper/FileIOException.o \
	${OBJECTDIR}/jsonMapper/GuardMapper.o \
	${OBJECTDIR}/jsonMapper/InOutPortMapper.o \
	${OBJECTDIR}/jsonMapper/JsonFormatException.o \
	${OBJECTDIR}/jsonMapper/JsonMapper.o \
	${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o \
	${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o \
	${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o \
	${OBJECTDIR}/jsonMapper/PicoJsonIF.o \
	${OBJECTDIR}/jsonMapper/PortMapMapper.o \
	${OBJECTDIR}/jsonMapper/ProcessMapper.o \
	${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o \
	${OBJECTDIR}/jsonMapper/StateMachineMapper.o \
	${OBJECTDIR}/jsonMapper/StateMapper.o \
	${OBJECTDIR}/jsonMapper/StatePartMapper.o \
	${OBJECTDIR}/jsonMapper/ThreadMapper.o \
	${OBJECTDIR}/jsonMapper/TransitionMapper.o \
	${OBJECTDIR}/jsonMapper/TransitionPartMapper.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/shared_queue.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f25 \
	${TESTDIR}/TestFiles/f11 \
	${TESTDIR}/TestFiles/f18 \
	${TESTDIR}/TestFiles/f8 \
	${TESTDIR}/TestFiles/f17 \
	${TESTDIR}/TestFiles/f10 \
	${TESTDIR}/TestFiles/f7 \
	${TESTDIR}/TestFiles/f9 \
	${TESTDIR}/TestFiles/f23 \
	${TESTDIR}/TestFiles/f24 \
	${TESTDIR}/TestFiles/f16 \
	${TESTDIR}/TestFiles/f12 \
	${TESTDIR}/TestFiles/f13 \
	${TESTDIR}/TestFiles/f21 \
	${TESTDIR}/TestFiles/f5 \
	${TESTDIR}/TestFiles/f6 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f22 \
	${TESTDIR}/TestFiles/f15 \
	${TESTDIR}/TestFiles/f20 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f14 \
	${TESTDIR}/TestFiles/f2

# C Compiler Flags
CFLAGS=`cppunit-config --cflags` 

# CC Compiler Flags
CCFLAGS=`cppunit-config --cflags` 
CXXFLAGS=`cppunit-config --cflags` 

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`cppunit-config --libs`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${TESTDIR}/TestFiles/f19.exe

${TESTDIR}/TestFiles/f19.exe: ${OBJECTFILES}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc} -o ${TESTDIR}/TestFiles/f19 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/ComponentIF.o: ComponentIF.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ComponentIF.o ComponentIF.cpp

${OBJECTDIR}/ComponentSample1.o: ComponentSample1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ComponentSample1.o ComponentSample1.cpp

${OBJECTDIR}/EventQueue.o: EventQueue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EventQueue.o EventQueue.cpp

${OBJECTDIR}/ExternalEffect.o: ExternalEffect.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExternalEffect.o ExternalEffect.cpp

${OBJECTDIR}/Guard.o: Guard.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guard.o Guard.cpp

${OBJECTDIR}/GuardIF.o: GuardIF.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GuardIF.o GuardIF.cpp

${OBJECTDIR}/InPort.o: InPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InPort.o InPort.cpp

${OBJECTDIR}/Log.o: Log.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Log.o Log.cpp

${OBJECTDIR}/MapOfGuard.o: MapOfGuard.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MapOfGuard.o MapOfGuard.cpp

${OBJECTDIR}/Message.o: Message.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Message.o Message.cpp

${OBJECTDIR}/MessageEmission.o: MessageEmission.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageEmission.o MessageEmission.cpp

${OBJECTDIR}/MessageReception.o: MessageReception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageReception.o MessageReception.cpp

${OBJECTDIR}/MessageWithInPort.o: MessageWithInPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageWithInPort.o MessageWithInPort.cpp

${OBJECTDIR}/MessageWithOutPort.o: MessageWithOutPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageWithOutPort.o MessageWithOutPort.cpp

${OBJECTDIR}/MethodInvocation.o: MethodInvocation.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MethodInvocation.o MethodInvocation.cpp

${OBJECTDIR}/OutPort.o: OutPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OutPort.o OutPort.cpp

${OBJECTDIR}/Port.o: Port.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Port.o Port.cpp

${OBJECTDIR}/PortConnection.o: PortConnection.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PortConnection.o PortConnection.cpp

${OBJECTDIR}/PortMap.o: PortMap.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PortMap.o PortMap.cpp

${OBJECTDIR}/Process.o: Process.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Process.o Process.cpp

${OBJECTDIR}/Result.o: Result.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Result.o Result.cpp

${OBJECTDIR}/ResultHandling.o: ResultHandling.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ResultHandling.o ResultHandling.cpp

${OBJECTDIR}/State.o: State.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/State.o State.cpp

${OBJECTDIR}/StateMachine.o: StateMachine.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StateMachine.o StateMachine.cpp

${OBJECTDIR}/Sym.o: Sym.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sym.o Sym.cpp

${OBJECTDIR}/Symbol.o: Symbol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol.o Symbol.cpp

${OBJECTDIR}/Thread.o: Thread.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Thread.o Thread.cpp

${OBJECTDIR}/Transition.o: Transition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Transition.o Transition.cpp

${OBJECTDIR}/Value.o: Value.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Value.o Value.cpp

${OBJECTDIR}/ValuePair.o: ValuePair.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ValuePair.o ValuePair.cpp

${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o: jsonMapper/AcceptableMessageMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o jsonMapper/AcceptableMessageMapper.cpp

${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o: jsonMapper/ExternalEffectMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o jsonMapper/ExternalEffectMapper.cpp

${OBJECTDIR}/jsonMapper/FileIOException.o: jsonMapper/FileIOException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/FileIOException.o jsonMapper/FileIOException.cpp

${OBJECTDIR}/jsonMapper/GuardMapper.o: jsonMapper/GuardMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/GuardMapper.o jsonMapper/GuardMapper.cpp

${OBJECTDIR}/jsonMapper/InOutPortMapper.o: jsonMapper/InOutPortMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/InOutPortMapper.o jsonMapper/InOutPortMapper.cpp

${OBJECTDIR}/jsonMapper/JsonFormatException.o: jsonMapper/JsonFormatException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonFormatException.o jsonMapper/JsonFormatException.cpp

${OBJECTDIR}/jsonMapper/JsonMapper.o: jsonMapper/JsonMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonMapper.o jsonMapper/JsonMapper.cpp

${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o: jsonMapper/MessageEmissionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o jsonMapper/MessageEmissionMapper.cpp

${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o: jsonMapper/MessageReceptionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o jsonMapper/MessageReceptionMapper.cpp

${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o: jsonMapper/MethodInvocationMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o jsonMapper/MethodInvocationMapper.cpp

${OBJECTDIR}/jsonMapper/PicoJsonIF.o: jsonMapper/PicoJsonIF.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PicoJsonIF.o jsonMapper/PicoJsonIF.cpp

${OBJECTDIR}/jsonMapper/PortMapMapper.o: jsonMapper/PortMapMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PortMapMapper.o jsonMapper/PortMapMapper.cpp

${OBJECTDIR}/jsonMapper/ProcessMapper.o: jsonMapper/ProcessMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ProcessMapper.o jsonMapper/ProcessMapper.cpp

${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o: jsonMapper/ResultHandlingMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o jsonMapper/ResultHandlingMapper.cpp

${OBJECTDIR}/jsonMapper/StateMachineMapper.o: jsonMapper/StateMachineMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMachineMapper.o jsonMapper/StateMachineMapper.cpp

${OBJECTDIR}/jsonMapper/StateMapper.o: jsonMapper/StateMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMapper.o jsonMapper/StateMapper.cpp

${OBJECTDIR}/jsonMapper/StatePartMapper.o: jsonMapper/StatePartMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StatePartMapper.o jsonMapper/StatePartMapper.cpp

${OBJECTDIR}/jsonMapper/ThreadMapper.o: jsonMapper/ThreadMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ThreadMapper.o jsonMapper/ThreadMapper.cpp

${OBJECTDIR}/jsonMapper/TransitionMapper.o: jsonMapper/TransitionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionMapper.o jsonMapper/TransitionMapper.cpp

${OBJECTDIR}/jsonMapper/TransitionPartMapper.o: jsonMapper/TransitionPartMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionPartMapper.o jsonMapper/TransitionPartMapper.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/shared_queue.o: shared_queue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shared_queue.o shared_queue.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f25: ${TESTDIR}/tests/CruiseControltestclass.o ${TESTDIR}/tests/CruiseControltestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f25 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f11: ${TESTDIR}/tests/ExternalEffectMappertestclass.o ${TESTDIR}/tests/ExternalEffectMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f11 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs`   

${TESTDIR}/TestFiles/f18: ${TESTDIR}/tests/GuardIFtestclass1.o ${TESTDIR}/tests/GuardIFtestrunner1.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f18 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f8: ${TESTDIR}/tests/GuardMappertestclass.o ${TESTDIR}/tests/GuardMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f8 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f17: ${TESTDIR}/tests/MapOfGuardtestclass.o ${TESTDIR}/tests/MapOfGuardtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f17 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs`   

${TESTDIR}/TestFiles/f10: ${TESTDIR}/tests/MessageEmissiontestclass.o ${TESTDIR}/tests/MessageEmissiontestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f10 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f7: ${TESTDIR}/tests/MessageReceptionMappertestclass.o ${TESTDIR}/tests/MessageReceptionMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f7 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f9: ${TESTDIR}/tests/MethodInvocationMappertestclass.o ${TESTDIR}/tests/MethodInvocationMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f9 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f23: ${TESTDIR}/tests/PortMapMappertestclass.o ${TESTDIR}/tests/PortMapMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f23 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f24: ${TESTDIR}/tests/ProcessMapperPushtestclass.o ${TESTDIR}/tests/ProcessMapperPushtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f24 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f16: ${TESTDIR}/tests/ProcessMappertestclass.o ${TESTDIR}/tests/ProcessMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f16 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f12: ${TESTDIR}/tests/ResultHandlingtestclass.o ${TESTDIR}/tests/ResultHandlingtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f12 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f13: ${TESTDIR}/tests/StateMachineMappertestclass.o ${TESTDIR}/tests/StateMachineMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f13 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f21: ${TESTDIR}/tests/StateMachinetestclass.o ${TESTDIR}/tests/StateMachinetestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f21 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f5: ${TESTDIR}/tests/StateMappertestclass.o ${TESTDIR}/tests/StateMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f5 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f6: ${TESTDIR}/tests/StatePartMappertestclass.o ${TESTDIR}/tests/StatePartMappetestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f6 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f4: ${TESTDIR}/tests/Statetestclass.o ${TESTDIR}/tests/Statetestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f4 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/Symboltestclass.o ${TESTDIR}/tests/Symboltestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs`   

${TESTDIR}/TestFiles/f22: ${TESTDIR}/tests/ThreadMapper2testclass.o ${TESTDIR}/tests/ThreadMapper2testrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f22 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f15: ${TESTDIR}/tests/ThreadMappertestclass.o ${TESTDIR}/tests/ThreadMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f15 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f20: ${TESTDIR}/tests/Transition2testclass.o ${TESTDIR}/tests/Transition2testrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f20 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/TransitionMappertestclass.o ${TESTDIR}/tests/TransitionMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f14: ${TESTDIR}/tests/TransitionPartMappertestclass.o ${TESTDIR}/tests/TransitionPartMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f14 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/Transitiontestclass.o ${TESTDIR}/tests/Transitiontestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/CruiseControltestclass.o: tests/CruiseControltestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/CruiseControltestclass.o tests/CruiseControltestclass.cpp


${TESTDIR}/tests/CruiseControltestrunner.o: tests/CruiseControltestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/CruiseControltestrunner.o tests/CruiseControltestrunner.cpp


${TESTDIR}/tests/ExternalEffectMappertestclass.o: tests/ExternalEffectMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ExternalEffectMappertestclass.o tests/ExternalEffectMappertestclass.cpp


${TESTDIR}/tests/ExternalEffectMappertestrunner.o: tests/ExternalEffectMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ExternalEffectMappertestrunner.o tests/ExternalEffectMappertestrunner.cpp


${TESTDIR}/tests/GuardIFtestclass1.o: tests/GuardIFtestclass1.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardIFtestclass1.o tests/GuardIFtestclass1.cpp


${TESTDIR}/tests/GuardIFtestrunner1.o: tests/GuardIFtestrunner1.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardIFtestrunner1.o tests/GuardIFtestrunner1.cpp


${TESTDIR}/tests/GuardMappertestclass.o: tests/GuardMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardMappertestclass.o tests/GuardMappertestclass.cpp


${TESTDIR}/tests/GuardMappertestrunner.o: tests/GuardMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardMappertestrunner.o tests/GuardMappertestrunner.cpp


${TESTDIR}/tests/MapOfGuardtestclass.o: tests/MapOfGuardtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MapOfGuardtestclass.o tests/MapOfGuardtestclass.cpp


${TESTDIR}/tests/MapOfGuardtestrunner.o: tests/MapOfGuardtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MapOfGuardtestrunner.o tests/MapOfGuardtestrunner.cpp


${TESTDIR}/tests/MessageEmissiontestclass.o: tests/MessageEmissiontestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageEmissiontestclass.o tests/MessageEmissiontestclass.cpp


${TESTDIR}/tests/MessageEmissiontestrunner.o: tests/MessageEmissiontestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageEmissiontestrunner.o tests/MessageEmissiontestrunner.cpp


${TESTDIR}/tests/MessageReceptionMappertestclass.o: tests/MessageReceptionMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageReceptionMappertestclass.o tests/MessageReceptionMappertestclass.cpp


${TESTDIR}/tests/MessageReceptionMappertestrunner.o: tests/MessageReceptionMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageReceptionMappertestrunner.o tests/MessageReceptionMappertestrunner.cpp


${TESTDIR}/tests/MethodInvocationMappertestclass.o: tests/MethodInvocationMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MethodInvocationMappertestclass.o tests/MethodInvocationMappertestclass.cpp


${TESTDIR}/tests/MethodInvocationMappertestrunner.o: tests/MethodInvocationMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MethodInvocationMappertestrunner.o tests/MethodInvocationMappertestrunner.cpp


${TESTDIR}/tests/PortMapMappertestclass.o: tests/PortMapMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/PortMapMappertestclass.o tests/PortMapMappertestclass.cpp


${TESTDIR}/tests/PortMapMappertestrunner.o: tests/PortMapMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/PortMapMappertestrunner.o tests/PortMapMappertestrunner.cpp


${TESTDIR}/tests/ProcessMapperPushtestclass.o: tests/ProcessMapperPushtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ProcessMapperPushtestclass.o tests/ProcessMapperPushtestclass.cpp


${TESTDIR}/tests/ProcessMapperPushtestrunner.o: tests/ProcessMapperPushtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ProcessMapperPushtestrunner.o tests/ProcessMapperPushtestrunner.cpp


${TESTDIR}/tests/ProcessMappertestclass.o: tests/ProcessMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ProcessMappertestclass.o tests/ProcessMappertestclass.cpp


${TESTDIR}/tests/ProcessMappertestrunner.o: tests/ProcessMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ProcessMappertestrunner.o tests/ProcessMappertestrunner.cpp


${TESTDIR}/tests/ResultHandlingtestclass.o: tests/ResultHandlingtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ResultHandlingtestclass.o tests/ResultHandlingtestclass.cpp


${TESTDIR}/tests/ResultHandlingtestrunner.o: tests/ResultHandlingtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ResultHandlingtestrunner.o tests/ResultHandlingtestrunner.cpp


${TESTDIR}/tests/StateMachineMappertestclass.o: tests/StateMachineMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMachineMappertestclass.o tests/StateMachineMappertestclass.cpp


${TESTDIR}/tests/StateMachineMappertestrunner.o: tests/StateMachineMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMachineMappertestrunner.o tests/StateMachineMappertestrunner.cpp


${TESTDIR}/tests/StateMachinetestclass.o: tests/StateMachinetestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMachinetestclass.o tests/StateMachinetestclass.cpp


${TESTDIR}/tests/StateMachinetestrunner.o: tests/StateMachinetestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMachinetestrunner.o tests/StateMachinetestrunner.cpp


${TESTDIR}/tests/StateMappertestclass.o: tests/StateMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMappertestclass.o tests/StateMappertestclass.cpp


${TESTDIR}/tests/StateMappertestrunner.o: tests/StateMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMappertestrunner.o tests/StateMappertestrunner.cpp


${TESTDIR}/tests/StatePartMappertestclass.o: tests/StatePartMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StatePartMappertestclass.o tests/StatePartMappertestclass.cpp


${TESTDIR}/tests/StatePartMappetestrunner.o: tests/StatePartMappetestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StatePartMappetestrunner.o tests/StatePartMappetestrunner.cpp


${TESTDIR}/tests/Statetestclass.o: tests/Statetestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Statetestclass.o tests/Statetestclass.cpp


${TESTDIR}/tests/Statetestrunner.o: tests/Statetestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Statetestrunner.o tests/Statetestrunner.cpp


${TESTDIR}/tests/Symboltestclass.o: tests/Symboltestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Symboltestclass.o tests/Symboltestclass.cpp


${TESTDIR}/tests/Symboltestrunner.o: tests/Symboltestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Symboltestrunner.o tests/Symboltestrunner.cpp


${TESTDIR}/tests/ThreadMapper2testclass.o: tests/ThreadMapper2testclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ThreadMapper2testclass.o tests/ThreadMapper2testclass.cpp


${TESTDIR}/tests/ThreadMapper2testrunner.o: tests/ThreadMapper2testrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ThreadMapper2testrunner.o tests/ThreadMapper2testrunner.cpp


${TESTDIR}/tests/ThreadMappertestclass.o: tests/ThreadMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ThreadMappertestclass.o tests/ThreadMappertestclass.cpp


${TESTDIR}/tests/ThreadMappertestrunner.o: tests/ThreadMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ThreadMappertestrunner.o tests/ThreadMappertestrunner.cpp


${TESTDIR}/tests/Transition2testclass.o: tests/Transition2testclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transition2testclass.o tests/Transition2testclass.cpp


${TESTDIR}/tests/Transition2testrunner.o: tests/Transition2testrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transition2testrunner.o tests/Transition2testrunner.cpp


${TESTDIR}/tests/TransitionMappertestclass.o: tests/TransitionMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionMappertestclass.o tests/TransitionMappertestclass.cpp


${TESTDIR}/tests/TransitionMappertestrunner.o: tests/TransitionMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionMappertestrunner.o tests/TransitionMappertestrunner.cpp


${TESTDIR}/tests/TransitionPartMappertestclass.o: tests/TransitionPartMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionPartMappertestclass.o tests/TransitionPartMappertestclass.cpp


${TESTDIR}/tests/TransitionPartMappertestrunner.o: tests/TransitionPartMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionPartMappertestrunner.o tests/TransitionPartMappertestrunner.cpp


${TESTDIR}/tests/Transitiontestclass.o: tests/Transitiontestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transitiontestclass.o tests/Transitiontestclass.cpp


${TESTDIR}/tests/Transitiontestrunner.o: tests/Transitiontestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transitiontestrunner.o tests/Transitiontestrunner.cpp


${OBJECTDIR}/ComponentIF_nomain.o: ${OBJECTDIR}/ComponentIF.o ComponentIF.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ComponentIF.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ComponentIF_nomain.o ComponentIF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ComponentIF.o ${OBJECTDIR}/ComponentIF_nomain.o;\
	fi

${OBJECTDIR}/ComponentSample1_nomain.o: ${OBJECTDIR}/ComponentSample1.o ComponentSample1.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ComponentSample1.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ComponentSample1_nomain.o ComponentSample1.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ComponentSample1.o ${OBJECTDIR}/ComponentSample1_nomain.o;\
	fi

${OBJECTDIR}/EventQueue_nomain.o: ${OBJECTDIR}/EventQueue.o EventQueue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/EventQueue.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EventQueue_nomain.o EventQueue.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/EventQueue.o ${OBJECTDIR}/EventQueue_nomain.o;\
	fi

${OBJECTDIR}/ExternalEffect_nomain.o: ${OBJECTDIR}/ExternalEffect.o ExternalEffect.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ExternalEffect.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExternalEffect_nomain.o ExternalEffect.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ExternalEffect.o ${OBJECTDIR}/ExternalEffect_nomain.o;\
	fi

${OBJECTDIR}/Guard_nomain.o: ${OBJECTDIR}/Guard.o Guard.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Guard.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guard_nomain.o Guard.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Guard.o ${OBJECTDIR}/Guard_nomain.o;\
	fi

${OBJECTDIR}/GuardIF_nomain.o: ${OBJECTDIR}/GuardIF.o GuardIF.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/GuardIF.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/GuardIF_nomain.o GuardIF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/GuardIF.o ${OBJECTDIR}/GuardIF_nomain.o;\
	fi

${OBJECTDIR}/InPort_nomain.o: ${OBJECTDIR}/InPort.o InPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/InPort.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InPort_nomain.o InPort.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/InPort.o ${OBJECTDIR}/InPort_nomain.o;\
	fi

${OBJECTDIR}/Log_nomain.o: ${OBJECTDIR}/Log.o Log.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Log.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Log_nomain.o Log.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Log.o ${OBJECTDIR}/Log_nomain.o;\
	fi

${OBJECTDIR}/MapOfGuard_nomain.o: ${OBJECTDIR}/MapOfGuard.o MapOfGuard.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MapOfGuard.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MapOfGuard_nomain.o MapOfGuard.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MapOfGuard.o ${OBJECTDIR}/MapOfGuard_nomain.o;\
	fi

${OBJECTDIR}/Message_nomain.o: ${OBJECTDIR}/Message.o Message.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Message.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Message_nomain.o Message.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Message.o ${OBJECTDIR}/Message_nomain.o;\
	fi

${OBJECTDIR}/MessageEmission_nomain.o: ${OBJECTDIR}/MessageEmission.o MessageEmission.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageEmission.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageEmission_nomain.o MessageEmission.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageEmission.o ${OBJECTDIR}/MessageEmission_nomain.o;\
	fi

${OBJECTDIR}/MessageReception_nomain.o: ${OBJECTDIR}/MessageReception.o MessageReception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageReception.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageReception_nomain.o MessageReception.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageReception.o ${OBJECTDIR}/MessageReception_nomain.o;\
	fi

${OBJECTDIR}/MessageWithInPort_nomain.o: ${OBJECTDIR}/MessageWithInPort.o MessageWithInPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageWithInPort.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageWithInPort_nomain.o MessageWithInPort.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageWithInPort.o ${OBJECTDIR}/MessageWithInPort_nomain.o;\
	fi

${OBJECTDIR}/MessageWithOutPort_nomain.o: ${OBJECTDIR}/MessageWithOutPort.o MessageWithOutPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageWithOutPort.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageWithOutPort_nomain.o MessageWithOutPort.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageWithOutPort.o ${OBJECTDIR}/MessageWithOutPort_nomain.o;\
	fi

${OBJECTDIR}/MethodInvocation_nomain.o: ${OBJECTDIR}/MethodInvocation.o MethodInvocation.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MethodInvocation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MethodInvocation_nomain.o MethodInvocation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MethodInvocation.o ${OBJECTDIR}/MethodInvocation_nomain.o;\
	fi

${OBJECTDIR}/OutPort_nomain.o: ${OBJECTDIR}/OutPort.o OutPort.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/OutPort.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OutPort_nomain.o OutPort.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/OutPort.o ${OBJECTDIR}/OutPort_nomain.o;\
	fi

${OBJECTDIR}/Port_nomain.o: ${OBJECTDIR}/Port.o Port.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Port.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Port_nomain.o Port.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Port.o ${OBJECTDIR}/Port_nomain.o;\
	fi

${OBJECTDIR}/PortConnection_nomain.o: ${OBJECTDIR}/PortConnection.o PortConnection.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/PortConnection.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PortConnection_nomain.o PortConnection.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/PortConnection.o ${OBJECTDIR}/PortConnection_nomain.o;\
	fi

${OBJECTDIR}/PortMap_nomain.o: ${OBJECTDIR}/PortMap.o PortMap.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/PortMap.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PortMap_nomain.o PortMap.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/PortMap.o ${OBJECTDIR}/PortMap_nomain.o;\
	fi

${OBJECTDIR}/Process_nomain.o: ${OBJECTDIR}/Process.o Process.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Process.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Process_nomain.o Process.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Process.o ${OBJECTDIR}/Process_nomain.o;\
	fi

${OBJECTDIR}/Result_nomain.o: ${OBJECTDIR}/Result.o Result.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Result.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Result_nomain.o Result.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Result.o ${OBJECTDIR}/Result_nomain.o;\
	fi

${OBJECTDIR}/ResultHandling_nomain.o: ${OBJECTDIR}/ResultHandling.o ResultHandling.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ResultHandling.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ResultHandling_nomain.o ResultHandling.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ResultHandling.o ${OBJECTDIR}/ResultHandling_nomain.o;\
	fi

${OBJECTDIR}/State_nomain.o: ${OBJECTDIR}/State.o State.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/State.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/State_nomain.o State.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/State.o ${OBJECTDIR}/State_nomain.o;\
	fi

${OBJECTDIR}/StateMachine_nomain.o: ${OBJECTDIR}/StateMachine.o StateMachine.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/StateMachine.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StateMachine_nomain.o StateMachine.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/StateMachine.o ${OBJECTDIR}/StateMachine_nomain.o;\
	fi

${OBJECTDIR}/Sym_nomain.o: ${OBJECTDIR}/Sym.o Sym.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Sym.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Sym_nomain.o Sym.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Sym.o ${OBJECTDIR}/Sym_nomain.o;\
	fi

${OBJECTDIR}/Symbol_nomain.o: ${OBJECTDIR}/Symbol.o Symbol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Symbol.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol_nomain.o Symbol.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Symbol.o ${OBJECTDIR}/Symbol_nomain.o;\
	fi

${OBJECTDIR}/Thread_nomain.o: ${OBJECTDIR}/Thread.o Thread.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Thread.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Thread_nomain.o Thread.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Thread.o ${OBJECTDIR}/Thread_nomain.o;\
	fi

${OBJECTDIR}/Transition_nomain.o: ${OBJECTDIR}/Transition.o Transition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Transition.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Transition_nomain.o Transition.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Transition.o ${OBJECTDIR}/Transition_nomain.o;\
	fi

${OBJECTDIR}/Value_nomain.o: ${OBJECTDIR}/Value.o Value.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Value.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Value_nomain.o Value.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Value.o ${OBJECTDIR}/Value_nomain.o;\
	fi

${OBJECTDIR}/ValuePair_nomain.o: ${OBJECTDIR}/ValuePair.o ValuePair.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ValuePair.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ValuePair_nomain.o ValuePair.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ValuePair.o ${OBJECTDIR}/ValuePair_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/AcceptableMessageMapper_nomain.o: ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o jsonMapper/AcceptableMessageMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper_nomain.o jsonMapper/AcceptableMessageMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper.o ${OBJECTDIR}/jsonMapper/AcceptableMessageMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ExternalEffectMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o jsonMapper/ExternalEffectMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ExternalEffectMapper_nomain.o jsonMapper/ExternalEffectMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o ${OBJECTDIR}/jsonMapper/ExternalEffectMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/FileIOException_nomain.o: ${OBJECTDIR}/jsonMapper/FileIOException.o jsonMapper/FileIOException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/FileIOException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/FileIOException_nomain.o jsonMapper/FileIOException.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/FileIOException.o ${OBJECTDIR}/jsonMapper/FileIOException_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/GuardMapper_nomain.o: ${OBJECTDIR}/jsonMapper/GuardMapper.o jsonMapper/GuardMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/GuardMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/GuardMapper_nomain.o jsonMapper/GuardMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/GuardMapper.o ${OBJECTDIR}/jsonMapper/GuardMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/InOutPortMapper_nomain.o: ${OBJECTDIR}/jsonMapper/InOutPortMapper.o jsonMapper/InOutPortMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/InOutPortMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/InOutPortMapper_nomain.o jsonMapper/InOutPortMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/InOutPortMapper.o ${OBJECTDIR}/jsonMapper/InOutPortMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/JsonFormatException_nomain.o: ${OBJECTDIR}/jsonMapper/JsonFormatException.o jsonMapper/JsonFormatException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/JsonFormatException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonFormatException_nomain.o jsonMapper/JsonFormatException.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/JsonFormatException.o ${OBJECTDIR}/jsonMapper/JsonFormatException_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/JsonMapper_nomain.o: ${OBJECTDIR}/jsonMapper/JsonMapper.o jsonMapper/JsonMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/JsonMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonMapper_nomain.o jsonMapper/JsonMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/JsonMapper.o ${OBJECTDIR}/jsonMapper/JsonMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/MessageEmissionMapper_nomain.o: ${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o jsonMapper/MessageEmissionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageEmissionMapper_nomain.o jsonMapper/MessageEmissionMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o ${OBJECTDIR}/jsonMapper/MessageEmissionMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/MessageReceptionMapper_nomain.o: ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o jsonMapper/MessageReceptionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper_nomain.o jsonMapper/MessageReceptionMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/MethodInvocationMapper_nomain.o: ${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o jsonMapper/MethodInvocationMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MethodInvocationMapper_nomain.o jsonMapper/MethodInvocationMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o ${OBJECTDIR}/jsonMapper/MethodInvocationMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/PicoJsonIF_nomain.o: ${OBJECTDIR}/jsonMapper/PicoJsonIF.o jsonMapper/PicoJsonIF.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/PicoJsonIF.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PicoJsonIF_nomain.o jsonMapper/PicoJsonIF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/PicoJsonIF.o ${OBJECTDIR}/jsonMapper/PicoJsonIF_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/PortMapMapper_nomain.o: ${OBJECTDIR}/jsonMapper/PortMapMapper.o jsonMapper/PortMapMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/PortMapMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PortMapMapper_nomain.o jsonMapper/PortMapMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/PortMapMapper.o ${OBJECTDIR}/jsonMapper/PortMapMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ProcessMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ProcessMapper.o jsonMapper/ProcessMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ProcessMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ProcessMapper_nomain.o jsonMapper/ProcessMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/ProcessMapper.o ${OBJECTDIR}/jsonMapper/ProcessMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o jsonMapper/ResultHandlingMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o jsonMapper/ResultHandlingMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/StateMachineMapper_nomain.o: ${OBJECTDIR}/jsonMapper/StateMachineMapper.o jsonMapper/StateMachineMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/StateMachineMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMachineMapper_nomain.o jsonMapper/StateMachineMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/StateMachineMapper.o ${OBJECTDIR}/jsonMapper/StateMachineMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/StateMapper_nomain.o: ${OBJECTDIR}/jsonMapper/StateMapper.o jsonMapper/StateMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/StateMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMapper_nomain.o jsonMapper/StateMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/StateMapper.o ${OBJECTDIR}/jsonMapper/StateMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/StatePartMapper_nomain.o: ${OBJECTDIR}/jsonMapper/StatePartMapper.o jsonMapper/StatePartMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/StatePartMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StatePartMapper_nomain.o jsonMapper/StatePartMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/StatePartMapper.o ${OBJECTDIR}/jsonMapper/StatePartMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ThreadMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ThreadMapper.o jsonMapper/ThreadMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ThreadMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ThreadMapper_nomain.o jsonMapper/ThreadMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/ThreadMapper.o ${OBJECTDIR}/jsonMapper/ThreadMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o: ${OBJECTDIR}/jsonMapper/TransitionMapper.o jsonMapper/TransitionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/TransitionMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o jsonMapper/TransitionMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/TransitionMapper.o ${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/TransitionPartMapper_nomain.o: ${OBJECTDIR}/jsonMapper/TransitionPartMapper.o jsonMapper/TransitionPartMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/TransitionPartMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionPartMapper_nomain.o jsonMapper/TransitionPartMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/TransitionPartMapper.o ${OBJECTDIR}/jsonMapper/TransitionPartMapper_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

${OBJECTDIR}/shared_queue_nomain.o: ${OBJECTDIR}/shared_queue.o shared_queue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/shared_queue.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I. -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shared_queue_nomain.o shared_queue.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/shared_queue.o ${OBJECTDIR}/shared_queue_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f25 || true; \
	    ${TESTDIR}/TestFiles/f11 || true; \
	    ${TESTDIR}/TestFiles/f18 || true; \
	    ${TESTDIR}/TestFiles/f8 || true; \
	    ${TESTDIR}/TestFiles/f17 || true; \
	    ${TESTDIR}/TestFiles/f10 || true; \
	    ${TESTDIR}/TestFiles/f7 || true; \
	    ${TESTDIR}/TestFiles/f9 || true; \
	    ${TESTDIR}/TestFiles/f23 || true; \
	    ${TESTDIR}/TestFiles/f24 || true; \
	    ${TESTDIR}/TestFiles/f16 || true; \
	    ${TESTDIR}/TestFiles/f12 || true; \
	    ${TESTDIR}/TestFiles/f13 || true; \
	    ${TESTDIR}/TestFiles/f21 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	    ${TESTDIR}/TestFiles/f6 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f22 || true; \
	    ${TESTDIR}/TestFiles/f15 || true; \
	    ${TESTDIR}/TestFiles/f20 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f14 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${TESTDIR}/TestFiles/f19.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
