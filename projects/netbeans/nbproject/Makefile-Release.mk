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
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=gfortran
AS=as.exe

# Macros
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/_ext/1445274692/Vector2.o \
	${OBJECTDIR}/_ext/1445274692/ResourceManager.o \
	${OBJECTDIR}/_ext/1445274692/main.o \
	${OBJECTDIR}/_ext/1445274692/GameLevel.o \
	${OBJECTDIR}/_ext/1445274692/GameFactory.o \
	${OBJECTDIR}/_ext/1445274692/Game.o \
	${OBJECTDIR}/_ext/1445274692/Graphics.o \
	${OBJECTDIR}/_ext/1445274692/TiledTile.o \
	${OBJECTDIR}/_ext/1445274692/Input.o \
	${OBJECTDIR}/_ext/1445274692/Image.o \
	${OBJECTDIR}/_ext/1445274692/Texture.o \
	${OBJECTDIR}/_ext/1445274692/TiledMap.o \
	${OBJECTDIR}/_ext/1445274692/Window.o \
	${OBJECTDIR}/_ext/1445274692/Resource.o \
	${OBJECTDIR}/_ext/1445274692/Scene.o \
	${OBJECTDIR}/_ext/1445274692/Animation.o \
	${OBJECTDIR}/_ext/1445274692/GameObject.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1445274692/Vector2.o: ../../src/Vector2.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Vector2.o ../../src/Vector2.cpp

${OBJECTDIR}/_ext/1445274692/ResourceManager.o: ../../src/ResourceManager.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/ResourceManager.o ../../src/ResourceManager.cpp

${OBJECTDIR}/_ext/1445274692/main.o: ../../src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/main.o ../../src/main.cpp

${OBJECTDIR}/_ext/1445274692/GameLevel.o: ../../src/GameLevel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/GameLevel.o ../../src/GameLevel.cpp

${OBJECTDIR}/_ext/1445274692/GameFactory.o: ../../src/GameFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/GameFactory.o ../../src/GameFactory.cpp

${OBJECTDIR}/_ext/1445274692/Game.o: ../../src/Game.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Game.o ../../src/Game.cpp

${OBJECTDIR}/_ext/1445274692/Graphics.o: ../../src/Graphics.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Graphics.o ../../src/Graphics.cpp

${OBJECTDIR}/_ext/1445274692/TiledTile.o: ../../src/TiledTile.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/TiledTile.o ../../src/TiledTile.cpp

${OBJECTDIR}/_ext/1445274692/Input.o: ../../src/Input.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Input.o ../../src/Input.cpp

${OBJECTDIR}/_ext/1445274692/Image.o: ../../src/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Image.o ../../src/Image.cpp

${OBJECTDIR}/_ext/1445274692/Texture.o: ../../src/Texture.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Texture.o ../../src/Texture.cpp

${OBJECTDIR}/_ext/1445274692/TiledMap.o: ../../src/TiledMap.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/TiledMap.o ../../src/TiledMap.cpp

${OBJECTDIR}/_ext/1445274692/Window.o: ../../src/Window.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Window.o ../../src/Window.cpp

${OBJECTDIR}/_ext/1445274692/Resource.o: ../../src/Resource.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Resource.o ../../src/Resource.cpp

${OBJECTDIR}/_ext/1445274692/Scene.o: ../../src/Scene.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Scene.o ../../src/Scene.cpp

${OBJECTDIR}/_ext/1445274692/Animation.o: ../../src/Animation.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Animation.o ../../src/Animation.cpp

${OBJECTDIR}/_ext/1445274692/GameObject.o: ../../src/GameObject.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/GameObject.o ../../src/GameObject.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
