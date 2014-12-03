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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Argument.o \
	${OBJECTDIR}/EventQueue.o \
	${OBJECTDIR}/ExternalEffect.o \
	${OBJECTDIR}/Guard.o \
	${OBJECTDIR}/Message.o \
	${OBJECTDIR}/MessageEmission.o \
	${OBJECTDIR}/MessageProcessing.o \
	${OBJECTDIR}/MessageReception.o \
	${OBJECTDIR}/MethodInvocation.o \
	${OBJECTDIR}/ResultHandling.o \
	${OBJECTDIR}/State.o \
	${OBJECTDIR}/Symbol.o \
	${OBJECTDIR}/Thread.o \
	${OBJECTDIR}/Transition.o \
	${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o \
	${OBJECTDIR}/jsonMapper/FileIOException.o \
	${OBJECTDIR}/jsonMapper/GuardMapper.o \
	${OBJECTDIR}/jsonMapper/JsonFormatException.o \
	${OBJECTDIR}/jsonMapper/JsonMapper.o \
	${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o \
	${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o \
	${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o \
	${OBJECTDIR}/jsonMapper/PicoJsonIF.o \
	${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o \
	${OBJECTDIR}/jsonMapper/StateMapper.o \
	${OBJECTDIR}/jsonMapper/StatePartMapper.o \
	${OBJECTDIR}/jsonMapper/TransitionMapper.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/shared_queue.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f11 \
	${TESTDIR}/TestFiles/f8 \
	${TESTDIR}/TestFiles/f10 \
	${TESTDIR}/TestFiles/f7 \
	${TESTDIR}/TestFiles/f9 \
	${TESTDIR}/TestFiles/f12 \
	${TESTDIR}/TestFiles/f5 \
	${TESTDIR}/TestFiles/f6 \
	${TESTDIR}/TestFiles/f4 \
	${TESTDIR}/TestFiles/f1 \
	${TESTDIR}/TestFiles/f3 \
	${TESTDIR}/TestFiles/f2

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/utah02.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/utah02.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/utah02 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Argument.o: Argument.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Argument.o Argument.cpp

${OBJECTDIR}/EventQueue.o: EventQueue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EventQueue.o EventQueue.cpp

${OBJECTDIR}/ExternalEffect.o: ExternalEffect.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExternalEffect.o ExternalEffect.cpp

${OBJECTDIR}/Guard.o: Guard.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guard.o Guard.cpp

${OBJECTDIR}/Message.o: Message.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Message.o Message.cpp

${OBJECTDIR}/MessageEmission.o: MessageEmission.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageEmission.o MessageEmission.cpp

${OBJECTDIR}/MessageProcessing.o: MessageProcessing.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageProcessing.o MessageProcessing.cpp

${OBJECTDIR}/MessageReception.o: MessageReception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageReception.o MessageReception.cpp

${OBJECTDIR}/MethodInvocation.o: MethodInvocation.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MethodInvocation.o MethodInvocation.cpp

${OBJECTDIR}/ResultHandling.o: ResultHandling.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ResultHandling.o ResultHandling.cpp

${OBJECTDIR}/State.o: State.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/State.o State.cpp

${OBJECTDIR}/Symbol.o: Symbol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol.o Symbol.cpp

${OBJECTDIR}/Thread.o: Thread.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Thread.o Thread.cpp

${OBJECTDIR}/Transition.o: Transition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Transition.o Transition.cpp

${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o: jsonMapper/ExternalEffectMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o jsonMapper/ExternalEffectMapper.cpp

${OBJECTDIR}/jsonMapper/FileIOException.o: jsonMapper/FileIOException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/FileIOException.o jsonMapper/FileIOException.cpp

${OBJECTDIR}/jsonMapper/GuardMapper.o: jsonMapper/GuardMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/GuardMapper.o jsonMapper/GuardMapper.cpp

${OBJECTDIR}/jsonMapper/JsonFormatException.o: jsonMapper/JsonFormatException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonFormatException.o jsonMapper/JsonFormatException.cpp

${OBJECTDIR}/jsonMapper/JsonMapper.o: jsonMapper/JsonMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonMapper.o jsonMapper/JsonMapper.cpp

${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o: jsonMapper/MessageEmissionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageEmissionMapper.o jsonMapper/MessageEmissionMapper.cpp

${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o: jsonMapper/MessageReceptionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o jsonMapper/MessageReceptionMapper.cpp

${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o: jsonMapper/MethodInvocationMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MethodInvocationMapper.o jsonMapper/MethodInvocationMapper.cpp

${OBJECTDIR}/jsonMapper/PicoJsonIF.o: jsonMapper/PicoJsonIF.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PicoJsonIF.o jsonMapper/PicoJsonIF.cpp

${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o: jsonMapper/ResultHandlingMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o jsonMapper/ResultHandlingMapper.cpp

${OBJECTDIR}/jsonMapper/StateMapper.o: jsonMapper/StateMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMapper.o jsonMapper/StateMapper.cpp

${OBJECTDIR}/jsonMapper/StatePartMapper.o: jsonMapper/StatePartMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StatePartMapper.o jsonMapper/StatePartMapper.cpp

${OBJECTDIR}/jsonMapper/TransitionMapper.o: jsonMapper/TransitionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionMapper.o jsonMapper/TransitionMapper.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/shared_queue.o: shared_queue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shared_queue.o shared_queue.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f11: ${TESTDIR}/tests/ExternalEffectMappertestclass.o ${TESTDIR}/tests/ExternalEffectMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f11 $^ ${LDLIBSOPTIONS} `cppunit-config --libs` `cppunit-config --libs`   

${TESTDIR}/TestFiles/f8: ${TESTDIR}/tests/GuardMappertestclass.o ${TESTDIR}/tests/GuardMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f8 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f10: ${TESTDIR}/tests/MessageEmissiontestclass.o ${TESTDIR}/tests/MessageEmissiontestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f10 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f7: ${TESTDIR}/tests/MessageReceptionMappertestclass.o ${TESTDIR}/tests/MessageReceptionMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f7 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f9: ${TESTDIR}/tests/MethodInvocationMappertestclass.o ${TESTDIR}/tests/MethodInvocationMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f9 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f12: ${TESTDIR}/tests/ResultHandlingtestclass.o ${TESTDIR}/tests/ResultHandlingtestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f12 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

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

${TESTDIR}/TestFiles/f3: ${TESTDIR}/tests/TransitionMappertestclass.o ${TESTDIR}/tests/TransitionMappertestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f3 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   

${TESTDIR}/TestFiles/f2: ${TESTDIR}/tests/Transitiontestclass.o ${TESTDIR}/tests/Transitiontestrunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f2 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/ExternalEffectMappertestclass.o: tests/ExternalEffectMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ExternalEffectMappertestclass.o tests/ExternalEffectMappertestclass.cpp


${TESTDIR}/tests/ExternalEffectMappertestrunner.o: tests/ExternalEffectMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ExternalEffectMappertestrunner.o tests/ExternalEffectMappertestrunner.cpp


${TESTDIR}/tests/GuardMappertestclass.o: tests/GuardMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardMappertestclass.o tests/GuardMappertestclass.cpp


${TESTDIR}/tests/GuardMappertestrunner.o: tests/GuardMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/GuardMappertestrunner.o tests/GuardMappertestrunner.cpp


${TESTDIR}/tests/MessageEmissiontestclass.o: tests/MessageEmissiontestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageEmissiontestclass.o tests/MessageEmissiontestclass.cpp


${TESTDIR}/tests/MessageEmissiontestrunner.o: tests/MessageEmissiontestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageEmissiontestrunner.o tests/MessageEmissiontestrunner.cpp


${TESTDIR}/tests/MessageReceptionMappertestclass.o: tests/MessageReceptionMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageReceptionMappertestclass.o tests/MessageReceptionMappertestclass.cpp


${TESTDIR}/tests/MessageReceptionMappertestrunner.o: tests/MessageReceptionMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MessageReceptionMappertestrunner.o tests/MessageReceptionMappertestrunner.cpp


${TESTDIR}/tests/MethodInvocationMappertestclass.o: tests/MethodInvocationMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MethodInvocationMappertestclass.o tests/MethodInvocationMappertestclass.cpp


${TESTDIR}/tests/MethodInvocationMappertestrunner.o: tests/MethodInvocationMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/MethodInvocationMappertestrunner.o tests/MethodInvocationMappertestrunner.cpp


${TESTDIR}/tests/ResultHandlingtestclass.o: tests/ResultHandlingtestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ResultHandlingtestclass.o tests/ResultHandlingtestclass.cpp


${TESTDIR}/tests/ResultHandlingtestrunner.o: tests/ResultHandlingtestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/ResultHandlingtestrunner.o tests/ResultHandlingtestrunner.cpp


${TESTDIR}/tests/StateMappertestclass.o: tests/StateMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMappertestclass.o tests/StateMappertestclass.cpp


${TESTDIR}/tests/StateMappertestrunner.o: tests/StateMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StateMappertestrunner.o tests/StateMappertestrunner.cpp


${TESTDIR}/tests/StatePartMappertestclass.o: tests/StatePartMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StatePartMappertestclass.o tests/StatePartMappertestclass.cpp


${TESTDIR}/tests/StatePartMappetestrunner.o: tests/StatePartMappetestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/StatePartMappetestrunner.o tests/StatePartMappetestrunner.cpp


${TESTDIR}/tests/Statetestclass.o: tests/Statetestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Statetestclass.o tests/Statetestclass.cpp


${TESTDIR}/tests/Statetestrunner.o: tests/Statetestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Statetestrunner.o tests/Statetestrunner.cpp


${TESTDIR}/tests/Symboltestclass.o: tests/Symboltestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Symboltestclass.o tests/Symboltestclass.cpp


${TESTDIR}/tests/Symboltestrunner.o: tests/Symboltestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Symboltestrunner.o tests/Symboltestrunner.cpp


${TESTDIR}/tests/TransitionMappertestclass.o: tests/TransitionMappertestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionMappertestclass.o tests/TransitionMappertestclass.cpp


${TESTDIR}/tests/TransitionMappertestrunner.o: tests/TransitionMappertestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/TransitionMappertestrunner.o tests/TransitionMappertestrunner.cpp


${TESTDIR}/tests/Transitiontestclass.o: tests/Transitiontestclass.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transitiontestclass.o tests/Transitiontestclass.cpp


${TESTDIR}/tests/Transitiontestrunner.o: tests/Transitiontestrunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -O2 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/Transitiontestrunner.o tests/Transitiontestrunner.cpp


${OBJECTDIR}/Argument_nomain.o: ${OBJECTDIR}/Argument.o Argument.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Argument.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Argument_nomain.o Argument.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Argument.o ${OBJECTDIR}/Argument_nomain.o;\
	fi

${OBJECTDIR}/EventQueue_nomain.o: ${OBJECTDIR}/EventQueue.o EventQueue.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/EventQueue.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EventQueue_nomain.o EventQueue.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ExternalEffect_nomain.o ExternalEffect.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Guard_nomain.o Guard.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Guard.o ${OBJECTDIR}/Guard_nomain.o;\
	fi

${OBJECTDIR}/Message_nomain.o: ${OBJECTDIR}/Message.o Message.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Message.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Message_nomain.o Message.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageEmission_nomain.o MessageEmission.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageEmission.o ${OBJECTDIR}/MessageEmission_nomain.o;\
	fi

${OBJECTDIR}/MessageProcessing_nomain.o: ${OBJECTDIR}/MessageProcessing.o MessageProcessing.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageProcessing.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageProcessing_nomain.o MessageProcessing.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageProcessing.o ${OBJECTDIR}/MessageProcessing_nomain.o;\
	fi

${OBJECTDIR}/MessageReception_nomain.o: ${OBJECTDIR}/MessageReception.o MessageReception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MessageReception.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageReception_nomain.o MessageReception.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MessageReception.o ${OBJECTDIR}/MessageReception_nomain.o;\
	fi

${OBJECTDIR}/MethodInvocation_nomain.o: ${OBJECTDIR}/MethodInvocation.o MethodInvocation.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/MethodInvocation.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MethodInvocation_nomain.o MethodInvocation.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/MethodInvocation.o ${OBJECTDIR}/MethodInvocation_nomain.o;\
	fi

${OBJECTDIR}/ResultHandling_nomain.o: ${OBJECTDIR}/ResultHandling.o ResultHandling.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ResultHandling.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ResultHandling_nomain.o ResultHandling.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/State_nomain.o State.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/State.o ${OBJECTDIR}/State_nomain.o;\
	fi

${OBJECTDIR}/Symbol_nomain.o: ${OBJECTDIR}/Symbol.o Symbol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Symbol.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol_nomain.o Symbol.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Thread_nomain.o Thread.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Transition_nomain.o Transition.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Transition.o ${OBJECTDIR}/Transition_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ExternalEffectMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o jsonMapper/ExternalEffectMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ExternalEffectMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ExternalEffectMapper_nomain.o jsonMapper/ExternalEffectMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/FileIOException_nomain.o jsonMapper/FileIOException.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/GuardMapper_nomain.o jsonMapper/GuardMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/GuardMapper.o ${OBJECTDIR}/jsonMapper/GuardMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/JsonFormatException_nomain.o: ${OBJECTDIR}/jsonMapper/JsonFormatException.o jsonMapper/JsonFormatException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/JsonFormatException.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonFormatException_nomain.o jsonMapper/JsonFormatException.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonMapper_nomain.o jsonMapper/JsonMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageEmissionMapper_nomain.o jsonMapper/MessageEmissionMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper_nomain.o jsonMapper/MessageReceptionMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MethodInvocationMapper_nomain.o jsonMapper/MethodInvocationMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PicoJsonIF_nomain.o jsonMapper/PicoJsonIF.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/PicoJsonIF.o ${OBJECTDIR}/jsonMapper/PicoJsonIF_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o: ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o jsonMapper/ResultHandlingMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o jsonMapper/ResultHandlingMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/ResultHandlingMapper.o ${OBJECTDIR}/jsonMapper/ResultHandlingMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/StateMapper_nomain.o: ${OBJECTDIR}/jsonMapper/StateMapper.o jsonMapper/StateMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/StateMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StateMapper_nomain.o jsonMapper/StateMapper.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/StatePartMapper_nomain.o jsonMapper/StatePartMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/StatePartMapper.o ${OBJECTDIR}/jsonMapper/StatePartMapper_nomain.o;\
	fi

${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o: ${OBJECTDIR}/jsonMapper/TransitionMapper.o jsonMapper/TransitionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	@NMOUTPUT=`${NM} ${OBJECTDIR}/jsonMapper/TransitionMapper.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o jsonMapper/TransitionMapper.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/jsonMapper/TransitionMapper.o ${OBJECTDIR}/jsonMapper/TransitionMapper_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
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
	    $(COMPILE.cc) -O2 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/shared_queue_nomain.o shared_queue.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/shared_queue.o ${OBJECTDIR}/shared_queue_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f11 || true; \
	    ${TESTDIR}/TestFiles/f8 || true; \
	    ${TESTDIR}/TestFiles/f10 || true; \
	    ${TESTDIR}/TestFiles/f7 || true; \
	    ${TESTDIR}/TestFiles/f9 || true; \
	    ${TESTDIR}/TestFiles/f12 || true; \
	    ${TESTDIR}/TestFiles/f5 || true; \
	    ${TESTDIR}/TestFiles/f6 || true; \
	    ${TESTDIR}/TestFiles/f4 || true; \
	    ${TESTDIR}/TestFiles/f1 || true; \
	    ${TESTDIR}/TestFiles/f3 || true; \
	    ${TESTDIR}/TestFiles/f2 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/utah02.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
