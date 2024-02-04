/*
Header file for macPaint helper class.
by: Daniel Jimenez Gil
This helper class will take care of rendering the
macPaint application on the 2.4" TFT display.
it makes use of a TFT library to render the graphics
while providing a simple interface that facilitates making
changes to the app without the need of understanding the app
layout.
*/

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

#define THIN 0
#define MEDIUM 1
#define THICK 2

// DEFINE SHAPES //

#define LINE 0
#define RECTANGLE 1
#define CIRCLE 2
#define HEART 3

// DEFINE TOOLBAR SIZES AND POSITIONS (in pixels) //
// Full screen size is 240x320

#define CANVAS_WIDTH 180
#define CANVAS_HEIGHT 240
#define CANVAS_PADDING 10
#define TOOLBAR_PADDING 3

// DEFINE macPaint class //
class macPaint
{
public:
    void macPaint();
    // setup screen with all elements
    bool init_macPaint();
    // change the current tool
    void select_tool(int8_t tool);
    // change the current color
    void select_color(int32_t color);
    // change the current shape
    void select_shape(int8_t shape);
    // change the current size
    void select_size(int8_t size);
    // use the current_tool
    void use_tool(int32_t xs, int32_t ys, int32_t xe, int32_t ye);
    // update convas with data
    void set_canvasData([SOME SORT OF DATA BUS] data);
    // retrieve the current canvas data
    [SOME SORT OF DATA BUS] get_canvasData();

private:
    [SOME SORT OF DATA BUS] _canvasData;
    int8_t _current_tool;
    int8_t _current_color;
    int8_t _current_shape;

    void _drawToolbar();
    void _drawColorbar();
    void _drawShapebar();
    void _drawSizebar();
    void _initializeCanvas();
};

#endif // ends #ifndef macPaint