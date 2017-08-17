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


#if !defined(FIT_RUNTIME_EXCEPTION_HPP)
#define FIT_RUNTIME_EXCEPTION_HPP

#include <stdexcept>
#include <string>

namespace fit
{

class RuntimeException : public std::runtime_error
{
   public:
      RuntimeException(const std::string& msg = "")
         : runtime_error(msg)
      {
      }
};

} // namespace fit

#endif // !defined(FIT_RUNTIME_EXCEPTION_HPP)
