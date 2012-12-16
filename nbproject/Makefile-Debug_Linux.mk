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
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug_Linux
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/src/main.o \
	${OBJECTDIR}/src/NGinGraphics.o \
	${OBJECTDIR}/src/NGinWindow.o \
	${OBJECTDIR}/src/NGinResourceManager.o


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
LDLIBSOPTIONS=lib/linux/v8/libv8_base.a lib/linux/v8/libv8_snapshot.a lib/linux/SDL/libSDL_image.a lib/linux/SDL/libSDL_ttf.a -lpthread -lSDL

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin: lib/linux/v8/libv8_base.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin: lib/linux/v8/libv8_snapshot.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin: lib/linux/SDL/libSDL_image.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin: lib/linux/SDL/libSDL_ttf.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/src/main.o: src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/main.o src/main.cpp

${OBJECTDIR}/src/NGinGraphics.o: src/NGinGraphics.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/NGinGraphics.o src/NGinGraphics.cpp

${OBJECTDIR}/src/NGinWindow.o: src/NGinWindow.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/NGinWindow.o src/NGinWindow.cpp

${OBJECTDIR}/src/NGinResourceManager.o: src/NGinResourceManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} $@.d
	$(COMPILE.cc) -g -Iinclude -MMD -MP -MF $@.d -o ${OBJECTDIR}/src/NGinResourceManager.o src/NGinResourceManager.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ngin

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
