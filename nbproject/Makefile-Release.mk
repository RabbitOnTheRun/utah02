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
	${OBJECTDIR}/MessageReception.o \
	${OBJECTDIR}/State.o \
	${OBJECTDIR}/Symbol.o \
	${OBJECTDIR}/Transition.o \
	${OBJECTDIR}/jsonMapper/FileIOException.o \
	${OBJECTDIR}/jsonMapper/JsonFormatException.o \
	${OBJECTDIR}/jsonMapper/JsonMapper.o \
	${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o \
	${OBJECTDIR}/jsonMapper/PicoJsonIF.o \
	${OBJECTDIR}/jsonMapper/StateMapper.o \
	${OBJECTDIR}/jsonMapper/StatePartMapper.o \
	${OBJECTDIR}/jsonMapper/TransitionMapper.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
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

${OBJECTDIR}/MessageReception.o: MessageReception.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MessageReception.o MessageReception.cpp

${OBJECTDIR}/State.o: State.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/State.o State.cpp

${OBJECTDIR}/Symbol.o: Symbol.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Symbol.o Symbol.cpp

${OBJECTDIR}/Transition.o: Transition.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Transition.o Transition.cpp

${OBJECTDIR}/jsonMapper/FileIOException.o: jsonMapper/FileIOException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/FileIOException.o jsonMapper/FileIOException.cpp

${OBJECTDIR}/jsonMapper/JsonFormatException.o: jsonMapper/JsonFormatException.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonFormatException.o jsonMapper/JsonFormatException.cpp

${OBJECTDIR}/jsonMapper/JsonMapper.o: jsonMapper/JsonMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/JsonMapper.o jsonMapper/JsonMapper.cpp

${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o: jsonMapper/MessageReceptionMapper.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/MessageReceptionMapper.o jsonMapper/MessageReceptionMapper.cpp

${OBJECTDIR}/jsonMapper/PicoJsonIF.o: jsonMapper/PicoJsonIF.cpp 
	${MKDIR} -p ${OBJECTDIR}/jsonMapper
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/jsonMapper/PicoJsonIF.o jsonMapper/PicoJsonIF.cpp

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

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
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

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
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
