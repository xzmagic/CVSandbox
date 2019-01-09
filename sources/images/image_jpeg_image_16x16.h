#include <ximage.h>

static uint8_t jpeg_image_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0x5D, 0x92, 0xDD, 0xFF, 0x64, 0x97, 0xE0, 0xFF, 0x62, 0x97, 0xE1, 0xFF, 0x64, 0x97, 0xDF, 0xFF, 
    0x63, 0x97, 0xDF, 0xFF, 0x65, 0x97, 0xDF, 0xFF, 0x66, 0x99, 0xDF, 0xFF, 0x65, 0x98, 0xE0, 0xFF, 0x67, 0x99, 0xE1, 0xFF, 
    0x66, 0x9A, 0xE2, 0xFF, 0x68, 0x9D, 0xE4, 0xFF, 0x62, 0x95, 0xE0, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x67, 0x9E, 0xE7, 0xFF, 0x6B, 0xA4, 0xEA, 0xFF, 0x6D, 0xA4, 0xEA, 0xFF, 
    0x6C, 0xA3, 0xE9, 0xFF, 0x6E, 0xA8, 0xF0, 0xFF, 0x6D, 0xA4, 0xEA, 0xFF, 0x6F, 0xA4, 0xEA, 0xFF, 0x6D, 0xA6, 0xEA, 0xFF, 
    0x71, 0xA9, 0xEC, 0xFF, 0x72, 0xA7, 0xEC, 0xFF, 0x71, 0xAB, 0xED, 0xFF, 0x6B, 0xA5, 0xEC, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x73, 0xAC, 0xF0, 0xFF, 0x79, 0xB2, 0xF0, 0xFF, 
    0x78, 0xB0, 0xF0, 0xFF, 0x79, 0xBA, 0xFF, 0xFF, 0x7B, 0xBD, 0xFF, 0xFF, 0x81, 0xBD, 0xFF, 0xFF, 0x78, 0xAF, 0xF1, 0xFF, 
    0x7D, 0xB3, 0xF2, 0xFF, 0x7E, 0xB4, 0xEF, 0xFF, 0x7E, 0xB4, 0xF2, 0xFF, 0x7F, 0xB4, 0xF3, 0xFF, 0x7A, 0xB2, 0xF6, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x84, 0xBA, 0xF8, 0xFF, 
    0x87, 0xBB, 0xF8, 0xFF, 0x87, 0xCA, 0xFF, 0xFF, 0x91, 0xC0, 0xF6, 0xFF, 0x7D, 0x53, 0x47, 0xFF, 0x71, 0xA0, 0xE0, 0xFF, 
    0xA2, 0xE3, 0xFF, 0xFF, 0x8D, 0xC2, 0xFF, 0xFF, 0x8C, 0xBE, 0xFD, 0xFF, 0x95, 0xCD, 0xFF, 0xFF, 0x9F, 0xE0, 0xFF, 0xFF, 
    0x98, 0xDE, 0xFF, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0x93, 0xC5, 0xFE, 0xFF, 0x9D, 0xD7, 0xFF, 0xFF, 0xA3, 0xE0, 0xFF, 0xFF, 0x95, 0x71, 0x70, 0xFF, 0xBB, 0x87, 0x74, 0xFF, 
    0x63, 0x65, 0x88, 0xFF, 0x95, 0xD9, 0xFF, 0xFF, 0xBC, 0xF6, 0xFF, 0xFF, 0xB9, 0xFB, 0xFF, 0xFF, 0x99, 0xD6, 0xFF, 0xFF, 
    0x76, 0x9A, 0xB6, 0xFF, 0x3A, 0x44, 0x4C, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xC3, 0xEF, 0xFF, 0xFF, 0xBE, 0xF1, 0xFF, 0xFF, 0xA6, 0x92, 0x93, 0xFF, 0x80, 0x65, 0x60, 0xFF, 
    0x4E, 0x50, 0x56, 0xFF, 0x40, 0x38, 0x2B, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x02, 0x17, 0x21, 0xFF, 0x5E, 0x67, 0x6F, 0xFF, 
    0x73, 0x4E, 0x53, 0xFF, 0x89, 0x59, 0x58, 0xFF, 0x6B, 0x45, 0x40, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x56, 0x60, 0x84, 0xFF, 0x38, 0x3F, 0x55, 0xFF, 0x1F, 0x1B, 0x28, 0xFF, 
    0x12, 0x1C, 0x32, 0xFF, 0x3F, 0x37, 0x51, 0xFF, 0x85, 0x76, 0x73, 0xFF, 0x4D, 0x47, 0x50, 0xFF, 0x31, 0x22, 0x36, 0xFF, 
    0x34, 0x23, 0x2C, 0xFF, 0x74, 0x50, 0x67, 0xFF, 0x3A, 0x31, 0x3F, 0xFF, 0x62, 0x4D, 0x5D, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0x40, 0x43, 0x2A, 0xFF, 0x63, 0x68, 0x42, 0xFF, 
    0x9A, 0x9A, 0x78, 0xFF, 0x96, 0x92, 0x70, 0xFF, 0x78, 0x7E, 0x54, 0xFF, 0x64, 0x71, 0x51, 0xFF, 0x51, 0x57, 0x41, 0xFF, 
    0x51, 0x58, 0x48, 0xFF, 0x9F, 0xA7, 0x8A, 0xFF, 0x83, 0x8F, 0x6A, 0xFF, 0x4E, 0x55, 0x35, 0xFF, 0x4F, 0x53, 0x42, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 
    0xF9, 0xF9, 0xFB, 0xFF, 0xF9, 0xF9, 0xFB, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 
    0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xB4, 0xB4, 0xB4, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 
};

static const ximage image_jpeg_image_16x16 =
{
    &jpeg_image_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
