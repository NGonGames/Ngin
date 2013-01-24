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
CND_CONF=Debug_Windows
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1445274692/RenderContext.o \
	${OBJECTDIR}/_ext/1445274692/Vector2.o \
	${OBJECTDIR}/_ext/1445274692/Camera.o \
	${OBJECTDIR}/_ext/1445274692/AudioContext.o \
	${OBJECTDIR}/_ext/1445274692/Tile.o \
	${OBJECTDIR}/_ext/1445274692/main.o \
	${OBJECTDIR}/_ext/1445274692/GameFactory.o \
	${OBJECTDIR}/_ext/1445274692/Input.o \
	${OBJECTDIR}/_ext/1445274692/Graphic.o \
	${OBJECTDIR}/_ext/1445274692/Vector3.o \
	${OBJECTDIR}/_ext/1445274692/Object.o \
	${OBJECTDIR}/_ext/1445274692/Image.o \
	${OBJECTDIR}/_ext/1445274692/Mask.o \
	${OBJECTDIR}/_ext/1445274692/TileMap.o \
	${OBJECTDIR}/_ext/1445274692/Audio.o \
	${OBJECTDIR}/_ext/1445274692/Texture.o \
	${OBJECTDIR}/_ext/1445274692/BitmapMask.o \
	${OBJECTDIR}/_ext/1445274692/Vector4.o \
	${OBJECTDIR}/_ext/1445274692/Controller.o \
	${OBJECTDIR}/_ext/1445274692/Rectangle.o \
	${OBJECTDIR}/_ext/1445274692/Level.o \
	${OBJECTDIR}/_ext/1445274692/Window.o \
	${OBJECTDIR}/_ext/1445274692/Manager.o \
	${OBJECTDIR}/_ext/1445274692/Scene.o \
	${OBJECTDIR}/_ext/1445274692/Resource.o \
	${OBJECTDIR}/_ext/1445274692/Application.o \
	${OBJECTDIR}/_ext/1445274692/Animation.o \
	${OBJECTDIR}/_ext/1445274692/RectMask.o \
	${OBJECTDIR}/_ext/1445274692/PolyMask.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-std=c++0x
CXXFLAGS=-std=c++0x

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L../../lib/win/static -lmingw32 -lSDLmain -lSDL_image -lSDL_ttf -lSDL.dll -lboost_filesystem-mgw46-1_52 -lboost_system-mgw46-1_52

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/netbeans ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1445274692/RenderContext.o: ../../src/RenderContext.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/RenderContext.o ../../src/RenderContext.cpp

${OBJECTDIR}/_ext/1445274692/Vector2.o: ../../src/Vector2.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Vector2.o ../../src/Vector2.cpp

${OBJECTDIR}/_ext/1445274692/Camera.o: ../../src/Camera.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Camera.o ../../src/Camera.cpp

${OBJECTDIR}/_ext/1445274692/AudioContext.o: ../../src/AudioContext.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/AudioContext.o ../../src/AudioContext.cpp

${OBJECTDIR}/_ext/1445274692/Tile.o: ../../src/Tile.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Tile.o ../../src/Tile.cpp

${OBJECTDIR}/_ext/1445274692/main.o: ../../src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/main.o ../../src/main.cpp

${OBJECTDIR}/_ext/1445274692/GameFactory.o: ../../src/GameFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/GameFactory.o ../../src/GameFactory.cpp

${OBJECTDIR}/_ext/1445274692/Input.o: ../../src/Input.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Input.o ../../src/Input.cpp

${OBJECTDIR}/_ext/1445274692/Graphic.o: ../../src/Graphic.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Graphic.o ../../src/Graphic.cpp

${OBJECTDIR}/_ext/1445274692/Vector3.o: ../../src/Vector3.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Vector3.o ../../src/Vector3.cpp

${OBJECTDIR}/_ext/1445274692/Object.o: ../../src/Object.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Object.o ../../src/Object.cpp

${OBJECTDIR}/_ext/1445274692/Image.o: ../../src/Image.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Image.o ../../src/Image.cpp

${OBJECTDIR}/_ext/1445274692/Mask.o: ../../src/Mask.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Mask.o ../../src/Mask.cpp

${OBJECTDIR}/_ext/1445274692/TileMap.o: ../../src/TileMap.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/TileMap.o ../../src/TileMap.cpp

${OBJECTDIR}/_ext/1445274692/Audio.o: ../../src/Audio.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Audio.o ../../src/Audio.cpp

${OBJECTDIR}/_ext/1445274692/Texture.o: ../../src/Texture.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Texture.o ../../src/Texture.cpp

${OBJECTDIR}/_ext/1445274692/BitmapMask.o: ../../src/BitmapMask.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/BitmapMask.o ../../src/BitmapMask.cpp

${OBJECTDIR}/_ext/1445274692/Vector4.o: ../../src/Vector4.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Vector4.o ../../src/Vector4.cpp

${OBJECTDIR}/_ext/1445274692/Controller.o: ../../src/Controller.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Controller.o ../../src/Controller.cpp

${OBJECTDIR}/_ext/1445274692/Rectangle.o: ../../src/Rectangle.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Rectangle.o ../../src/Rectangle.cpp

${OBJECTDIR}/_ext/1445274692/Level.o: ../../src/Level.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Level.o ../../src/Level.cpp

${OBJECTDIR}/_ext/1445274692/Window.o: ../../src/Window.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Window.o ../../src/Window.cpp

${OBJECTDIR}/_ext/1445274692/Manager.o: ../../src/Manager.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Manager.o ../../src/Manager.cpp

${OBJECTDIR}/_ext/1445274692/Scene.o: ../../src/Scene.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Scene.o ../../src/Scene.cpp

${OBJECTDIR}/_ext/1445274692/Resource.o: ../../src/Resource.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Resource.o ../../src/Resource.cpp

${OBJECTDIR}/_ext/1445274692/Application.o: ../../src/Application.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Application.o ../../src/Application.cpp

${OBJECTDIR}/_ext/1445274692/Animation.o: ../../src/Animation.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/Animation.o ../../src/Animation.cpp

${OBJECTDIR}/_ext/1445274692/RectMask.o: ../../src/RectMask.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/RectMask.o ../../src/RectMask.cpp

${OBJECTDIR}/_ext/1445274692/PolyMask.o: ../../src/PolyMask.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/1445274692
	${RM} $@.d
	$(COMPILE.cc) -g -I../../include -std=c++0x -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1445274692/PolyMask.o ../../src/PolyMask.cpp

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
