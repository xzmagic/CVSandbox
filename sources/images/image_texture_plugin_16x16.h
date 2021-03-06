#include <ximage.h>

static uint8_t texture_plugin_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x2A, 0x21, 0x1E, 0x34, 
    0x72, 0x4B, 0x2D, 0xA3, 0x79, 0x4E, 0x2C, 0xAB, 0x19, 0x14, 0x14, 0x1E, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x13, 0x12, 0x14, 0x05, 0x5B, 0x3E, 0x2C, 0x84, 
    0xBA, 0x73, 0x2D, 0xF9, 0xE2, 0x88, 0x2F, 0xFF, 0xEF, 0xBD, 0x82, 0xFF, 0x84, 0x5C, 0x3B, 0xC5, 0x12, 0x11, 0x11, 0x13, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x12, 0x11, 0x14, 0x02, 0x71, 0x4E, 0x2F, 0x9E, 
    0xDA, 0x8D, 0x30, 0xFF, 0xDF, 0x82, 0x24, 0xFF, 0xE5, 0xA3, 0x5F, 0xFF, 0xFB, 0xF3, 0xDF, 0xFF, 0xEF, 0xCF, 0xA6, 0xFF, 
    0x61, 0x3F, 0x26, 0x9A, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x4F, 0x38, 0x28, 0x6C, 
    0xD4, 0x8D, 0x30, 0xFF, 0xE0, 0x8A, 0x26, 0xFF, 0xDF, 0x9B, 0x4E, 0xFF, 0xF6, 0xDE, 0xBF, 0xFF, 0xFA, 0xEC, 0xD9, 0xFF, 
    0xFC, 0xFA, 0xEC, 0xFF, 0xC9, 0x9E, 0x72, 0xFB, 0x28, 0x1A, 0x14, 0x43, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x11, 0x11, 0x11, 0x01, 0x28, 0x1F, 0x1C, 0x0F, 0x2D, 0x20, 0x21, 0x24, 
    0x97, 0x68, 0x32, 0xCF, 0xE1, 0x9D, 0x35, 0xFF, 0xE6, 0xAA, 0x60, 0xFF, 0xF4, 0xD9, 0xAF, 0xFF, 0xF8, 0xE4, 0xC7, 0xFF, 
    0xF9, 0xE8, 0xD3, 0xFF, 0xFD, 0xF8, 0xEF, 0xFF, 0xF8, 0xE4, 0xC8, 0xFF, 0x69, 0x48, 0x2A, 0xA3, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x27, 0x1E, 0x1B, 0x26, 0x7B, 0x5A, 0x31, 0xA3, 0xB6, 0x8B, 0x40, 0xEB, 
    0xC0, 0x92, 0x42, 0xF7, 0xC6, 0x91, 0x3A, 0xFE, 0xCF, 0x94, 0x44, 0xFF, 0xEF, 0xCA, 0x90, 0xFF, 0xF6, 0xDD, 0xB6, 0xFF, 
    0xF7, 0xE2, 0xC6, 0xFF, 0xF9, 0xE8, 0xD4, 0xFF, 0xFC, 0xF5, 0xE9, 0xFF, 0xFD, 0xFC, 0xF2, 0xFF, 0xA9, 0x7C, 0x52, 0xDE, 
    0x11, 0x11, 0x11, 0x17, 0xFF, 0xFF, 0xFF, 0x00, 0x35, 0x26, 0x20, 0x32, 0xB0, 0x7B, 0x38, 0xE4, 0xE6, 0xAA, 0x40, 0xFF, 
    0xEA, 0xC5, 0x5D, 0xFF, 0xEB, 0xCE, 0x64, 0xFF, 0xED, 0xCC, 0x72, 0xFF, 0xD5, 0xA0, 0x4F, 0xFF, 0xD4, 0x9C, 0x53, 0xFF, 
    0xF5, 0xDC, 0xB4, 0xFF, 0xF8, 0xE4, 0xC7, 0xFF, 0xFA, 0xEC, 0xD9, 0xFF, 0xFC, 0xF5, 0xE9, 0xFF, 0xFA, 0xEC, 0xD8, 0xFF, 
    0xC1, 0x8B, 0x5C, 0xF8, 0x1F, 0x17, 0x13, 0x2F, 0x18, 0x14, 0x16, 0x07, 0xA4, 0x7C, 0x37, 0xC7, 0xE6, 0xC1, 0x3D, 0xFF, 
    0xE4, 0xB3, 0x4A, 0xFF, 0xE1, 0xA5, 0x4B, 0xFF, 0xDB, 0xA5, 0x44, 0xFF, 0xE6, 0xBB, 0x61, 0xFF, 0xEE, 0xCA, 0x89, 0xFF, 
    0xCC, 0x8B, 0x39, 0xFF, 0xF1, 0xCC, 0x99, 0xFF, 0xF6, 0xDC, 0xBB, 0xFF, 0xF4, 0xD8, 0xB8, 0xFF, 0xEC, 0xC8, 0xA3, 0xFF, 
    0xEB, 0xBD, 0x8F, 0xFF, 0xC5, 0x8C, 0x59, 0xFA, 0x29, 0x1D, 0x14, 0x39, 0x48, 0x33, 0x23, 0x4B, 0xDE, 0xB6, 0x37, 0xFF, 
    0xE6, 0xC8, 0x40, 0xFF, 0xE9, 0xC5, 0x51, 0xFF, 0xD3, 0x9A, 0x36, 0xFF, 0xCF, 0x91, 0x35, 0xFF, 0xCE, 0x90, 0x2F, 0xFF, 
    0xEB, 0xC0, 0x75, 0xFF, 0xC4, 0x79, 0x2C, 0xFF, 0xDA, 0x94, 0x5C, 0xFF, 0xDF, 0xA3, 0x6F, 0xFF, 0xDA, 0x9C, 0x69, 0xFF, 
    0xD7, 0x9C, 0x6B, 0xFF, 0xEB, 0xBF, 0x95, 0xFF, 0xCC, 0x98, 0x65, 0xF9, 0x23, 0x1A, 0x13, 0x34, 0x65, 0x4B, 0x29, 0x75, 
    0xE5, 0xC6, 0x34, 0xFF, 0xE3, 0xB5, 0x3B, 0xFF, 0xDB, 0xA4, 0x3E, 0xFF, 0xCD, 0x8A, 0x30, 0xFF, 0xD8, 0x9A, 0x3E, 0xFF, 
    0xD8, 0x9A, 0x42, 0xFF, 0xD8, 0x97, 0x48, 0xFF, 0xBE, 0x72, 0x2E, 0xFF, 0xE4, 0xAB, 0x75, 0xFF, 0xE3, 0xAD, 0x80, 0xFF, 
    0xE6, 0xB7, 0x8B, 0xFF, 0xEF, 0xD1, 0xB6, 0xFF, 0xFC, 0xF8, 0xE8, 0xFF, 0xBF, 0x91, 0x5E, 0xE7, 0x14, 0x11, 0x11, 0x22, 
    0x62, 0x48, 0x29, 0x69, 0xE1, 0xA8, 0x30, 0xFF, 0xD3, 0x92, 0x2D, 0xFF, 0xDA, 0xA0, 0x3C, 0xFF, 0xD7, 0x9B, 0x3A, 0xFF, 
    0xBA, 0x6D, 0x26, 0xFF, 0xCA, 0x7A, 0x32, 0xFF, 0xCA, 0x78, 0x30, 0xFF, 0xDB, 0x92, 0x4D, 0xFF, 0xF1, 0xCF, 0x9B, 0xFF, 
    0xF8, 0xE1, 0xC0, 0xFF, 0xFA, 0xED, 0xD7, 0xFF, 0xFE, 0xFC, 0xF7, 0xFF, 0xF9, 0xEE, 0xD3, 0xFF, 0x88, 0x5D, 0x31, 0xB4, 
    0x11, 0x11, 0x11, 0x07, 0x34, 0x26, 0x1C, 0x30, 0xD3, 0x9C, 0x42, 0xF8, 0xE6, 0xBF, 0x4C, 0xFF, 0xE9, 0xC4, 0x52, 0xFF, 
    0xDD, 0xA3, 0x45, 0xFF, 0xD1, 0x88, 0x37, 0xFF, 0xCA, 0x7D, 0x30, 0xFF, 0xDF, 0xA5, 0x5C, 0xFF, 0xEA, 0xB7, 0x75, 0xFF, 
    0xE3, 0xA1, 0x62, 0xFF, 0xEF, 0xC1, 0x8D, 0xFF, 0xF6, 0xDB, 0xBB, 0xFF, 0xFA, 0xEF, 0xD8, 0xFF, 0xE2, 0xAF, 0x77, 0xFE, 
    0x3B, 0x28, 0x17, 0x5A, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x9B, 0x76, 0x36, 0xAE, 0xEC, 0xD9, 0x6B, 0xFF, 
    0xED, 0xD1, 0x7D, 0xFF, 0xDB, 0x9D, 0x52, 0xFF, 0xE6, 0xB1, 0x61, 0xFF, 0xE1, 0xAC, 0x5E, 0xFF, 0xE0, 0x9D, 0x5B, 0xFF, 
    0xF3, 0xD3, 0x9F, 0xFF, 0xF3, 0xD1, 0xA5, 0xFF, 0xF1, 0xCB, 0x9E, 0xFF, 0xF7, 0xDC, 0xB8, 0xFF, 0xEF, 0xBD, 0x81, 0xFF, 
    0x74, 0x4C, 0x28, 0xA0, 0x11, 0x11, 0x11, 0x08, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x30, 0x23, 0x1A, 0x2D, 
    0xC9, 0x9E, 0x43, 0xE7, 0xEC, 0xD3, 0x73, 0xFF, 0xEE, 0xC5, 0x8C, 0xFF, 0xF3, 0xDB, 0xAC, 0xFF, 0xF7, 0xE2, 0xB7, 0xFF, 
    0xF0, 0xCA, 0x9F, 0xFF, 0xF7, 0xDF, 0xBE, 0xFF, 0xFB, 0xF3, 0xDE, 0xFF, 0xF9, 0xED, 0xCA, 0xFF, 0xE9, 0xBC, 0x86, 0xFF, 
    0x75, 0x51, 0x2C, 0xA2, 0x11, 0x11, 0x11, 0x14, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0x34, 0x27, 0x1B, 0x35, 0x9F, 0x73, 0x31, 0xC1, 0xDB, 0x9E, 0x4F, 0xFF, 0xEE, 0xC3, 0x77, 0xFF, 
    0xF2, 0xDD, 0x99, 0xFF, 0xF1, 0xD6, 0x99, 0xFF, 0xEF, 0xBE, 0x83, 0xFF, 0xDA, 0xA5, 0x6E, 0xF8, 0x98, 0x6D, 0x3D, 0xC0, 
    0x42, 0x2F, 0x1B, 0x63, 0x11, 0x11, 0x11, 0x0A, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x13, 0x11, 0x12, 0x09, 0x39, 0x29, 0x1A, 0x44, 
    0x62, 0x44, 0x21, 0x7A, 0x71, 0x52, 0x26, 0x94, 0x71, 0x51, 0x28, 0x94, 0x59, 0x3C, 0x20, 0x77, 0x29, 0x1D, 0x14, 0x3C, 
    0x11, 0x11, 0x11, 0x0A, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 
};

static const ximage image_texture_plugin_16x16 =
{
    &texture_plugin_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
