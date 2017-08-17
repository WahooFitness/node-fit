////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2015 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 16.10Release
// Tag = development-akw-16.10.00-0
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_VIDEO_FRAME_MESG_HPP)
#define FIT_VIDEO_FRAME_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class VideoFrameMesg : public Mesg
{
   public:
      VideoFrameMesg(void) : Mesg(Profile::MESG_VIDEO_FRAME)
      {
      }

      VideoFrameMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timestamp field
      // Units: s
      // Comment: Whole second part of the timestamp
      ///////////////////////////////////////////////////////////////////////
      FIT_DATE_TIME GetTimestamp(void) const
      {
         return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timestamp field
      // Units: s
      // Comment: Whole second part of the timestamp
      ///////////////////////////////////////////////////////////////////////
      void SetTimestamp(FIT_DATE_TIME timestamp)
      {
         SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timestamp_ms field
      // Units: ms
      // Comment: Millisecond part of the timestamp.
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetTimestampMs(void) const
      {
         return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timestamp_ms field
      // Units: ms
      // Comment: Millisecond part of the timestamp.
      ///////////////////////////////////////////////////////////////////////
      void SetTimestampMs(FIT_UINT16 timestampMs)
      {
         SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns frame_number field
      // Comment: Number of the frame that the timestamp and timestamp_ms correlate to
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetFrameNumber(void) const
      {
         return GetFieldUINT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set frame_number field
      // Comment: Number of the frame that the timestamp and timestamp_ms correlate to
      ///////////////////////////////////////////////////////////////////////
      void SetFrameNumber(FIT_UINT32 frameNumber)
      {
         SetFieldUINT32Value(1, frameNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_VIDEO_FRAME_MESG_HPP)
