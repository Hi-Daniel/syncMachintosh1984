#ifndef macPaint
#define macPaint
#include <Arduino.h>

// DEFINE DEFAULT COLORS //

#define BACKGROUND_BLACK 0x0000
#define BACKGROUND_GREY 0x0000
#define BACKGROUND_BEIGE 0x0000
#define BACKGROUND_SHADOW 0x0000
#define ERASER_PINK 0x0000
#define WHITE 0x0000
#define COLOR_PICK_1 0x0000
#define COLOR_PICK_2 0x0000
#define COLOR_PICK_3 0x0000
#define COLOR_PICK_4 0x0000
#define COLOR_PICK_5 0x0000
#define COLOR_PICK_6 0x0000

// DEFINE TOOLS //

#define PEN 0
#define ERASER 1
#define SHAPE 2
#define CLEAR_ALL 3

// DEFINE SIZES //

#define thin 0
#define medium 1
#define thick 2

// DEFINE SHAPES //

#define LINE 0
#define RECTANGLE 1
#define CIRCLE 2
#define HEART 3

// DEFINE macPaint class //
class macPaint
{
public:
    // setup screen with all elements
    bool setup_macPaint();
    // change the current tool
    void select_tool(int8_t tool);
    // change the current color
    void select_color(int32_t color);
    // change the current shape
    void select_shape(int8_t shape);
    // change the current size
    void select_size(int8_t size);
    // use the current_tool
    void use_tool();
    // retrieve the current canvas data
    [SOME SORT OF DATA BUS] get_canvasData();

private:
    [SOME SORT OF DATA BUS] _canvasData;
    [SOME SORT OF ENUM] _current_tool;
    [SOME SORT OF ENUM] _current_color;
    [SOME SORT OF ENUM] _current_shape;
};

#endif // ends #ifndef macPaint