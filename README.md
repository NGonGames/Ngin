
##Building
If you wish to contribute you will find a Visual Studio 2012 Project and a Netbeans project in the projects/ directory that will let you build and add to the source.

###NGin
    Application                         PARTIAL
    GameFactory                         PARTIAL
    Input                               COMPLETE
    Window                              COMPLETE
    AudioContext                        MISSING
    RenderContext                       PARTIAL
    DataModel                           MISSING

###NGin::Resource
    Manager                             PARTIAL
    Resource                            PARTIAL
    Texture                             COMPLETE
    Shader                              MISSING*
    Audio                               MISSING
    Scene                               COMPLETE

###NGin::Game
    Object                              PARTIAL
    Controller                          MISSING
    Graphic                             MISSING
    Animation                           PARTIAL
    Image                               PARTIAL
    Mask                                MISSING
    PolyMask                            MISSING
    BitmapMask                          MISSING
    TileMap                             PARTIAL
    Tile                                PARTIAL
    TileMapParser                       PARTIAL
    Effect                              MISSING*

###NGin::Math
    Vector2                             COMPLETE
    Vector3                             MISSING
    Vector4                             MISSING
    Point                               COMPLETE**
    Rectangle                           MISSING
    Matrix3x3                           MISSING
    Matrix4x4                           MISSING


*And it will probably stay this way for a long time.

**A typedef'd Vector2