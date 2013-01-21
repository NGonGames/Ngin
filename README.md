
##Building
    If you wish to contribute you will find a Visual Studio 2012 Project and a Netbeans
    project in the projects/ directory that will let you build and add to the source.

#Completion Status by Namespace
###NGin
    Application                         COMPLETE
    GameFactory                         PARTIAL		// Add the remaining Factory methods for Images, Controllers, etc.
    Input                               COMPLETE
    Window                              COMPLETE
    AudioContext                        MISSING		// Implement an audio system
    RenderContext                       PARTIAL		// Add sprite rotation, and scaling
    DataModel                           MISSING		// Should have [SetValue, GetValue, WriteData, ReadData] - Base class

###NGin::Resource
    Manager                             PARTIAL		// Load the other resource types, have support for unloading
    Resource                            PARTIAL
    Texture                             PARTIAL		// should track images that use this texture
    Shader                              MISSING*
    Audio                               MISSING		// To be done with Audio system
    Scene                               COMPLETE

###NGin::Game
    Object                              PARTIAL		// Implement use of Controller, Graphic, and Mask classes
    Controller                          MISSING		// Interface for controlling game objects
    Graphic                             MISSING		// Base class for game object displays
    Animation                           PARTIAL		// Must be re-implemented as a container for graphics, not images
    Image                               PARTIAL		// Should contain more metadata about textures, notify texture when deleted
    Mask                                MISSING		// Base class for collision detection objects
    PolyMask                            MISSING		// collision detection object based on polygons
    BitmapMask                          MISSING		// collision detection object based on bitmaps
    TileMap                             PARTIAL		// must be reimplemented to use the tilemap parser, instead of parsing itself
    Tile                                PARTIAL		// need to add properties to tiles to make them more descriptive
    TileMapParser                       PARTIAL		// interface for parsing different level formats
    Effect                              MISSING*	// effectively a shader program. more design to be done before it can be implemented

###NGin::Math
    Vector2                             COMPLETE
    Vector3                             COMPLETE
    Vector4                             COMPLETE
    Rectangle                           COMPLETE
    Matrix3x3                           MISSING
    Matrix4x4                           MISSING


*And it will probably stay this way for a long time.