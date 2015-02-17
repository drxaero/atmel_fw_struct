// Copyright (c) 2015 by Janus Cheng.
// This file is for the HHD Software Hex Editor Neo

#pragma byte_order(BigEndian)

#include "stddefs.h"
 
// Forward declarations

struct Frame_t;
struct FrameHeader_t;

public struct AtmelFwFrames_t
{
    [noindex] Frame_t frames[*];
};

struct Frame_t
{
    FrameHeader_t header;
    uint8 data[header.data_size-2];
};


#pragma pack(2)
// Pixel Color
struct FrameHeader_t
{
    uint16 data_size;
    uint16 crc;
};

